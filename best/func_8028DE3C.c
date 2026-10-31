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

s32 D_80210B64(s32 *, s32, M2C_UNK, s32 *);         /* extern */
s32 *D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK D_80221864(M2C_UNK, s32 *);                 /* extern */
void *func_8028FE64(s32);                           /* extern */
extern M2C_UNK D_800AA9D0;
extern void *D_800B3628;
extern s32 D_800B3630;
extern s32 D_800CCAA8;
extern s32 *D_800CCAE8;

s32 func_8028DE3C(s32 arg0) {
    s32 sp20;
    s32 *var_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    void *temp_v0_2;
    void *var_a0;

    if (D_800B3630 == 0) {
        return 0;
    }
    M2C_FIELD(D_800B3628, s32 *, 0x3C) = 0;
    temp_v0 = D_80210B64(D_800CCAE8, D_800CCAA8, 0, &sp20);
    if (temp_v0 == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = D_8021FCD8(0, temp_v0, sp20, 0x13, 0, 0, &D_800AA9D0, 1);
    }
    if (var_s0 != NULL) {
        temp_v0_2 = func_8028FE64(*var_s0);
        temp_v1 = *D_800CCAE8 - 1;
        var_a1 = 0;
        if (temp_v1 > 0) {
            var_a0 = temp_v0_2;
            do {
                if (M2C_FIELD(var_a0, s32 *, 8) == arg0) {
                    if (M2C_FIELD(var_a0, s32 *, 0xC) == 0) {
                        M2C_FIELD(D_800B3628, s32 *, 0x3C) = (s32) M2C_FIELD(var_a0, s32 *, 0);
                    }
                    M2C_FIELD(D_800B3628, s32 *, 0x40) = var_a1;
                }
                var_a1 += 1;
                var_a0 += 0x48;
            } while (var_a1 < temp_v1);
        }
        D_80221864(0, var_s0);
    }
    return M2C_FIELD(D_800B3628, s32 *, 0x3C);
}
