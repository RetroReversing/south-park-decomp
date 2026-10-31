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

M2C_UNK D_8021E76C(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
M2C_UNK func_8026021C(void *);                      /* extern */
extern f32 D_800A9A3C;
extern f32 D_800A9A40;

void *func_8025FDC4(void *arg0, void *arg1, s32 arg2, f32 arg3) {
    void *temp_s0;
    void *var_a0;
    void *var_a0_2;
    void *var_s1;

    if (M2C_FIELD(arg1, s8 *, 0x510) == 0) {
        var_a0 = NULL;
    } else {
        var_s1 = M2C_FIELD(arg0, void **, 0xFFC);
        if (var_s1 != NULL) {
            func_8026021C(var_s1);
            D_8021E930(arg0 + 0xFFC, var_s1);
            var_a0_2 = arg1 + 0xDD0;
            goto block_6;
        }
        var_s1 = M2C_FIELD(arg1, void **, 0xDD0);
        var_a0 = var_s1;
        if (var_s1 != NULL) {
            func_8026021C(var_s1);
            temp_s0 = arg1 + 0xDD0;
            D_8021E930(temp_s0, var_s1);
            var_a0_2 = temp_s0;
block_6:
            D_8021E76C(var_a0_2, var_s1);
            var_a0 = var_s1;
        }
    }
    if (var_a0 != NULL) {
        M2C_FIELD(var_a0, s32 *, 0x10) = 1;
        M2C_FIELD(var_a0, s8 *, 0x1C) = 0;
        M2C_FIELD(var_a0, s32 *, 0x20) = arg2;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = -1;
        M2C_FIELD(var_a0, f32 *, 0xC) = (f32) D_800A9A3C;
    }
    if (var_a0 != NULL) {
        M2C_FIELD(var_a0, f32 *, 0xC) = (f32) (arg3 * D_800A9A40);
    }
    return var_a0;
}
