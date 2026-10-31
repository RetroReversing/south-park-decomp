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

void func_80400CF4(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 *arg4, s8 *arg5, s8 *arg6) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 != 0) {
        temp_v0 = 0x64 - temp_a0;
        *arg4 = ((arg1 & 0xFF) * temp_v0) / 100;
        *arg5 = ((arg2 & 0xFF) * temp_v0) / 100;
        *arg6 = ((arg3 & 0xFF) * temp_v0) / 100;
        return;
    }
    *arg4 = arg1;
    *arg5 = arg2;
    *arg6 = arg3;
}
