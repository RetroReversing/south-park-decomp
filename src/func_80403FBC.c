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

s32 func_80403FBC(void **arg0, s32 arg1) {
    s32 var_v1;
    void *var_a0;

    var_a0 = *arg0;
    var_v1 = 0;
    if (var_a0 != NULL) {
loop_1:
        if ((M2C_FIELD(var_a0, s32 *, 0x18) == arg1) && ((u32) (M2C_FIELD(var_a0, u16 *, 0x2C) - 3) >= 2U)) {
            var_v1 = 1;
        } else {
            var_a0 = M2C_FIELD(var_a0, void **, 0x1D4);
            if (var_a0 != NULL) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}
