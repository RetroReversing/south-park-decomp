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

s32 *D_80210ADC(s32 *, s32);                        /* extern */
M2C_UNK func_8028CC8C(s32, s32, s32, f32);          /* extern */
s32 func_8028FE64(s32 *);                           /* extern */
extern void *D_800B3628;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x30. */
s32 func_8028D200(s32 arg0, f32 arg1) {
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fs1;
    s32 *temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_fs1 = arg1;
    var_fs0 = 0.0f;
    var_s2 = 0;
    var_s3 = 0;
    var_s1 = 0;
    var_s0 = 0;
    var_fs0f = 0.0f;
loop_1:
    if ((var_s0 < *D_80210ADC(M2C_FIELD(D_800B3628, s32 **, 4), 0)) && ((var_s1 = var_s0, temp_v0 = D_80210ADC(D_80210ADC(D_80210ADC(M2C_FIELD(D_800B3628, s32 **, 4), 0), var_s1), 1), var_s2 = M2C_FIELD(temp_v0, s32 *, 4), var_fs0 = var_fs0f, var_s3 = func_8028FE64(temp_v0), var_fs0f = var_fs0 + M2C_FIELD(((var_s2 * 0x24) + var_s3), f32 *, -8), (var_s1 != 0)) || !(var_fs1 <= var_fs0)) && ((var_s1 != (*D_80210ADC(M2C_FIELD(D_800B3628, s32 **, 4), 0) - 1)) || !(var_fs0f < var_fs1))) {
        var_s0 = var_s1 + 1;
        if (!(var_fs0 <= var_fs1) || !(var_fs1 <= var_fs0f)) {
            goto loop_1;
        }
    }
    if (M2C_FIELD(D_80210ADC(D_80210ADC(D_80210ADC(M2C_FIELD(D_800B3628, s32 **, 4), 0), var_s1), 2), s32 *, 4) != 0) {
        var_fs1 = var_fs0;
    }
    func_8028CC8C(arg0, var_s3, var_s2, var_fs1 - var_fs0);
    return arg0;
}
