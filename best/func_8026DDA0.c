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

f32 func_8026DED0(u16);                             /* extern */

f32 func_8026DDA0(u16 *arg0, f32 arg1) {
    f32 var_fv0;

    var_fv0 = arg1;
    if (arg0 != NULL) {
        var_fv0 = func_8026DED0(*arg0);
    }
    return var_fv0;
}
