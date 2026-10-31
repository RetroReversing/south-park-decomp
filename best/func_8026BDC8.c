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

M2C_UNK D_802131C4(M2C_UNK *, void *, void *);      /* extern */
M2C_UNK D_80213274(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
f32 D_80215738(f32);                                /* extern */
f32 func_8029AA80(f32);                             /* extern */
extern f32 D_800A9E3C;
extern f32 D_800A9E40;
extern f32 D_800A9E44;
extern M2C_UNK D_800A9E48;
extern void *D_800B1E58;
extern M2C_UNK D_800F1548;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x60, 0x64, 0x68, 0x6c, 0x78, 0x7c], gap at: 0x58. */
f32 func_8026BDC8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK sp30;
    M2C_UNK sp40;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 == NULL) {
        return 0.0f;
    }
    if (arg0 != D_800B1E58) {
        D_802131C4(&sp30, M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, void **, 4));
        D_802131C4(&sp40, M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg0, void **, 8));
        D_80213274(&D_800F1548, &sp30, &sp40);
    }
    sp10 = M2C_FIELD(&D_800F1548, f32 *, 0);
    sp14 = M2C_FIELD(&D_800F1548, f32 *, 4);
    sp18 = M2C_FIELD(&D_800F1548, f32 *, 8);
    D_800B1E58 = arg0;
    if (sp14 == 0.0f) {
        var_fs0f = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 4)) * D_800A9E3C;
    } else {
        temp_v0 = M2C_FIELD(arg0, void **, 4);
        sp20 = M2C_FIELD(temp_v0, f32 *, 0);
        sp24 = M2C_FIELD(temp_v0, f32 *, 4);
        sp28 = M2C_FIELD(temp_v0, f32 *, 8);
        var_fs0f = (((sp28 - arg2) * sp18) + ((sp20 - arg1) * sp10) + (sp24 * sp14)) / sp14;
    }
    if (arg0 == NULL) {
        var_fs0 = D_800A9E40;
        var_fv1 = arg3 - arg1;
    } else {
        if (arg0 != D_800B1E58) {
            D_802131C4(&sp30, M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, void **, 4));
            D_802131C4(&sp40, M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg0, void **, 8));
            D_80213274(&D_800F1548, &sp30, &sp40);
        }
        sp10 = M2C_FIELD(&D_800F1548, f32 *, 0);
        sp14 = M2C_FIELD(&D_800F1548, f32 *, 4);
        sp18 = M2C_FIELD(&D_800F1548, f32 *, 8);
        D_800B1E58 = arg0;
        if (sp14 == 0.0f) {
            var_fs0 = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 4)) * D_800A9E44;
            var_fv1 = arg3 - arg1;
        } else {
            temp_v0_2 = M2C_FIELD(arg0, void **, 4);
            sp20 = M2C_FIELD(temp_v0_2, f32 *, 0);
            sp24 = M2C_FIELD(temp_v0_2, f32 *, 4);
            sp28 = M2C_FIELD(temp_v0_2, f32 *, 8);
            var_fs0 = (((sp28 - arg4) * sp18) + ((sp20 - arg3) * sp10) + (sp24 * sp14)) / sp14;
            var_fv1 = arg3 - arg1;
        }
    }
    temp_fv0f = arg4 - arg2;
    temp_fv0 = var_fs0 - var_fs0f;
    temp_fv1 = (var_fv1 * var_fv1) + (temp_fv0f * temp_fv0f);
    temp_fv0f_2 = temp_fv1 + (temp_fv0 * temp_fv0);
    var_fv0 = 0.0f;
    if (temp_fv0f_2 != 0.0f) {
        var_fv0_2 = func_8029AA80(temp_fv1 / temp_fv0f_2);
        if (!(M2C_FIELD(&D_800A9E48, f32 *, 0) < var_fv0_2)) {
            if (var_fv0_2 < M2C_FIELD(&D_800A9E48, f32 *, 4)) {
                var_fv0_2 = M2C_FIELD(&D_800A9E48, f32 *, 4);
            } else if (M2C_FIELD(&D_800A9E48, f32 *, 0) < var_fv0_2) {
                goto block_20;
            }
        } else {
block_20:
            var_fv0_2 = M2C_FIELD(&D_800A9E48, f32 *, 0);
        }
        var_fv0 = D_80215738(var_fv0_2);
        if (!(var_fs0f < var_fs0)) {
            var_fv0 = -var_fv0;
        }
    }
    return var_fv0;
}
