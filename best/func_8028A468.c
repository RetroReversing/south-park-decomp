/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_802417F0(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8028A718(s32, void *, M2C_UNK *);      /* extern */

void func_8028A468(void *arg0) {
    M2C_UNK sp18;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s1;
    void *temp_a0;
    void *temp_s0_2;
    void *temp_s1;
    void *var_a2;

    if (arg0 != NULL) {
        var_s1 = -1;
        var_a1 = 0;
        var_a2 = arg0;
        do {
            temp_a0 = M2C_FIELD(var_a2, void **, 0x15AC);
            if ((temp_a0 != NULL) && ((var_s1 == -1) || ((u16) M2C_FIELD(temp_a0, u16 *, 0x16C) < (u16) M2C_FIELD(M2C_FIELD((arg0 + (var_s1 * 4)), void **, 0x15AC), u16 *, 0x16C)))) {
                var_s1 = var_a1;
            }
            var_a1 += 1;
            var_a2 += 4;
        } while (var_a1 <= 0);
        if (var_s1 != -1) {
            temp_s1 = arg0 + (var_s1 * 4);
            temp_s0 = M2C_FIELD(temp_s1, s32 *, 0x15AC);
            D_802417F0(&sp18, temp_s0, 0x50, 0, 0x80000, 0);
            temp_s0_2 = temp_s0 + 0x168;
            M2C_FIELD(temp_s0_2, s32 *, 0x108) = temp_s0;
            func_8028A718(temp_s0, temp_s0_2, &sp18);
            M2C_FIELD(temp_s1, s32 *, 0x15AC) = 0;
            M2C_FIELD(temp_s0_2, s32 *, 0x64) = 0;
        }
    }
}
