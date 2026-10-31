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

M2C_UNK func_8029D580(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_800AAD38;
extern M2C_UNK D_800AAD3C;

s32 func_802972C8(void *arg0, void **arg1) {
    s32 var_s0;
    void *var_a0;

    var_s0 = 0x7FFFFFFF;
    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        func_8029D580(&D_800AAD38, &D_800AAD3C, 0x133);
    }
    *arg1 = NULL;
    var_a0 = M2C_FIELD(arg0, void **, 0);
    if (var_a0 != NULL) {
        do {
            if ((M2C_FIELD(var_a0, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 0x20)) < var_s0) {
                *arg1 = var_a0;
                var_s0 = M2C_FIELD(var_a0, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 0x20);
            }
            var_a0 = M2C_FIELD(var_a0, void **, 0);
        } while (var_a0 != NULL);
    }
    return M2C_FIELD(*arg1, s32 *, 0x10);
}
