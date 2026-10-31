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

extern f32 D_800ABA00;
extern f32 D_8010E51C;

s32 func_8040C010(void) {
    f32 temp_fv0;
    s32 var_v0;

    temp_fv0 = D_8010E51C - D_800ABA00;
    D_8010E51C = temp_fv0;
    var_v0 = 1;
    if (!(temp_fv0 < 0.0f)) {
        var_v0 = 0;
    }
    return var_v0;
}
