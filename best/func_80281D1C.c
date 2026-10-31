/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

f32 func_802821F8(void *);                          /* extern */
f32 func_8029AA80(f32);                             /* extern */
extern M2C_UNK D_800AA310;
extern f32 D_800AA318;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24], gap at: 0x18. */
f32 func_80281D1C(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs0f;

    temp_fv0 = arg1 - M2C_FIELD(arg0, f32 *, 0xC);
    temp_fv1 = arg2 - M2C_FIELD(arg0, f32 *, 0x10);
    temp_fa0 = arg3 - M2C_FIELD(arg0, f32 *, 0x14);
    temp_fv0_2 = func_8029AA80((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
    if ((temp_fv0_2 == 0.0f) || (temp_fv1_2 = M2C_FIELD(arg0, f32 *, 0x18), (temp_fv1_2 == 0.0f))) {
        var_fs0f = M2C_FIELD(&D_800AA310, f32 *, 4);
    } else {
        var_fs0f = 0.0f;
        if (temp_fv0_2 < temp_fv1_2) {
            var_fs0f = D_800AA318 - (temp_fv0_2 / temp_fv1_2);
        }
    }
    temp_fs0f = var_fs0f * M2C_FIELD(arg0, f32 *, 0x1C);
    temp_fs0 = func_802821F8(arg0 + 0x20);
    return temp_fs0f * temp_fs0 * func_802821F8(arg0 + 0x2C);
}
