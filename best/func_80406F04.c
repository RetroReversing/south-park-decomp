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
extern u8 D_800D77EB[];
extern f32 D_800BC638,D_800BC63C,D_800D7918,D_800D791C;
extern u8 D_800CC760[];
extern s32 D_800D7920,D_800D7924,D_800D7928;
extern u8 D_00415C88;
s32 func_80406388();
s32 D_80209838();
typedef struct { s8 b0; s8 b1; char pad[0x12B]; f32 f12D; s32 pad2[2]; s32 i139; } G;
s32 func_80406F04(s32 arg0, s32 *arg1){
 G *p; f32 z;
 if((void *)arg1[7]==&D_00415C88){
  p=(G *)D_800D77EB;
  D_800D7924=0;
  D_800D7918=(f32)p->b0*D_800BC638;
  D_800D7920=p->b1;
  z=0.0f; p->i139=1; D_800D791C=z;
  if(D_800D7918==z){D_800D7928=0;p->f12D=D_800BC63C;}
  func_80406388(p);
 }
 D_80209838(&D_800CC760[0]);
 return 0;
}
