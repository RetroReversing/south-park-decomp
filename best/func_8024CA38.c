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
s32 D_80200528(void *, void *); s32 D_8023E95C(void *, void *, s32); void func_80263BAC(void *,void*,s32,s32,s32,s32,s32,s32);
extern u8 D_800CCA80,D_24CB48,D_800B0D68; extern s32 D_800CCA84;
void func_8024CA38(u8 *arg0, u8 *arg1) {
 s32 mode; s32 zero[2]; zero[0]=0;zero[1]=0;
 *(u8**)(arg1+0x28)=&D_800B0D68; *(u8**)(arg1+0xc4)=&D_24CB48;
 if ((D_80200528(&D_800CCA80,arg0)^1)==0) {
  D_8023E95C(arg0,arg1,0); *(s32*)(arg1+0x17c)=0;
  func_80263BAC(arg0,arg0,6,*(s32*)(arg0+4),*(s32*)(arg0+8),*(s32*)(arg0+0xc),zero[0],zero[1]);
 } else {
  D_8023E95C(arg0,arg1,1); *(s32*)(arg1+0x17c)=1;
  func_80263BAC(arg0,arg0,7,*(s32*)(arg0+4),*(s32*)(arg0+8),*(s32*)(arg0+0xc),zero[0],zero[1]);
 }
 if(D_800CCA84==0) *(s32*)(arg0+0xf4)|=0x40000000;
}
