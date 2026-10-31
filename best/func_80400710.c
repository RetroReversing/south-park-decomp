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
extern s32 D_80000300,D_800BEE20,D_800BEE30;
extern s32 D_800B3C00,D_800D64F8;
extern u16 D_800BEFAE[],D_8010D9B0;
extern void func_8029CFF8(void *);
extern void func_80400160(s32,s32);
extern void func_8025D55C(void *);
void func_80400710(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
 s32 t1=0,v1=0,t0,mode=D_80000300; u16 value; volatile s32 frame[2];
 if(mode==1) goto L68;
 if(mode<2) {t0=arg0<0x141;if(mode==0)goto Lzero;goto Lcalc;}
 t0=arg0<0x141;if(mode==2)goto Ltwo;goto Lcalc;
Lzero:v1=1;goto L68;
Ltwo:v1=2;
L68:t0=arg0<0x141;
Lcalc:
 if(!t0)t1|=4;
 if(D_800BEE30)t1|=2;
 if(!t0)t1|=1;
 value=*(u16 *)((char *)D_800BEFAE+(t1<<2)+(v1<<5));
 D_8010D9B0=value;
 if(D_800BEE20==0)func_8029CFF8((char *)D_800B3C00+((s16)value*0x50));
 else func_80400160(*(s32 *)((char *)&arg4+0x20),*(s32 *)((char *)&arg4+0x24));
 func_8025D55C(&D_800D64F8);
}
