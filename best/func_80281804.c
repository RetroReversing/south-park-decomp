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
typedef struct { s32 n0; f32 f4; f32 f8; s32 base; f32 f10; f32 f14; f32 f18; f32 f1c; s32 n20; s32 start; s32 count; } T818;
u32 func_80280AA4();
void func_80280154();
void func_80281804(T818 *arg0, u32 arg1) {
 s32 temp_a0,temp_lo,temp_s1,temp_s6;
 s32 var_s1,var_s2;
 u32 *var_s3;
 u32 temp_v0,temp_v1,var_s0,var_s4;
 u32 scratch[64];
 temp_v1=arg0->start;
 temp_a0=arg1<temp_v1;
 temp_s6=arg0->n0*4+6;
 if(temp_a0 || arg1>=(u32)(temp_v1+arg0->n20)) {
  var_s2=arg0->count;
  var_s4=temp_v1;
  temp_lo=var_s2*temp_s6;
  temp_s1=arg0->base;
  var_s0=var_s4+arg0->n20;
  var_s1=temp_s1+temp_lo;
  if(temp_a0) {
   var_s1=temp_s1;
   var_s2=0;
   var_s4=0;
   var_s0=func_80280AA4(var_s1,6);
  }
  var_s3=&scratch[var_s2];
loop:
  var_s1+=temp_s6;
  if(arg1<var_s4) {
   var_s3++;
   goto fill;
  }
  var_s3++;
  if(arg1>=var_s0) goto fill;
  if(var_s2!=arg0->count) {
   arg0->start=var_s4;
   arg0->count=var_s2;
   func_80280154(arg0);
  }
  goto done;
fill:
  var_s2++;
  var_s4=var_s0;
  temp_v0=func_80280AA4(var_s1,6);
  *var_s3=temp_v0;
  var_s0+=temp_v0;
  goto loop;
 }
done:;
}
