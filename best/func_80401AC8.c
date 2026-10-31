typedef struct {char pad[0x20];void *sub;s32 flags;} Root; typedef struct {char pad[0x14];void *actor;} Root2; typedef struct {char pad[0x3C];void *base;} Render; typedef struct {char pad[0x424];s32 active;f32 h;} Actor;
extern void func_8026AC4C(s32*,s32,s32);extern void *D_80205468(void*,s32,s32);extern void D_802131F8(s32*,void*,s32,void**);extern void D_80213AF4(void*,s32*,s32*);extern void D_80216A68();extern void D_8021A290(void*);extern void D_80217244(void*);extern void D_8020FC74(void);extern void D_80219028(void*,void*);extern void D_8020FCC4(s32,s32);
extern s32 D_800AB9FC,D_800B2608,D_800BF014;extern f32 D_800ABA00,D_800BC380,D_800BC384,D_800BC388,D_800BC38C;extern void *D_800CCA80;extern s32 *D_800D7F68;
void func_80401AC8(Root*r,void*x,void*y,Render*q){
char *__repair_addr;

 s32 tmp[16];s32 *actor; s32 *s2; s32 *out; s32 *p; s32 *model; s32 *cmd;
 if (0) tmp[2]=1;
 func_8026AC4C(&tmp[0],0,12);actor=(s32*)r->sub;if(!actor)return;s2=(s32*)((char*)r->sub+0x14);if(actor[0x424/4]==0)return;
__repair_addr = (char *)((char*)actor+0x428);

 if(!(r->flags&0x100000))*(f32*)(__repair_addr)=0;
 cmd=D_800D7F68;D_800D7F68+=2;cmd[0]=0xDA380007;cmd[1]=*(s32*)((char*)q->base+0x3c)+(D_800AB9FC<<6)+0x358;
 D_802131F8(&tmp[12],(char*)s2+0x18,0x3f800000,(void**)&D_800D7F68);
 tmp[4]=s2[3];tmp[5]=s2[4];tmp[6]=s2[5];*(f32*)&tmp[5]-=*(f32*)((char*)actor+0x428)*(*(f32*)&tmp[13])*D_800BC380;
 D_80213AF4((char*)q->base+0x16c,&tmp[4],&tmp[8]);
 if(!(r->flags&0x100000)){model=D_80205468(D_800CCA80,s2[1],s2[2]);if(!model){actor[0x424/4]=0;out=0;}else{actor[0x424/4]=1;p=actor+0x368/4;do{*p++=*model++;*p++=*model++;*p++=*model++;*p++=*model++;}while(model!=(s32*)((char*)model+0xB0));out=actor+0x368/4;actor[0x368/4]=actor[0x36c/4]=actor[0x37c/4]=actor[0x380/4]=actor[0x384/4]=0;*(f32*)((char*)actor+0x370)=D_800BC384;*(f32*)((char*)actor+0x428)=*(f32*)((char*)actor+0x398);}
 D_80216A68(actor,-1,s2[0],D_800B2608,out,-1,0,*(f32*)((char*)q->base+0x14)+D_800BC388,&tmp[8],&tmp[9],&tmp[10],0,s2[6],s2[7],s2[8],&tmp[0],&tmp[1],&tmp[2]);r->flags|=0x100000;}
 if(D_800BF014!=5){D_800BF014=5;cmd=D_800D7F68;D_800D7F68+=6;cmd[0]=0xE3000A01;cmd[1]=0x100000;cmd[2]=0xE3000C00;cmd[3]=0x80000;cmd[4]=0xE3001201;cmd[5]=0x2000;}
}
