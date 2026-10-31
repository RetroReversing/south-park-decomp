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

M2C_UNK D_80211B2C(M2C_UNK *, void *);              /* extern */
M2C_UNK D_80213A34(M2C_UNK *);                      /* extern */
M2C_UNK func_80261104(void *, void *, M2C_UNK, M2C_UNK *); /* extern */
extern s32 D_800AB9FC;

void func_802627E8(void *arg0, M2C_UNK arg1) {
    M2C_UNK sp10;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_fv0;
    void *temp_a1;
    void *var_a0;
    void *var_a1;
    void *var_s0;
    void *var_s1;

    if (M2C_FIELD(arg0, s32 *, 0x48) >= 2) {
        var_s0 = M2C_FIELD(arg0, void **, 0x40);
        var_s1 = M2C_FIELD(var_s0, void **, 4);
        D_80213A34(&sp10);
        if (var_s0 != NULL) {
loop_2:
            var_a0 = var_s0;
            if (var_s1 != NULL) {
                var_a1 = var_s1;
                if (M2C_FIELD(var_s0, f32 *, 0x10) == M2C_FIELD(var_s1, f32 *, 0x10)) {
loop_4:
                    var_a0 = var_a1;
                    var_a1 = M2C_FIELD(var_a1, void **, 4);
                    if (var_a0 != NULL) {
                        if ((var_a1 == NULL) || (M2C_FIELD(var_a0, f32 *, 0x10) != M2C_FIELD(var_a1, f32 *, 0x10))) {
                            goto block_7;
                        }
                        goto loop_4;
                    }
                    goto block_9;
                }
block_7:
                if ((var_a0 == NULL) || (var_a1 == NULL)) {
block_9:
                    sp40 = M2C_FIELD(var_s0, f32 *, 0x10);
                    temp_a1 = var_s0 + ((D_800AB9FC << 6) + 0x28);
                    sp44 = M2C_FIELD(var_s0, f32 *, 0x14);
                    temp_fv0 = M2C_FIELD(var_s0, f32 *, 0x18);
                    var_s0 = var_s1;
                    sp48 = temp_fv0;
                    D_80211B2C(&sp10, temp_a1);
                } else {
                    func_80261104(var_a0, var_a1, arg1, &sp10);
                    D_80211B2C(&sp10, var_s0 + ((D_800AB9FC << 6) + 0x28));
                    var_s0 = var_s1;
                }
                var_s1 = M2C_FIELD(var_s0, void **, 4);
                if (var_s0 != NULL) {
                    goto loop_2;
                }
            }
        }
        sp40 = M2C_FIELD(var_s0, f32 *, 0x10);
        sp44 = M2C_FIELD(var_s0, f32 *, 0x14);
        sp48 = M2C_FIELD(var_s0, f32 *, 0x18);
        D_80211B2C(&sp10, var_s0 + ((D_800AB9FC << 6) + 0x28));
    }
}
