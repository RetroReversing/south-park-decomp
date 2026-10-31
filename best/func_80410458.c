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
typedef struct {s32 unk0;char pad[0x5c];s32 unk60;u8 unk64;} S10458;s32 func_804123D4(S10458*);s32 func_8041207C(S10458*,u16*,s32,s32);
s32 func_80410458(S10458 *arg0, s32 *arg1){s32 count=0;u16 buf[0x80];u8 pi;u8 i;s32 start,j,m; s32 three=3;
if(!(arg0->unk0&1))return 5;
{ s32 r=func_804123D4(arg0); if(r==2)return r; }
if(arg0->unk64>count){for(i=0;i<arg0->unk64;i++){pi=i;if(func_8041207C(arg0,&buf[0],0,pi)!=0)return 0;m=pi==0?arg0->unk60:1;for(j=m;j<0x80;j++){if(buf[j]==three)count++;}}*arg1=count<<8;}return count;}
