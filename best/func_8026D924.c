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

void *D_80203B70(M2C_UNK *, void *);                /* extern */
extern f32 D_800A9EB4;
extern void *D_800B1E60;
extern void *D_800B1E64;
extern M2C_UNK D_800CCA80;

s32 func_8026D924(void *arg0, void *arg1, void *arg2, f32 *arg3) {
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    s32 var_v0;

    if ((arg0 == NULL) || !(M2C_FIELD(arg0, u16 *, 2) & 1)) {
        return 0;
    }
    if (arg0 != D_800B1E60) {
        D_800B1E64 = D_80203B70(&D_800CCA80, arg0);
        D_800B1E60 = arg0;
    }
    if (D_800B1E64 == NULL) {
        return 0;
    }
    temp_fv0f = M2C_FIELD(arg1, f32 *, 4);
    temp_fv1 = M2C_FIELD(arg2, f32 *, 4) - temp_fv0f;
    if (temp_fv1 == 0.0f) {
        return 0;
    }
    var_v0 = 0;
    temp_fv0f_2 = (M2C_FIELD(D_800B1E64, f32 *, 0x20) - temp_fv0f) / temp_fv1;
    *arg3 = temp_fv0f_2;
    if ((temp_fv0f_2 > 0.0f) && (temp_fv0f_2 < D_800A9EB4)) {
        var_v0 = 1;
    }
    return var_v0;
}
