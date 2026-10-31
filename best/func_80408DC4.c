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

extern M2C_UNK D_8010DF10;

s32 func_80408DC4(s32 arg0) {
    s32 var_v0;
    void *temp_a1;

    temp_a1 = (char *)((arg0 << 5)); temp_a1 += (s32)(&D_8010DF10);
    if (M2C_FIELD(temp_a1, u8 *, 0xE) == 0) {
        return -3;
    }
    var_v0 = -0xB;
    if (M2C_FIELD(temp_a1, u16 *, 8) == 0x3531) {
        var_v0 = 0;
        if (M2C_FIELD(temp_a1, s32 *, 4) != 0x4E445450) {
            var_v0 = -0xB;
        }
    }
    return var_v0;
}
