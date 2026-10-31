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

M2C_UNK D_802A0520(s32);                            /* extern */
f32 func_802821F8(void *);                          /* extern */
f32 func_8029AA80(f32);                             /* extern */
s32 func_802A0500();                                /* extern */
extern M2C_UNK D_800AA308;
extern f32 D_800AA310;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x38, 0x3c, 0x48, 0x4c, 0x50, 0x54], gap at: 0x2c. */
f32 func_80281A60(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 var_fs0f;
    f32 var_fs1;
    f32 var_fv0;
    s32 temp_s1;
    void *var_s0;

    var_fs1 = M2C_FIELD(arg0, f32 *, 0x28);
    var_s0 = M2C_FIELD(arg0, void **, 0x14);
    temp_s1 = func_802A0500();
    if (var_s0 != NULL) {
        temp_fs2 = M2C_FIELD(&D_800AA308, f32 *, 0);
        do {
            sp14 = arg1;
            sp18 = arg2;
            sp1C = arg3;
            temp_fv0f = sp14 - M2C_FIELD(var_s0, f32 *, 0xC);
            temp_fv1 = sp18 - M2C_FIELD(var_s0, f32 *, 0x10);
            temp_fa0 = sp1C - M2C_FIELD(var_s0, f32 *, 0x14);
            temp_fv0 = func_8029AA80((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
            if ((temp_fv0 == 0.0f) || (temp_fv0f_2 = M2C_FIELD(var_s0, f32 *, 0x18), (temp_fv0f_2 == 0.0f))) {
                var_fs0f = M2C_FIELD(&D_800AA308, f32 *, 4);
            } else {
                var_fs0f = 0.0f;
                if (temp_fv0 < temp_fv0f_2) {
                    var_fs0f = temp_fs2 - (temp_fv0 / temp_fv0f_2);
                }
            }
            temp_fs0f = var_fs0f * M2C_FIELD(var_s0, f32 *, 0x1C);
            temp_fs0 = func_802821F8(var_s0 + 0x20);
            temp_fs0_2 = temp_fs0f * temp_fs0 * func_802821F8(var_s0 + 0x2C);
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            var_fs1 += temp_fs0_2;
        } while (var_s0 != NULL);
    }
    D_802A0520(temp_s1);
    var_fv0 = var_fs1;
    if (!(D_800AA310 < var_fs1)) {
        var_fv0 = 0.0f;
        if (!(var_fs1 < 0.0f)) {
            var_fv0 = var_fs1;
            goto block_11;
        }
    } else {
block_11:
        if (D_800AA310 < var_fv0) {
            var_fv0 = D_800AA310;
        }
    }
    return var_fv0;
}
