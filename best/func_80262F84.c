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

s32 func_80262F84(s16 *arg0, s16 arg1, s16 arg2) {
char *__repair_addr;

    s16 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0x18) {
__repair_addr = (char *)((arg0 + (temp_v1 * 4)));

        M2C_FIELD(__repair_addr, s16 *, 2) = arg1;
        M2C_FIELD((arg0 + (*arg0 * 4)), s16 *, 4) = arg2;
        *arg0 = (u16) *arg0 + 1;
        return 1;
    }
    return 0;
}
