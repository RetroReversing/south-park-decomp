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

f32 func_80257A2C(void *arg0) {
    f32 var_fv0;

    var_fv0 = 0.0f;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0x10) == 0) {
        var_fv0 = M2C_FIELD(arg0, f32 *, 0x15C);
    }
    return var_fv0;
}
