extern s32 D_800CE0FC;
extern s32 D_800F4B8C[];
extern s32 D_800F4B9C[];
extern s32 D_80212AB8(s32 *,s32 *);
extern s32 D_80253EB0(s32 *,void *,s32,s32,s32,s32,s32);
void func_80256EA0(void *p,s32 arg1) {
char *__repair_addr;

 s32 pad[8],out[4],vec[4],src[3]; s32 *ptr; s32 flag;
 ptr=*(s32 **)((char*)p+0xf8); flag=ptr[0]&0x10;
 if(flag) { src[0]=D_800F4B9C[0]; src[1]=D_800F4B9C[1]; src[2]=D_800F4B9C[2]; }
 else {
__repair_addr = (char *)((char*)p+0x18);
 src[0]=*(s32*)(__repair_addr); src[1]=*(s32*)((char*)p+0x1c); src[2]=*(s32*)((char*)p+0x20); }
 D_80212AB8(out,src);
 vec[0]=*(s32*)((char*)p+0x110); vec[1]=arg1; vec[2]=src[0]; vec[3]=src[1];
 out[0]=D_800F4B8C[0]; out[1]=D_800F4B8C[1]; out[2]=D_800F4B8C[2];
 if (*(s32*)((char*)p+0x18c)&0x200000) vec[0]=0; else vec[0]=D_800F4B8C[-1];
 vec[1]=-5; vec[2]=(*(s32*)((char*)p+0x40)&0x100002)|1; vec[3]=0;
 D_80253EB0(&D_800CE0FC,p,*(s32*)((char*)p+0x108),*(s32*)((char*)p+0x10c),-5,vec[2],0);
}
