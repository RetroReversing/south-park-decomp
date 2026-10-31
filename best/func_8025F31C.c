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

void *D_80200C94(M2C_UNK *, void *);                /* extern */
f32 func_8026D63C(void *, f32, f32);                /* extern */
s32 func_8028E738();                                /* extern */
extern f32 D_800A9A04;
extern f32 D_800A9A08;
extern s32 D_800B2608;
extern M2C_UNK D_800CCA80;
extern void *D_800D6358;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x1c. */
void func_8025F31C(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, void *arg14, f32 arg15, f32 arg16) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0f;
    void *temp_s1;
    void *var_v0;
    void *var_v1;

    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, f32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, f32 *, 0x20) = arg5;
    M2C_FIELD(arg0, f32 *, 0x24) = arg6;
    M2C_FIELD(arg0, f32 *, 0x28) = arg7;
    M2C_FIELD(arg0, f32 *, 0x2C) = arg8;
    M2C_FIELD(arg0, f32 *, 0x30) = arg9;
    M2C_FIELD(arg0, s32 *, 0x34) = arg10;
    M2C_FIELD(arg0, s32 *, 0x38) = arg11;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg12;
    M2C_FIELD(arg0, s32 *, 0x40) = arg13;
    M2C_FIELD(arg0, void **, 0x44) = arg14;
    M2C_FIELD(arg0, f32 *, 0x48) = arg15;
    M2C_FIELD(arg0, f32 *, 0x4C) = arg16;
    if (func_8028E738() != 0) {
        M2C_FIELD(arg0, void **, 0x44) = D_80200C94(&D_800CCA80, arg0 + 0x24);
    }
    temp_s1 = M2C_FIELD(arg0, void **, 0x44);
    temp_fs0f = M2C_FIELD(arg0, f32 *, 0x24);
    temp_fs1f = M2C_FIELD(arg0, f32 *, 0x28);
    temp_fs0 = M2C_FIELD(arg0, f32 *, 0x2C);
    temp_fs1 = M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) D_800B2608;
    if ((temp_s1 != NULL) && (func_8028E738() == 0)) {
        var_v1 = D_800D6358;
        temp_fv0f = ((temp_fs1f + temp_fs1) - func_8026D63C(temp_s1, temp_fs0f, temp_fs0)) * D_800A9A04;
        var_v0 = NULL;
        if (var_v1 != NULL) {
loop_5:
            var_v0 = var_v1;
            if (M2C_FIELD(var_v1, s32 *, 0xA54) != arg0) {
                var_v1 = M2C_FIELD(var_v1, void **, 0x159C);
                var_v0 = NULL;
                if (var_v1 != NULL) {
                    goto loop_5;
                }
            }
        }
        if ((temp_fv0f < D_800A9A08) && ((var_v0 == NULL) || (M2C_FIELD(var_v0, s32 *, 0xC0C) == 0))) {
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(temp_s1, s32 *, 0x1C);
        }
    }
}
