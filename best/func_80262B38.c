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

void *func_80262B38(void *arg0, s32 arg1, s32 arg2) {
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0x7520);
    if (var_v1 != NULL) {
loop_1:
        if ((M2C_FIELD(var_v1, s32 *, 0x1C) != arg1) || (M2C_FIELD(var_v1, s32 *, 0x20) != arg2)) {
            var_v1 = M2C_FIELD(var_v1, void **, 4);
            if (var_v1 == NULL) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_1;
        }
        return var_v1;
    }
    return NULL;
}
