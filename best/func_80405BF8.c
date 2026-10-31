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

extern M2C_UNK D_800C97A0;
extern M2C_UNK D_800C97AC;
extern s32 D_800D77D0;

s32 func_80405BF8(void *arg0) {
    s32 var_v0;

    if (D_800D77D4 & 2) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8) | 0x40000;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 8) & 0xFFFBFFFF;
    }
    M2C_FIELD(arg0, s32 *, 8) = var_v0;
    if (D_800D77D0 & 2) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_800C97A0;
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_800C97AC;
    }
    return 0;
}
