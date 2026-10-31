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
s32 D_8021563C(void); extern s32 D_800A9AD0[6];
s32 func_80261B00(void *arg0, void *arg1, s32 *arg2){
char *__repair_addr;
s32 local; s32 mode=*(u8*)((u8*)arg1+0x1e); s32 value=(s32)*(f32*)((u8*)arg0+0x30); s32 n=*arg2; local=value;
switch(mode){
case 0: if(local>=n-1){local=n-1;*(f32*)((u8*)arg0+0x2c)=(f32)*arg2;} break;
case 1: if(local>=n)local=n-1;break;
case 2: break;
case 3: {s32 divisor=2*n-2;if(divisor>0)local%=divisor;else local=0;if(local>=n)local=2*n-(local+2);}break;
case 4: local%=n;break;
__repair_addr = (char *)((u8*)arg0+0x38);

case 5: if(*(s32*)((u8*)arg0+0x38)==-1)*(s32*)(__repair_addr)=D_8021563C()%n;local=*(s32*)((u8*)arg0+0x38);break;
}
return local;
}
