typedef struct Dev { s32 unk0; s32 unk4; s32 unk8; char pad0C[0x52]; u16 unk5E; s32 unk60; u8 count; } Dev;
typedef struct { s32 unk0; u16 flag; } Arg6;
typedef struct { s32 head; u8 pad[0x20]; } Packet;
extern s32 func_8029C018(s32,s32,s32,Packet*,s32);
extern s32 func_8040FB1C(Dev*,void*,s32,s32*,s32,s32*,s32*);
extern s32 func_80410458(Dev*,s32*);
extern s32 func_804118C0(Dev*,s32,s32,u8*,u8*,void*);
extern s32 func_8041207C(Dev*,void*,s32,s32);
extern s32 func_804123D4(Dev*);
s32 func_8040F778(Dev *dev,u16 count,s32 src,u8 *first,u8 *second,s32 amount,Arg6 *state){
char *__repair_addr;

 Packet packet;u16 raw[128];u8 table[256];s32 current,chunk,last,aux,ret,i,started=0;u16 savedCount=count,code;u8 previous=0,id=0;u8*p=first,*q=second;
 if(!count||!src)goto fail;current=amount+255;if(current<0)current=amount+510;current>>=8;
 if(!(dev->unk0&1))goto fail;ret=func_804123D4(dev);if(ret==2)return 2;
 ret=func_804118C0(dev,count,src,p,q,state);if(ret&&ret!=5)return ret;
 if(state->unk0!=-1)return 9;func_80410458(dev,&chunk);if(chunk<amount)return 7;
 if(!current)goto fail;ret=func_804118C0(dev,0,0,0,0,state);if(ret&&ret!=5)return ret;
 if(state->unk0==-1)return 8;if(!dev->count)goto finish;id=0;
 do{ret=func_8041207C(dev,raw,0,id);if(ret)return ret;
 ret=func_8040FB1C(dev,raw,current,&chunk,id,&last,&aux);if(ret)return ret;
 if(chunk!=-1){if(started){table[aux]=id;table[aux+1]=((u8*)&chunk)[3];ret=func_8041207C(dev,table,1,previous);if(ret)return ret;}else code=(id<<8)|((u8*)&chunk)[3];
 for(i=0;i<128;i++)table[2*i]=raw[i];started++;previous=id;aux=last;
 if(chunk<current){current-=chunk;id++;continue;}current=0;break;}id++;}while(id<dev->count);
finish:if(current>0)return 3;if(chunk==-1)return 3;table[aux]=id;table[aux+1]=((u8*)&chunk)[3];ret=func_8041207C(dev,table,1,previous);if(ret)return ret;
 packet.head=src;
__repair_addr = (char *)((char*)&packet+4);
*(u16*)(__repair_addr)=savedCount;*(u16*)((char*)&packet+6)=code;
 for(i=0;i<16;i++)((u8*)&packet)[0x10+i]=*p++;for(i=0;i<4;i++)((u8*)&packet)[0xC+i]=*q++;
 return func_8029C018(dev->unk4,dev->unk8,(dev->unk5E+state->flag)&0xffff,&packet,0);
fail:return 5;}
