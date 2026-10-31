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

s32 func_802A7570(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_v0;

    if (arg0 < arg2) {
        return 0;
    }
    if (arg2 < arg0) {
        return 2;
    }
    var_v0 = 0;
    if (arg1 >= arg3) {
        var_v0 = 2;
        if (arg3 >= arg1) {
            return 1;
        }
    }
    return var_v0;
}
