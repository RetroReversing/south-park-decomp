/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void *func_80280CAC(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
unsigned int __repair_literal;

    u32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_fv1f;
    s32 var_a3;
    s32 var_v0;
    u32 var_a1;
    u32 var_a2;
    u32 var_v1;
    u32 var_v1_2;

    temp_fv1 = arg2 - arg1;
    sp4 = arg1;
    sp8 = temp_fv1;
    temp_fv1_2 = temp_fv1 / (arg3 + arg3);
    if (temp_fv1_2 <= 0.0f) {
        var_a3 = (s32) temp_fv1_2 + 1;
    } else {
        temp_fv1f = (s32) temp_fv1_2;
        var_a3 = temp_fv1f; var_a3 += 1;
        if ((f32) temp_fv1f != temp_fv1_2) {
            var_a3 = temp_fv1f + 2;
        }
    }
    var_a1 = 0;
    var_a2 = 0;
    var_v1 = 0;
    var_v0 = 1 << 0;
    do {
        if (var_a3 & var_v0) {
            var_a1 += 1;
            var_a2 = var_v1;
        }
        var_v1 += 1;
        var_v0 = 1 << var_v1;
    } while (var_v1 < 0x20U);
    var_v1_2 = var_a2;
__repair_literal = 2U;

    if (var_a1 >= __repair_literal) {
        var_v1_2 += 1;
    }
    sp0 = var_v1_2;
    M2C_FIELD(arg0, u32 *, 0) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = sp8;
    return arg0;
}
