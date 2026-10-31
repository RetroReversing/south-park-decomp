extern f32 D_800A9A84,D_800A9A88,D_800F14E8;
s32 func_802607B8(s32 dummy,s32 a1,s32 a2,s32 a3){f32 f;s32 v1=a1,v0;if(v1<a2){v1+=a3;f=D_800A9A84;v0=a2<v1;goto label;}if(a2<v1){v1-=a3;f=D_800A9A88;v0=v1<a2;label:D_800F14E8=f;if(v0)v1=a2;}return v1;}
extern s32 *D_8022154C(s32,s32,s32,const void*);extern s32 func_8026AC4C(s32,s32,s32);extern u8 D_800A98C8,D_800A98C0;
void func_802606A0(void*o,s32 n){s32*p;s32 sz=n*0x24;*(s32*)((char*)o+0xff8)=n;p=D_8022154C(0,sz,0x23,&D_800A98C8);*(s32**)((char*)o+0xff0)=p;*(s32*)((char*)o+0xff4)=p[0];func_8026AC4C(p[0],0,sz);}
void func_8026062C(void*o,s32 n){s32*p;s32 sz=n*0xfb0;*(s32*)((char*)o+8)=n;p=D_8022154C(0,sz,0x23,&D_800A98C0);*(s32**)o=p;*(s32*)((char*)o+4)=p[0];func_8026AC4C(p[0],0,sz);}
extern s32 func_8025A6F4(s32);extern s32 D_8021E930(s32*,s32);extern s32 D_8021E76C(s32*,s32);s32 func_8025F9A0(void*o){s32 n=*(s32*)((char*)o+12);if(n){func_8025A6F4(n);D_8021E930((s32*)((char*)o+12),n);D_8021E76C((s32*)((char*)o+32),n);}return n;}
