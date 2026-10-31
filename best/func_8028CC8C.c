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

extern M2C_UNK D_800AA9D8;
extern f32 D_800AA9E0;

void *func_8028CC8C(void *arg0, void *arg1, s32 arg2, f32 arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_ft0;
    f32 var_ft0f;
    f32 var_ft1f;
    f32 var_ft2;
    f32 var_ft2f;
    f32 var_fv1;
    f32 var_fv1f;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_t1;
    void *var_t2;
    void *var_v1;
    void *var_v1_2;

    var_t1 = NULL;
    var_t2 = NULL;
    if (arg2 == 0) {
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
    } else if ((arg2 == 1) || (arg3 <= M2C_FIELD(arg1, f32 *, 0x1C))) {
        sp0 = M2C_FIELD(arg1, f32 *, 0);
        sp4 = M2C_FIELD(arg1, f32 *, 4);
        sp8 = M2C_FIELD(arg1, f32 *, 8);
    } else {
        temp_v0 = (arg2 * 0x24) + arg1;
        temp_v1 = temp_v0 - 0x24;
        if (!(M2C_FIELD(temp_v1, f32 *, 0x1C) <= arg3)) {
            temp_v1_2 = arg2 - 1;
            var_a3 = 0;
            if (temp_v1_2 > 0) {
                var_t0 = 0x24;
                var_v1 = arg1;
loop_11:
                var_t1 = var_v1;
                var_t2 = arg1 + var_t0;
                if (!(M2C_FIELD(var_t1, f32 *, 0x1C) <= arg3) || !(arg3 < M2C_FIELD(var_t2, f32 *, 0x1C))) {
                    var_t0 += 0x24;
                    var_a3 += 1;
                    var_v1 = var_t1 + 0x24;
                    if (var_a3 < temp_v1_2) {
                        goto loop_11;
                    }
                }
            }
            var_fv1 = 0.0f;
            var_ft0f = 0.0f;
            var_fv1f = 0.0f;
            if (var_a3 > 0) {
                temp_v0_2 = (var_a3 * 0x24) + arg1;
                var_ft0f = M2C_FIELD(temp_v0_2, f32 *, 0x18) - M2C_FIELD(temp_v0_2, f32 *, -0xC);
            }
            if (var_a3 < (arg2 - 1)) {
                temp_v0_3 = (var_a3 * 0x24) + arg1;
                var_fv1 = M2C_FIELD(temp_v0_3, f32 *, 0x3C) - M2C_FIELD(temp_v0_3, f32 *, 0x18);
            }
            if (var_a3 < (arg2 - 2)) {
                temp_v0_4 = (var_a3 * 0x24) + arg1;
                var_fv1f = M2C_FIELD(temp_v0_4, f32 *, 0x60) - M2C_FIELD(temp_v0_4, f32 *, 0x3C);
            }
            var_ft0 = var_fv1;
            if (!(var_ft0 <= var_ft0f)) {
                var_ft0 = var_ft0f;
            }
            var_ft2 = var_fv1f;
            if (!(var_ft2 <= var_fv1)) {
                var_ft2 = var_fv1;
            }
            temp_fv1 = M2C_FIELD(var_t1, f32 *, 0x1C);
            temp_fv0 = M2C_FIELD(var_t2, f32 *, 0x1C);
            temp_ft2f = M2C_FIELD(var_t1, f32 *, 0x18);
            temp_fv1f = M2C_FIELD(var_t2, f32 *, 0x18);
            if (temp_fv1 != temp_fv0) {
                var_ft1f = (arg3 - temp_fv1) / (temp_fv0 - temp_fv1);
            } else {
                var_ft1f = 0.0f;
            }
            temp_ft0f = var_ft1f * var_ft1f;
            temp_fv1_2 = temp_ft0f * var_ft1f;
            temp_fv1f_2 = temp_fv1f - temp_ft2f;
            var_a3_2 = 0;
            temp_v0_5 = arg2 - 1;
            temp_fv0f = (temp_ft2f * (M2C_FIELD(&D_800AA9D8, f32 *, 0) - var_ft1f)) + (temp_fv1f * var_ft1f) + ((var_ft0 - temp_fv1f_2) * ((var_ft1f - (2.0f * var_ft1f * var_ft1f)) + temp_fv1_2)) + ((var_ft2 - temp_fv1f_2) * (temp_fv1_2 - temp_ft0f));
            if (temp_v0_5 > 0) {
                var_t0_2 = 0x24;
                var_v1_2 = arg1;
loop_29:
                var_t1 = var_v1_2;
                var_t2 = arg1 + var_t0_2;
                if (!(M2C_FIELD(var_t1, f32 *, 0x18) <= temp_fv0f) || !(temp_fv0f < M2C_FIELD(var_t2, f32 *, 0x18))) {
                    var_t0_2 += 0x24;
                    var_a3_2 += 1;
                    var_v1_2 = var_t1 + 0x24;
                    if (var_a3_2 < temp_v0_5) {
                        goto loop_29;
                    }
                }
            }
            temp_fv1_3 = M2C_FIELD(var_t1, f32 *, 0x18);
            temp_ft2 = M2C_FIELD(var_t2, f32 *, 0x18) - temp_fv1_3;
            var_ft2f = 0.0f;
            if (temp_ft2 != 0.0f) {
                var_ft2f = (temp_fv0f - temp_fv1_3) / temp_ft2;
            }
            temp_ft2_2 = temp_ft2 * temp_ft2;
            temp_ft0 = M2C_FIELD(&D_800AA9D8, f32 *, 4) - var_ft2f;
            temp_ft1 = (var_ft2f * var_ft2f * var_ft2f) - var_ft2f;
            temp_ft0f_2 = (temp_ft0 * temp_ft0 * temp_ft0) - temp_ft0;
            sp0 = (M2C_FIELD(var_t1, f32 *, 0) * temp_ft0) + (M2C_FIELD(var_t2, f32 *, 0) * var_ft2f) + (((M2C_FIELD(var_t1, f32 *, 0xC) * temp_ft0f_2) + (M2C_FIELD(var_t2, f32 *, 0xC) * temp_ft1)) * temp_ft2_2 * D_800AA9E0);
            sp4 = (M2C_FIELD(var_t1, f32 *, 4) * temp_ft0) + (M2C_FIELD(var_t2, f32 *, 4) * var_ft2f) + (((M2C_FIELD(var_t1, f32 *, 0x10) * temp_ft0f_2) + (M2C_FIELD(var_t2, f32 *, 0x10) * temp_ft1)) * temp_ft2_2 * D_800AA9E0);
            sp8 = (M2C_FIELD(var_t1, f32 *, 8) * temp_ft0) + (M2C_FIELD(var_t2, f32 *, 8) * var_ft2f) + (((M2C_FIELD(var_t1, f32 *, 0x14) * temp_ft0f_2) + (M2C_FIELD(var_t2, f32 *, 0x14) * temp_ft1)) * temp_ft2_2 * D_800AA9E0);
        } else {
            sp0 = M2C_FIELD(temp_v0, f32 *, -0x24);
            sp4 = M2C_FIELD(temp_v1, f32 *, 4);
            sp8 = M2C_FIELD(temp_v1, f32 *, 8);
        }
    }
    M2C_FIELD(arg0, f32 *, 0) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = sp8;
    return arg0;
}
