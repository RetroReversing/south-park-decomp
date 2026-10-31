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
typedef struct { char pad[0x60]; s32 limit; } Obj;
s32 func_80410144();
s32 func_8040FFA4(void *arg0, u16 *arg1, u8 arg2, void *arg3, u8 arg4, u16 *arg5, s32 arg6) {
 s32 temp_a1, temp_s1, temp_v1, var_v0, var_v1; u16 var_s0; u32 temp_a0,temp_a0_2,temp_v1_2;
 var_s0=arg1[(arg2&255)]; temp_a0=var_s0&65535; var_v1=1;
 if(temp_a0!=1){var_v0=var_s0&255;if((temp_a0>>8)==0)goto block_4;}
 else {var_v1=1;if(arg4==0){block_4:var_v1=((Obj*)arg0)->limit;}var_v0=var_s0&255;}
 if((var_v0>=var_v1)||(var_v0=3,var_s0==1)){
 *arg5=var_s0;if(arg6==1)arg1[arg2&255]=3;
 temp_s1=arg4&255;var_v0=func_80410144(arg0,arg2&255,arg3,temp_s1);temp_v1=var_s0&65535;
 if(var_v0==0){var_v0=0;if(temp_v1!=1){if(temp_v1>=((Obj*)arg0)->limit){
loop_14: temp_a1=var_s0&255;var_s0=arg1[temp_a1];arg1[temp_a1]=3;var_v0=func_80410144(arg0,temp_a1,arg3,temp_s1);temp_v1_2=var_s0&65535;
 if(var_v0==0){temp_a0_2=temp_v1_2>>8;if((temp_a0_2!=temp_s1)||((s32)temp_v1_2<((Obj*)arg0)->limit)){if(((s32)temp_v1_2>=((Obj*)arg0)->limit)&&(temp_a0_2==temp_s1))arg1[var_s0&255]=3;goto block_20;}goto loop_14;}
 }else{block_20:*arg5=var_s0;var_v0=0;}}}}
 return var_v0;
}
