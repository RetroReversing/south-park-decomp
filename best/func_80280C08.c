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

void func_80280C08(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_a2;
    u32 temp_a3;
    u32 var_a2;
    u32 var_a3;
    u32 var_t1;
    u32 var_v1;

    temp_a3 = (1 << arg1) - 1;
    temp_t0 = *arg0;
    var_v1 = temp_a3;
    temp_a2 = arg2 & temp_a3;
    temp_v0 = temp_t0 & 0x1F;
    if (temp_v0 == 0) {
        var_t1 = temp_a2;
        var_a3 = 0;
        var_a2 = 0;
    } else {
        var_v1 = temp_a3 << temp_v0;
        temp_v0_2 = 0x20 - temp_v0;
        var_a3 = temp_a3 >> temp_v0_2;
        var_t1 = temp_a2 << temp_v0;
        var_a2 = temp_a2 >> temp_v0_2;
    }
    temp_a0 = (temp_t0 & 0xF0000000) | ((u32) (temp_t0 & 0x0FFFFFE0) >> 3);
    M2C_FIELD(temp_a0, s32 *, 0) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0) & ~var_v1) | var_t1);
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) ((M2C_FIELD(temp_a0, s32 *, 4) & ~var_a3) | var_a2);
    *arg0 += arg1;
}
