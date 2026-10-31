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

void func_802625D0(void *arg0, s32 arg1) {
    f32 temp_fv0f;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0x7520);
    if (var_v1 != NULL) {
        do {
            temp_a0 = M2C_FIELD(var_v1, void **, 0x1C);
            if (temp_a0 == arg1) {
                if (temp_a0 != NULL) {
                    if (M2C_FIELD(var_v1, s32 *, 0x3C) & 1) {
                        temp_v0 = M2C_FIELD(temp_a0, u8 *, 0x137);
                        if (temp_v0 != 0) {
                            M2C_FIELD(temp_a0, u8 *, 0x137) = (u8) (temp_v0 - 1);
                        }
                    }
                    if (M2C_FIELD(var_v1, s32 *, 0x3C) & 2) {
                        temp_a0_2 = M2C_FIELD(var_v1, void **, 0x1C);
                        temp_v0_2 = M2C_FIELD(temp_a0_2, u8 *, 0x1B1);
                        if (temp_v0_2 != 0) {
                            M2C_FIELD(temp_a0_2, u8 *, 0x1B1) = (u8) (temp_v0_2 - 1);
                        }
                    }
                }
                M2C_FIELD(var_v1, void **, 0x1C) = NULL;
                temp_fv0f = M2C_FIELD(M2C_FIELD(var_v1, void **, 8), f32 *, 4);
                if (M2C_FIELD(var_v1, f32 *, 0x24) < temp_fv0f) {
                    M2C_FIELD(var_v1, f32 *, 0x24) = temp_fv0f;
                }
            }
            var_v1 = M2C_FIELD(var_v1, void **, 4);
        } while (var_v1 != NULL);
    }
}
