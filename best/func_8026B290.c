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

extern f32 D_800A9E00;

f32 func_8026B290(void *arg0, void *arg1, void *arg2) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;

    temp_fv1f = M2C_FIELD(arg0, f32 *, 0);
    temp_ft0 = M2C_FIELD(arg0, f32 *, 4);
    temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 8);
    temp_ft0f = (temp_fv1f * M2C_FIELD(arg1, f32 *, 0)) + (temp_ft0 * M2C_FIELD(arg1, f32 *, 4)) + (temp_fv0f_2 * M2C_FIELD(arg1, f32 *, 8));
    temp_fv0f = (temp_fv1f * M2C_FIELD(arg2, f32 *, 0)) + (temp_ft0 * M2C_FIELD(arg2, f32 *, 4)) + (temp_fv0f_2 * M2C_FIELD(arg2, f32 *, 8));
    if (temp_fv0f != temp_ft0f) {
        return (M2C_FIELD(arg0, f32 *, 0xC) - temp_ft0f) / (temp_fv0f - temp_ft0f);
    }
    return D_800A9E00;
}
