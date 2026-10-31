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
extern s8 D_800CB62C[];
extern s32 D_800D77D8;
extern s8 D_8010E800[];
s32 func_8040F3C4(s32 arg0, s32 arg1){
 s32 a2=-1,a3=0,v1,zero,flags,one,a0;
 for(v1=a3;a3<0x14;v1++){if(D_800CB62C[v1]==arg0){a2=v1;break;}a3++;}
 zero=0;flags=(s32)&D_800D77D8;one=1;a3=-1;
 for(a2=a2+arg1;;a2=a2+arg1){
  if(a2<0)a2=0x13;
  if(a2>=0x14)a2=0;
  a0=D_800CB62C[a2];
  if((*(s32*)flags&(one<<a0))!=0){if(D_8010E800[a0]==a3)return a0;}
  if(zero)return 0;
 }
}
