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
extern s32 D_29F03C; extern void *D_800B493C; s32 func_802A0500(void); s32 D_802A0520(s32);
void func_8029D5B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
 s32 a=arg3; s32 c=(s32)&D_29F03C; s32 b; s32 rv; void *old;
 *(s32*)((char*)arg0+0x100)=c>>31; *(s32*)((char*)arg0+0x104)=c;
 *(s32*)((char*)arg0+0x14)=arg1; *(s32*)arg0=0; *(s32*)((char*)arg0+8)=0; *(s32*)((char*)arg0+0x11c)=arg2;
 *(s32*)((char*)arg0+0x38)=a>>31; *(s32*)((char*)arg0+0x3c)=a;
 *(s32*)((char*)arg0+0x118)=0x0400ff03; *(s32*)((char*)arg0+0x128)=0x3f; *(s32*)((char*)arg0+0x12c)=0x01000800; *(s32*)((char*)arg0+0x18)=0;
 b=arg4; {s32 d=b-16; c=(b>>31)-1+(d<0xfffffff0U); *(s32*)((char*)arg0+0xf0)=c; *(s32*)((char*)arg0+0xf4)=d;}
 *(s32*)((char*)arg0+4)=arg5; *(s16*)((char*)arg0+0x10)=1; *(s16*)((char*)arg0+0x12)=0;
 rv=func_802A0500(); old=D_800B493C; D_800B493C=arg0; *(void**)((char*)arg0+0xc)=old; D_802A0520(rv);
}
