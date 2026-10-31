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

extern float D_800AA7DC;
s32 D_80200C94(s32 *);                          /* extern */
f32 D_80215BE0(f32, f32);                           /* extern */
f32 func_8026D63C();
extern char D_800AA7D8[];
extern f32 D_800AA7E0;
extern char D_800CCA80[];

f32 func_80289BD4(s32 arg0, void *arg1) {
    f32 temp_fv0;
    f32 var_fv0;
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 4) = 0;
    temp_v0 = D_80200C94(&D_800CCA80);
    var_fv0 = D_800AA7DC;
    if (temp_v0 != 0) {
        temp_fv0 = func_8026D63C(temp_v0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 8));
        var_fv0 = D_80215BE0(temp_fv0, temp_fv0 + D_800AA7E0);
    }
    return var_fv0;
}
