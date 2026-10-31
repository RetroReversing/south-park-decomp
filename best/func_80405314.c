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

extern M2C_UNK D_800D77D0;

s32 func_80405314(void *arg0) {
    s32 var_v0;
    s32 var_v1;

    if (!(M2C_FIELD(&D_800D77D0, s32 *, 0) & 0x80)) {
        var_v1 = 0xFFFB0000;
        goto block_4;
    }
    var_v1 = 0xFFF70000;
    if (M2C_FIELD(&D_800D77D0, u8 *, 0x18) == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8) | 0x80000;
    } else {
block_4:
        var_v0 = M2C_FIELD(arg0, s32 *, 8) & (var_v1 | 0xFFFF);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_v0;
    return 0;
}
