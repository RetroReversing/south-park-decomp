extern f32 D_800A9A84,D_800A9A88,D_800F14E8;
s32 func_802607B8(s32 a1,s32 a2,s32 a3){s32 v1=a1;f32 f;if(v1<a2){v1+=a3;f=D_800A9A84;goto joined;}if(a2<v1){v1-=a3;f=D_800A9A88;v1=(v1<a2)?a2:v1;D_800F14E8=f;}return v1;joined:D_800F14E8=f;return (a2<v1)?a2:v1;}
extern s32 *D_8022154C(s32,s32,s32,const void*);extern s32 func_8026AC4C(s32,s32,s32);extern u8 D_800A98C8,D_800A98C0;
void func_802606A0(void*o,s32 n){s32 size=n*0x24;s32*p;o=(char*)o;p=(s32*)D_8022154C(0,size,0x23,&D_800A98C8);*(s32*)((char*)o+0xFF8)=n;*(s32**)((char*)o+0xFF0)=p;*(s32*)((char*)o+0xFF4)=p[0];func_8026AC4C(p[0],0,size);}
void func_8026062C(void*o,s32 n){s32 size=n*0xFB0;s32*p;p=(s32*)D_8022154C(0,size,0x23,&D_800A98C0);*(s32*)((char*)o+8)=n;*(s32**)o=p;*(s32*)((char*)o+4)=p[0];func_8026AC4C(p[0],0,size);}
extern s32 func_8025AD74(s32);extern s32 D_8021E930(s32*,s32);extern s32 D_8021E76C(s32*,s32);
s32 func_8025F9A0(void*o){s32 n=*(s32*)((char*)o+0xC);if(n){func_8025AD74(n);D_8021E930((s32*)((char*)o+0xC),n);D_8021E76C((s32*)((char*)o+0x20),n);}return n;}
