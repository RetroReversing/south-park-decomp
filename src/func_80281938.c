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

extern M2C_UNK D_800AA300;

s32 func_80281938(f32 arg0) {
    f32 temp_fv0f;
    s32 var_v1;

    var_v1 = 0;
    temp_fv0f = (M2C_FIELD(&D_800AA300, f32 *, 4) / (2.0f * arg0)) + M2C_FIELD(&D_800AA300, f32 *, 4);
    if (M2C_FIELD(&D_800AA300, f32 *, 0) <= arg0) {
        return 0;
    }
    if (M2C_FIELD(&D_800AA300, f32 *, 4) < temp_fv0f) {
        do {
            var_v1 += 1;
        } while ((f32) (1 << var_v1) < temp_fv0f);
    }
    return var_v1;
}
