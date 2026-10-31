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

s32 func_80260EBC(void *, void *);                  /* extern */
M2C_UNK func_80262E14(void *, void *);              /* extern */

void func_80262668(void *arg0) {
    f32 temp_fv0f;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x7520);
    if (var_s0 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0, void **, 4);
            if (func_80260EBC(arg0, var_s0) == 0) {
                temp_v1 = M2C_FIELD(var_s0, void **, 0x1C);
                if (temp_v1 != NULL) {
                    if (M2C_FIELD(var_s0, s32 *, 0x3C) & 1) {
                        temp_v0 = M2C_FIELD(temp_v1, u8 *, 0x137);
                        if (temp_v0 != 0) {
                            M2C_FIELD(temp_v1, u8 *, 0x137) = (u8) (temp_v0 - 1);
                        }
                    }
                    if (M2C_FIELD(var_s0, s32 *, 0x3C) & 2) {
                        temp_v1_2 = M2C_FIELD(var_s0, void **, 0x1C);
                        temp_v0_2 = M2C_FIELD(temp_v1_2, u8 *, 0x1B1);
                        if (temp_v0_2 != 0) {
                            M2C_FIELD(temp_v1_2, u8 *, 0x1B1) = (u8) (temp_v0_2 - 1);
                        }
                    }
                }
                M2C_FIELD(var_s0, void **, 0x1C) = NULL;
                temp_fv0f = M2C_FIELD(M2C_FIELD(var_s0, void **, 8), f32 *, 4);
                if (M2C_FIELD(var_s0, f32 *, 0x24) < temp_fv0f) {
                    M2C_FIELD(var_s0, f32 *, 0x24) = temp_fv0f;
                }
                func_80262E14(arg0 + 0x7514, var_s0);
            }
            var_s0 = temp_s1;
        } while (var_s0 != NULL);
    }
}
