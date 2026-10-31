#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern s32 D_80221948(s32,s32);
extern s32 D_802368C0(void*,void*);
extern s32 D_80242418(void*,void*);
extern s32 D_80247034(void);
extern s32 D_80247110(void*,void*);
extern s32 func_8025A554(void*);
extern s32 D_800CE2FC;
void func_80264830(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
char *__repair_addr;

 void *p; void *t; void *s1; s32 *s3; s32 a0,a1; u8 *v;
 s1=arg0;p=(char*)s1+0x168;t=*(void**)((char*)s1+0x14);a0=*(s32*)t;s3=(s32*)s1;
 if(a0==1) s3=(s32*)((char*)t+0x14);
 else if(a0==12) s3=(s32*)((char*)t+0x14);
 D_80242418(s1,p); *(s32*)p|=0x20;
__repair_addr = (char *)((char*)s1+0xf4);

 *(s32*)(__repair_addr)&=0xff7fffff;
 *(s32*)((char*)s1+0xf4)&=0xffefffff;
 a1=*(s32*)((char*)p+0x100); if(a1){D_80221948(0,a1);*(s32*)((char*)p+0x100)=0;}
 if(*(s32*)((char*)p+0xf0)) D_80247110(s1,p);
 v=*(u8**)((char*)p+0x108); if(v&&*v==1&&*(u16*)((char*)s1+0xd8)!=0x3f7) D_802368C0(s1,p);
 t=*(void**)((char*)s1+0x14); if(*(s32*)t==12&&D_800CE2FC==0x1f4) D_80247034();
 if(!(*s3&0x20)) *(s32*)((char*)s1+0xf4)&=0xffff7fff;
 if(*(s32*)((char*)s1+0xf4)&0x4000000) func_8025A554(s1);
}
