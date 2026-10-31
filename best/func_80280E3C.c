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

extern f32 D_800AA2D0;

void func_80280E3C(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_fv0f;
    s32 temp_a0_2;
    s32 temp_fv1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    u32 temp_a0;
    u32 temp_a2;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    u32 var_v1;

    temp_fv0f = (((arg4 - arg2) / arg3) * (f32) ((1 << arg1) - 1)) + D_800AA2D0;
    if (temp_fv0f >= 0.0f) {
        var_a0 = (s32) temp_fv0f;
    } else {
        temp_fv1 = (s32) temp_fv0f;
        var_a0_2 = 1;
        if ((f32) temp_fv1 == temp_fv0f) {
            var_a0_2 = 0;
        }
        var_a0 = temp_fv1 - var_a0_2;
    }
    temp_a2 = (1 << arg1) - 1;
    var_v1 = temp_a2;
    temp_v0 = arg0 & 0x1F;
    temp_a0 = var_a0 & temp_a2;
    if (temp_v0 == 0) {
        var_a1 = temp_a0;
        var_a2 = 0;
        var_a3 = 0;
    } else {
        var_v1 = temp_a2 << temp_v0;
        temp_v0_2 = 0x20 - temp_v0;
        var_a2 = temp_a2 >> temp_v0_2;
        var_a1 = temp_a0 << temp_v0;
        var_a3 = temp_a0 >> temp_v0_2;
    }
    temp_a0_2 = (arg0 & 0xF0000000) | ((u32) (arg0 & 0x0FFFFFE0) >> 3);
    M2C_FIELD(temp_a0_2, s32 *, 0) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0) & ~var_v1) | var_a1);
    M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 4) & ~var_a2) | var_a3);
}
