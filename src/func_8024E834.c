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

s32 *D_80210ADC(s32 *, M2C_UNK);                    /* extern */

void func_8024E834(s32 **arg0, void *arg1) {
    s32 *temp_s0;

    temp_s0 = *arg0;
    if (*temp_s0 != 0) {
        M2C_FIELD(arg1, s32 **, 8) = D_80210ADC(temp_s0, 0);
        M2C_FIELD(arg1, s32 *, 0) = (s32) *D_80210ADC(temp_s0, 1);
        M2C_FIELD(arg1, s32 *, 4) = (s32) *D_80210ADC(temp_s0, 2);
        return;
    }
    M2C_FIELD(arg1, s32 **, 8) = NULL;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
}
