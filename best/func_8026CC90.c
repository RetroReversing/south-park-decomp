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

void *D_80210ADC(s32, M2C_UNK);                     /* extern */
M2C_UNK D_802131C4(M2C_UNK *, void *, void *);      /* extern */
M2C_UNK D_80213274(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800A9E08;
extern f32 D_800A9E90;
extern f32 D_800A9E94;
extern void *D_800B1E58;
extern M2C_UNK D_800CCA80;
extern M2C_UNK D_800F1548;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x90, 0x94, 0xa0, 0xa4], gap at: 0x88. */
void *func_8026CC90(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    M2C_UNK sp40;
    M2C_UNK sp50;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    f32 var_fs1;
    f32 var_fv0f;
    s32 *var_a2;
    s32 temp_fp;
    s32 temp_s6;
    s32 var_a1;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    u32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_a0;
    void *var_s0;
    void *var_s1;
    void *var_s4;

    var_s3 = 0;
    var_s5 = 0;
    var_fs1 = 0.0f;
    var_s4 = NULL;
    temp_fp = D_80210ADC(M2C_FIELD(&D_800CCA80, s32 *, 0x5C), 2) + 8;
    temp_v0 = D_80210ADC(M2C_FIELD(&D_800CCA80, s32 *, 0x5C), 3);
    temp_s6 = M2C_FIELD(temp_v0, s32 *, 4);
    if (temp_s6 > 0) {
        var_s1 = temp_v0 + 8;
        do {
            if ((M2C_FIELD(var_s1, f32 *, 0) <= arg1) && (arg1 <= M2C_FIELD(var_s1, f32 *, 8)) && (M2C_FIELD(var_s1, f32 *, 4) <= arg3) && (arg3 <= M2C_FIELD(var_s1, f32 *, 0xC))) {
                var_s2 = 0;
                if (M2C_FIELD(var_s1, u32 *, 0x10) != 0) {
                    var_s0 = (var_s3 << 5) + temp_fp;
                    do {
                        sp10 = M2C_FIELD(&D_800A9E08, s32 *, 0);
                        sp14 = M2C_FIELD(&D_800A9E08, s32 *, 4);
                        sp18 = M2C_FIELD(&D_800A9E08, s32 *, 8);
                        var_a2 = &sp10;
                        if (var_s0 == NULL) {
                            var_v0 = 1;
                        } else {
                            var_a1 = 0;
                            var_a0 = var_s0;
loop_12:
                            temp_v1 = M2C_FIELD((var_s0 + (*var_a2 * 4)), void **, 4);
                            temp_v0_2 = M2C_FIELD(var_a0, void **, 4);
                            temp_fv1f = M2C_FIELD(temp_v0_2, f32 *, 8);
                            temp_fv0f = M2C_FIELD(temp_v0_2, f32 *, 0);
                            var_a2 += 4;
                            if (!((((M2C_FIELD(temp_v1, f32 *, 8) - temp_fv1f) * (arg1 - temp_fv0f)) + ((temp_fv0f - M2C_FIELD(temp_v1, f32 *, 0)) * (arg3 - temp_fv1f))) < 0.0f)) {
                                var_a1 += 1;
                                var_a0 += 4;
                                if (var_a1 >= 3) {
                                    var_v0 = 1;
                                } else {
                                    goto loop_12;
                                }
                            } else {
                                var_v0 = 0;
                            }
                        }
                        if ((var_v0 != 0) && (var_s0 != arg0)) {
                            if (var_s0 == NULL) {
                                var_fv0f = D_800A9E90;
                            } else {
                                if (var_s0 != D_800B1E58) {
                                    D_802131C4(&sp40, M2C_FIELD(var_s0, void **, 8), M2C_FIELD(var_s0, void **, 4));
                                    D_802131C4(&sp50, M2C_FIELD(var_s0, void **, 0xC), M2C_FIELD(var_s0, void **, 8));
                                    D_80213274(&D_800F1548, &sp40, &sp50);
                                }
                                sp20 = M2C_FIELD(&D_800F1548, f32 *, 0);
                                sp24 = M2C_FIELD(&D_800F1548, f32 *, 4);
                                sp28 = M2C_FIELD(&D_800F1548, f32 *, 8);
                                D_800B1E58 = var_s0;
                                if (sp24 == 0.0f) {
                                    var_fv0f = (M2C_FIELD(M2C_FIELD(var_s0, void **, 4), f32 *, 4) + M2C_FIELD(M2C_FIELD(var_s0, void **, 8), f32 *, 4) + M2C_FIELD(M2C_FIELD(var_s0, void **, 0xC), f32 *, 4)) * D_800A9E94;
                                } else {
                                    temp_v0_3 = M2C_FIELD(var_s0, void **, 4);
                                    sp30 = M2C_FIELD(temp_v0_3, f32 *, 0);
                                    sp34 = M2C_FIELD(temp_v0_3, f32 *, 4);
                                    sp38 = M2C_FIELD(temp_v0_3, f32 *, 8);
                                    var_fv0f = (((sp38 - arg3) * sp28) + ((sp30 - arg1) * sp20) + (sp34 * sp24)) / sp24;
                                }
                            }
                            if ((var_fv0f < arg2) && ((temp_fv0f_2 = arg2 - var_fv0f, (var_s4 == NULL)) || (temp_fv0f_2 < var_fs1))) {
                                var_s4 = var_s0;
                                var_fs1 = temp_fv0f_2;
                            }
                        }
                        var_s0 += 0x20;
                        var_s2 += 1;
                        var_s3 += 1;
                    } while (var_s2 < (u32) M2C_FIELD(var_s1, u32 *, 0x10));
                    var_s1 += 0x14;
                } else {
                    goto block_31;
                }
            } else {
                var_s3 += M2C_FIELD(var_s1, u32 *, 0x10);
block_31:
                var_s1 += 0x14;
            }
            var_s5 += 1;
        } while (var_s5 < temp_s6);
    }
    return var_s4;
}
