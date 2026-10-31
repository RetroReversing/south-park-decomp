/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_8029A1E4();                            /* extern */
f32 func_8029AA80(f32);                             /* extern */
extern M2C_UNK D_800AA180;
extern f32 D_800AA188;
extern f32 D_800AA18C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24, 0x30, 0x34, 0x48, 0x4c, 0x50, 0x54, 0x68, 0x6c, 0x70, 0x74], gap at: 0x18. */
void func_8027AFD0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1f;
    f32 temp_fs1f_2;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs2f;
    f32 temp_fs2f_2;
    f32 temp_fs3;
    f32 temp_fs3_2;
    f32 temp_fs3f;
    f32 temp_fs3f_2;
    f32 temp_fs4;
    f32 temp_fs4_2;
    f32 temp_fs4f;
    f32 temp_fs4f_2;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 var_fs0f;

    func_8029A1E4();
    temp_fs4f = arg4 - arg1;
    temp_fs3f = arg5 - arg2;
    temp_fs4 = arg6 - arg3;
    temp_fv0f = M2C_FIELD(&D_800AA180, f32 *, 4) / func_8029AA80((temp_fs4f * temp_fs4f) + (temp_fs3f * temp_fs3f) + (temp_fs4 * temp_fs4));
    temp_fs4f_2 = temp_fs4f * temp_fv0f;
    temp_fs4_2 = temp_fs4 * temp_fv0f;
    temp_fs3f_2 = temp_fs3f * temp_fv0f;
    var_fs0f = (arg8 * temp_fs4_2) - (arg9 * temp_fs3f_2);
    temp_fs1f = (arg7 * temp_fs3f_2) - (arg8 * temp_fs4f_2);
    temp_fs1 = (arg9 * temp_fs4f_2) - (arg7 * temp_fs4_2);
    if ((var_fs0f == 0.0f) && (temp_fs1 == 0.0f) && (temp_fs1f == 0.0f)) {
        var_fs0f = D_800AA188;
    }
    temp_fs0 = D_800AA18C;
    temp_fv0f_2 = temp_fs0 / func_8029AA80((var_fs0f * var_fs0f) + (temp_fs1 * temp_fs1) + (temp_fs1f * temp_fs1f));
    temp_fs0f = var_fs0f * temp_fv0f_2;
    temp_fs1f_2 = temp_fs1f * temp_fv0f_2;
    temp_fs1_2 = temp_fs1 * temp_fv0f_2;
    temp_fs2f = (temp_fs3f_2 * temp_fs1f_2) - (temp_fs4_2 * temp_fs1_2);
    temp_fs3 = (temp_fs4_2 * temp_fs0f) - (temp_fs4f_2 * temp_fs1f_2);
    temp_fs2 = (temp_fs4f_2 * temp_fs1_2) - (temp_fs3f_2 * temp_fs0f);
    temp_fv0f_3 = temp_fs0 / func_8029AA80((temp_fs2f * temp_fs2f) + (temp_fs3 * temp_fs3) + (temp_fs2 * temp_fs2));
    temp_fs2f_2 = temp_fs2f * temp_fv0f_3;
    temp_fs3_2 = temp_fs3 * temp_fv0f_3;
    temp_fs2_2 = temp_fs2 * temp_fv0f_3;
    temp_fv1 = arg1 * temp_fs2f_2;
    temp_ft0f = arg2 * temp_fs3_2;
    temp_ft1 = arg3 * temp_fs2_2;
    M2C_FIELD(arg0, f32 *, 0) = temp_fs0f;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_fs1_2;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_fs1f_2;
    M2C_FIELD(arg0, f32 *, 8) = temp_fs4f_2;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_fs3f_2;
    M2C_FIELD(arg0, f32 *, 0x28) = temp_fs4_2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = temp_fs0;
    M2C_FIELD(arg0, f32 *, 4) = temp_fs2f_2;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_fs3_2;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_fs2_2;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) -((arg1 * temp_fs0f) + (arg2 * temp_fs1_2) + (arg3 * temp_fs1f_2));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -((arg1 * temp_fs4f_2) + (arg2 * temp_fs3f_2) + (arg3 * temp_fs4_2));
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -(temp_fv1 + temp_ft0f + temp_ft1);
}
