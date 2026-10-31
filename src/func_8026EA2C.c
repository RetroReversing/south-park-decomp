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

M2C_UNK func_80295A68(void *);                      /* extern */
M2C_UNK func_80295A98(void *, void *);              /* extern */
M2C_UNK func_8029DC78(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern u32 D_800B1E68;
extern u32 D_800B1E6C;
extern M2C_UNK D_800F1CA0;
extern M2C_UNK D_800F1CBC;

void func_8026EA2C(void) {
    s32 sp10;
    u32 var_s0;
    void *temp_s1;
    void *var_s0_2;

    var_s0 = 0;
    sp10 = 0;
    if (D_800B1E6C != 0) {
        do {
            func_8029DC78(&D_800F1CA0, &sp10, 1);
            var_s0 += 1;
        } while (var_s0 < (u32) D_800B1E6C);
    }
    var_s0_2 = M2C_FIELD(&D_800F1CBC, void **, 0);
    if (var_s0_2 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0_2, void **, 0);
            if ((u32) (M2C_FIELD(var_s0_2, s32 *, 0xC) + 1) < (u32) D_800B1E68) {
                if (M2C_FIELD(&D_800F1CBC, void **, 0) == var_s0_2) {
                    M2C_FIELD(&D_800F1CBC, void **, 0) = temp_s1;
                }
                func_80295A68(var_s0_2);
                if (M2C_FIELD(&D_800F1CBC, void **, 4) == NULL) {
                    M2C_FIELD(&D_800F1CBC, void **, 4) = var_s0_2;
                    M2C_FIELD(var_s0_2, void **, 0) = NULL;
                    M2C_FIELD(var_s0_2, s32 *, 4) = 0;
                    goto block_11;
                }
                func_80295A98(var_s0_2, M2C_FIELD(&D_800F1CBC, void **, 4));
                var_s0_2 = temp_s1;
            } else {
block_11:
                var_s0_2 = temp_s1;
            }
        } while (var_s0_2 != NULL);
    }
    D_800B1E6C = 0;
    D_800B1E68 += 1;
}
