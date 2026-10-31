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

void *D_80210ADC(s32, M2C_UNK);                     /* extern */
s32 func_8026ACD8(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_80414820(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = D_80210ADC(M2C_FIELD(arg0, s32 *, 0x60), 0);
    temp_s1 = M2C_FIELD(temp_v0, s32 *, 4);
    temp_s0 = temp_v0 + 8;
    temp_s0_2 = D_80210ADC(M2C_FIELD(arg0, s32 *, 0x60), 1) + 8;
    var_v0 = temp_s0_2;
    if (func_8026ACD8(temp_s0, temp_s1, arg1, arg2, arg3) == 0) {
        var_v0 = 0;
    }
    return var_v0;
}
