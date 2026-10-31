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

void func_8026467C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *temp_s0;

    temp_s0 = arg0 + 0x168;
    if ((M2C_FIELD(temp_s0, s32 *, 0xF4) != 0) && !(*M2C_FIELD(arg0, s32 **, 0x10) & 9)) {
        D_8024249C((s32) arg0, arg6, arg3, arg4, /* extra? */ arg5);
        M2C_FIELD(temp_s0, s32 *, 0xF4) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x198) = 3;
    }
}
