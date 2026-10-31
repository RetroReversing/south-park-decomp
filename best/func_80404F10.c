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

extern M2C_UNK D_800BF0DC;
extern M2C_UNK D_800BF0E0;
extern M2C_UNK D_800BF0EC;

s32 func_80404F10(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;

    M2C_FIELD(&D_800BF0E0, s32 *, 0) = 0;
    if (M2C_FIELD(&D_800BF0E0, s32 *, 4) == 0) {
        return 0;
    }
    var_a0 = M2C_FIELD(&D_800BF0E0, s32 *, -4);
    var_v0 = var_a0 + 1;
    if (var_a0 < 0x11) {
        do {
            *(&D_800BF0EC + var_a0) = *(&D_800BF0EC + var_v0);
            var_a0 = var_v0;
            var_v0 = var_a0 + 1;
        } while (var_a0 < 0x11);
    }
    temp_v1 = M2C_FIELD(&D_800BF0DC, s32 *, 0) - 1;
    M2C_FIELD(&D_800BF0DC, s32 *, 0) = temp_v1;
    M2C_FIELD(&D_800BF0DC, s32 *, 8) = (s32) (M2C_FIELD(&D_800BF0DC, s32 *, 8) - 1);
    if (temp_v1 < 0) {
        M2C_FIELD(&D_800BF0DC, s32 *, 0) = 0;
    }
    *(&D_800BF0EC + M2C_FIELD(&D_800BF0DC, s32 *, 0)) = 0;
    return 0;
}
