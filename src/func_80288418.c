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

f32 D_802158FC(f32, f32);                           /* extern */
s32 D_80246A4C();                                   /* extern */
extern f32 D_800AA638;
extern f32 D_800ABA00;

void func_80288418(s32 arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;

    if (D_80246A4C() != 1) {
        temp_fs0 = D_800AA638;
        M2C_FIELD(arg1, f32 *, 0x158) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x158), temp_fs0);
        M2C_FIELD(arg1, f32 *, 0x154) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x154), temp_fs0);
    }
    temp_fv0f = M2C_FIELD(arg1, f32 *, 0x17C);
    if (temp_fv0f > 0.0f) {
        temp_fv0 = temp_fv0f - D_800ABA00;
        M2C_FIELD(arg1, f32 *, 0x17C) = temp_fv0;
        if (temp_fv0 < 0.0f) {
            M2C_FIELD(arg1, f32 *, 0x17C) = 0.0f;
        }
    }
}
