/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void *func_80257D38(s32 arg0, s32 arg1, void *arg2) {
    void *var_v1;

    var_v1 = M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), s8 *, 8) * 0x14) + arg0), void **, 0x30);
    if (arg2 != NULL) {
        if (var_v1 != NULL) {
loop_2:
            if ((M2C_FIELD(var_v1, s32 *, 0x104) != arg1) || (M2C_FIELD(var_v1, s32 *, 0xF8) != arg2)) {
                var_v1 = M2C_FIELD(var_v1, void **, 0x1E4);
                if (var_v1 == NULL) {
                    return NULL;
                }
                goto loop_2;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return NULL;
    }
    if (var_v1 != NULL) {
loop_8:
        if (M2C_FIELD(var_v1, s32 *, 0x104) != arg1) {
            var_v1 = M2C_FIELD(var_v1, void **, 0x1E4);
            if (var_v1 == NULL) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_8;
        }
        return var_v1;
    }
    return NULL;
}
