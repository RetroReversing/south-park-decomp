/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

s32 func_80277A20(void *arg0, void *arg1, f32 *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    f32 temp_fv0f_7;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;
    f32 temp_fv1f_4;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0f;
    f32 var_fv0f_2;
    f32 var_fv0f_3;
    f32 var_fv1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0 + 0x4C;
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    temp_fv1f = M2C_FIELD(temp_v0, f32 *, 4);
    temp_v0_2 = temp_v0 + 4;
    if (temp_fv1f <= M2C_FIELD(arg1, f32 *, 0xC)) {
        temp_fv1 = M2C_FIELD(temp_v0_2, f32 *, 4);
        if (temp_fv1 <= M2C_FIELD(arg1, f32 *, 0x10)) {
            temp_fv0f = M2C_FIELD(temp_v0_2, f32 *, 8);
            if ((temp_fv0f <= M2C_FIELD(arg1, f32 *, 0x14)) && (M2C_FIELD(arg1, f32 *, 0) <= temp_fv1f) && (M2C_FIELD(arg1, f32 *, 4) <= temp_fv1) && (M2C_FIELD(arg1, f32 *, 8) <= temp_fv0f)) {
                *arg2 = 0.0f;
                return 1;
            }
        }
    }
    temp_fv0f_2 = M2C_FIELD(temp_v0, f32 *, 4);
    temp_fv1_2 = M2C_FIELD(arg0, f32 *, 0x4C);
    if (temp_fv0f_2 != temp_fv1_2) {
        if (temp_fv0f_2 < temp_fv1_2) {
            var_fv0 = M2C_FIELD(arg1, f32 *, 0) - temp_fv0f_2;
            var_fv0f = temp_fv1_2 - temp_fv0f_2;
        } else {
            var_fv0 = temp_fv0f_2 - M2C_FIELD(arg1, f32 *, 0xC);
            var_fv0f = temp_fv0f_2 - temp_fv1_2;
        }
        var_fv1 = var_fv0 / var_fv0f;
        if (!(var_fv1 < M2C_FIELD(arg0, f32 *, 8)) || (temp_fv1f_2 = M2C_FIELD(temp_v0_2, f32 *, 4) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x5C)), sp4 = temp_fv1f_2, temp_fv0f_3 = M2C_FIELD(temp_v0_2, f32 *, 8) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x60)), sp8 = temp_fv0f_3, !(M2C_FIELD(arg1, f32 *, 4) <= temp_fv1f_2)) || !(temp_fv1f_2 <= M2C_FIELD(arg1, f32 *, 0x10)) || !(M2C_FIELD(arg1, f32 *, 8) <= temp_fv0f_3) || !(temp_fv0f_3 <= M2C_FIELD(arg1, f32 *, 0x14))) {
            goto block_16;
        }
        goto block_38;
    }
block_16:
    temp_fv0f_4 = M2C_FIELD(temp_v0_2, f32 *, 4);
    temp_fv1_3 = M2C_FIELD(temp_v1, f32 *, 4);
    if (temp_fv0f_4 != temp_fv1_3) {
        if (temp_fv0f_4 < temp_fv1_3) {
            var_fv0_2 = M2C_FIELD(arg1, f32 *, 4) - temp_fv0f_4;
            var_fv0f_2 = temp_fv1_3 - temp_fv0f_4;
        } else {
            var_fv0_2 = temp_fv0f_4 - M2C_FIELD(arg1, f32 *, 0x10);
            var_fv0f_2 = temp_fv0f_4 - temp_fv1_3;
        }
        var_fv1 = var_fv0_2 / var_fv0f_2;
        if (!(var_fv1 < M2C_FIELD(arg0, f32 *, 8)) || (temp_fv1f_3 = M2C_FIELD(temp_v0, f32 *, 4) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x58)), sp0 = temp_fv1f_3, temp_fv0f_5 = M2C_FIELD(temp_v0_2, f32 *, 8) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x60)), sp8 = temp_fv0f_5, !(M2C_FIELD(arg1, f32 *, 0) <= temp_fv1f_3)) || !(temp_fv1f_3 <= M2C_FIELD(arg1, f32 *, 0xC)) || !(M2C_FIELD(arg1, f32 *, 8) <= temp_fv0f_5) || !(temp_fv0f_5 <= M2C_FIELD(arg1, f32 *, 0x14))) {
            goto block_25;
        }
        goto block_38;
    }
block_25:
    temp_fv0f_6 = M2C_FIELD(temp_v0_2, f32 *, 8);
    temp_fv1_4 = M2C_FIELD(temp_v1, f32 *, 8);
    if (temp_fv0f_6 == temp_fv1_4) {
        return 0;
    }
    if (temp_fv0f_6 < temp_fv1_4) {
        var_fv0_3 = M2C_FIELD(arg1, f32 *, 8) - temp_fv0f_6;
        var_fv0f_3 = temp_fv1_4 - temp_fv0f_6;
    } else {
        var_fv0_3 = temp_fv0f_6 - M2C_FIELD(arg1, f32 *, 0x14);
        var_fv0f_3 = temp_fv0f_6 - temp_fv1_4;
    }
    var_fv1 = var_fv0_3 / var_fv0f_3;
    if (!(var_fv1 < M2C_FIELD(arg0, f32 *, 8))) {
        return 0;
    }
    temp_fv1f_4 = M2C_FIELD(temp_v0, f32 *, 4) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x58));
    sp0 = temp_fv1f_4;
    temp_fv0f_7 = M2C_FIELD(temp_v0_2, f32 *, 4) + (var_fv1 * M2C_FIELD(arg0, f32 *, 0x5C));
    sp4 = temp_fv0f_7;
    var_v0 = 0;
    if ((M2C_FIELD(arg1, f32 *, 0) <= temp_fv1f_4) && (temp_fv1f_4 <= M2C_FIELD(arg1, f32 *, 0xC)) && (M2C_FIELD(arg1, f32 *, 4) <= temp_fv0f_7) && (temp_fv0f_7 <= M2C_FIELD(arg1, f32 *, 0x10))) {
block_38:
        *arg2 = var_fv1;
        var_v0 = 1;
    }
    return var_v0;
}
