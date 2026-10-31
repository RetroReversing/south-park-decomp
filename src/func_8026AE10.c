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

void func_8026AE10(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_v0;
    u8 *temp_v0;
    u8 *temp_v1;

    var_v0 = arg1;
    if (arg1 < 0) {
        var_v0 = arg1 + 7;
    }
    temp_a3 = var_v0 >> 3;
    temp_a0 = 1 << (arg1 - (temp_a3 * 8));
    if (arg2 != 0) {
        temp_v1 = arg0 + temp_a3;
        *temp_v1 |= temp_a0;
        return;
    }
    temp_v0 = arg0 + temp_a3;
    *temp_v0 &= ~temp_a0;
}
