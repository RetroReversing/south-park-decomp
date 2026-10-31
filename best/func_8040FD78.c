typedef struct{u32 words[24];u8 limit;u8 state;} Obj;
extern s32 func_804123D4(Obj*); extern s32 func_8041249C(Obj*);
extern s32 func_804118C0(Obj*,u16,s32,s32,u32,u32*,s32);
extern s32 func_8029BC60(s32,s32,u32,void*); extern s32 func_8041207C(Obj*,void*,s32,u32);
extern s32 func_8040FFA4(Obj*,void*,u8,s16*,u32,u16*,s32);
extern s32 func_8029C018(s32,s32,u32,void*,s32);
s32 func_8040FD78(Obj*a,s32 b,s32 c,u8*d,s32 e) {
 s32 ret=5,sp140; u16 sp144=0,sp146=0; u8 buf[0x120]; u8 *p; s32 i; u8 s1,s3,s0;
 if(!(b&0xffff))goto done;if(c==0)goto done;if(!(a->words[0]&1))goto done;
 ret=func_804123D4(a);if(ret==2)goto done;ret=5;
 if(a->state){a->state=0;ret=func_8041249C(a);if(ret)goto done;}
 ret=func_804118C0(a,b&0xffff,c,d,e,0,&sp140);if(ret)goto done;if(sp140==-1){ret=5;goto done;}
 ret=func_8029BC60(a->words[1],a->words[2],(a->words[23]+((u16*)&sp140)[1])&0xffff,buf);if(ret)goto done;
 s1=buf[0x107];s3=buf[0x106];s0=s3;if(s0>=a->limit){ret=3;goto done;}
 do{ret=func_8041207C(a,buf+0x20,0,s0);if(ret)goto done;ret=func_8040FFA4(a,buf+0x20,s1,&sp144,s0,&sp146,1);if(ret)goto done;ret=func_8041207C(a,buf+0x20,1,s0);if(ret)goto done;if(sp146==1)break;s3=sp146;s1=((u8*)&sp146)[1];s0=s3;}while(s0<a->limit);
 if(s3>=a->limit){ret=3;goto done;}
 for(i=0;i<16;i++)buf[0x13f-i]=0;
 *(s32*)buf=0;*(s16*)(buf+4)=0;*(s16*)(buf+6)=0;*(s16*)(buf+10)=0;
 for(i=0;i<4;i++)buf[0x12f-i]=0;buf[8]=0;
 ret=func_8029C018(a->words[1],a->words[2],(a->words[23]+*(u16*)(buf+0x142))&0xffff,buf,0);
done:return ret;
}
