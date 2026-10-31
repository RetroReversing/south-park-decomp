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

/* Warning: missing "jr $ra" in last block of func_8025A688 (.L8025A7AC). */

s32 D_80203A94(M2C_UNK *, M2C_UNK);                 /* extern */
M2C_UNK D_80216A68(void *, s32, M2C_UNK, s32, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK D_8021E710(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
extern s32 D_800B2608;
extern M2C_UNK D_800CCA80;

void *func_8025A688(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 *arg15) {
    s32 var_s1;
    void *temp_s0;

    var_s1 = arg1;
    if ((var_s1 != -1) || (var_s1 = D_80203A94(&D_800CCA80, arg2), (var_s1 != -1))) {
        temp_s0 = M2C_FIELD(arg0, void **, 8);
        if (temp_s0 != NULL) {
            D_8021E930(arg0 + 8, temp_s0);
            D_8021E710(arg0 + 0x1C, temp_s0);
            M2C_FIELD(temp_s0, s32 **, 0x370) = arg15;
            if (arg15 != NULL) {
                *arg15 += 1;
            }
            if (temp_s0 != NULL) {
                D_80216A68(temp_s0, var_s1, arg2, D_800B2608, arg3, -1, arg4, arg8, arg5, arg6, arg7, 0x04000000, arg12, arg13, arg14, arg9, arg10, arg11, 0);
                return temp_s0;
            }
            goto block_7;
        }
block_7:
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}
