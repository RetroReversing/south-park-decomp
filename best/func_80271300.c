/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_80296500(void *, s16);                    /* extern */
s32 func_80295C28(void *);                          /* extern */
M2C_UNK func_802964F0(void *, s16);                 /* extern */
M2C_UNK alSndpStop(void *);                      /* extern */
extern f32 D_800A9F34;
extern f32 D_800A9F38;
extern f32 D_800B2138;

void func_80271300(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fs0;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    s32 temp_ft0f;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 var_s0;
    s8 temp_v1_4;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_3;
    void *var_s1;

    temp_s1 = arg0 + 0x10;
    temp_v1 = M2C_FIELD(arg0, void **, 0xB0);
    temp_s3 = arg0 + 0x70;
    if (M2C_FIELD(arg0, s32 *, 0xA0) & 0x200) {
        var_fs0 = M2C_FIELD(temp_v1, f32 *, 0x27A8);
    } else {
        var_fs0 = M2C_FIELD(temp_v1, f32 *, 0x27A0);
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_v1_2 & 0x800) {
        var_fv0 = (f32) M2C_FIELD(temp_s1, s32 *, 8) * var_fs0;
        var_s1 = M2C_FIELD(arg0, void **, 0xB0) + 0x84;
        goto block_44;
    }
    if (temp_v1_2 & 0x400) {
        temp_v1_3 = temp_s1 + 0x30;
        if (M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xB0), void **, 0x279C);
            temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x30) - M2C_FIELD(temp_v0, f32 *, 0x134);
            temp_v0_2 = temp_v0 + 0x134;
            temp_fv1f = M2C_FIELD(temp_v1_3, f32 *, 4) - M2C_FIELD(temp_v0_2, f32 *, 4);
            temp_fv0 = M2C_FIELD(temp_v1_3, f32 *, 8) - M2C_FIELD(temp_v0_2, f32 *, 8);
            if (!(D_800B2138 <= ((temp_fv1 * temp_fv1) + (temp_fv1f * temp_fv1f) + (temp_fv0 * temp_fv0)))) {

            }
            var_fv0_2 = D_800A9F34;
            temp_v1_4 = M2C_FIELD(temp_s1, s8 *, 0x40);
            if (temp_v1_4 == 1) {
block_19:
                var_fv0_2 = D_800A9F38;
block_20:
                var_fv0_3 = var_fv0_2 - M2C_ERROR(/* Read from unset register $f4 */);
            } else {
                switch (temp_v1_4) {                /* irregular */
                case 0:
                    goto block_20;
                default:
                    var_fv0_3 = var_fv0_2 - M2C_ERROR(/* Read from unset register $f4 */);
                    break;
                case 2:
                    goto block_19;
                }
            }
            M2C_FIELD(temp_s1, f32 *, 0x1C) = var_fv0_3;
        }
    }
    temp_v1_5 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_v1_5 & 4) {
        if (M2C_FIELD(arg0, s16 *, 0x78) > 0) {
            M2C_FIELD(arg0, s16 *, 0x78) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x78) - 1);
            return;
        }
        var_s0 = 0;
        if (M2C_FIELD(arg0, f32 *, 0x80) < 0.0f) {
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            if (M2C_FIELD(arg0, f32 *, 0x7C) < func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4))) {
                goto block_31;
            }
        } else if (func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4)) < M2C_FIELD(arg0, f32 *, 0x7C)) {
block_31:
            M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C) - M2C_FIELD(arg0, f32 *, 0x80));
            if (var_s0 != 0) {
                if (func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4)) < M2C_FIELD(arg0, f32 *, 0x7C)) {
                    M2C_FIELD(arg0, f32 *, 0x7C) = func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4));
                }
            } else if (M2C_FIELD(arg0, f32 *, 0x7C) < func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4))) {
                temp_fv0_2 = func_8027E368((s32) M2C_FIELD(temp_s3, u16 *, 4));
                M2C_FIELD(arg0, f32 *, 0x7C) = temp_fv0_2;
                if (temp_fv0_2 == 0.0f) {
                    temp_a0 = M2C_FIELD(arg0, void **, 0xB0);
                    M2C_FIELD(arg0, s32 *, 0xA8) = 1;
                    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
                    temp_s0 = temp_a0 + 0x84;
                    if (M2C_FIELD(arg0, s32 *, 0x10) != M2C_FIELD(temp_a0, s32 *, 0x104)) {
                        func_802964F0(temp_s0, M2C_FIELD((temp_a0 + (M2C_FIELD(arg0, s32 *, 0) * 2)), s16 *, 0xDC));
                        if (func_80295C28(temp_s0) != 0) {
                            alSndpStop(temp_s0);
                        }
                        M2C_FIELD(arg0, s32 *, 4) = -1;
                    }
                }
            }
            temp_ft0f = (s32) (func_8027E368((s32) M2C_FIELD(arg0, u16 *, 0x70)) * M2C_FIELD(arg0, f32 *, 0x7C));
            var_fv0_4 = (f32) temp_ft0f * M2C_FIELD(temp_s1, f32 *, 0x1C);
            M2C_FIELD(temp_s1, s32 *, 8) = temp_ft0f;
            goto block_43;
        }
    } else if (temp_v1_5 & 0x400) {
        var_fv0_4 = (f32) M2C_FIELD(temp_s1, s32 *, 8) * M2C_FIELD(temp_s1, f32 *, 0x1C);
block_43:
        var_s1 = M2C_FIELD(arg0, void **, 0xB0) + 0x84;
        var_fv0 = var_fv0_4 * var_fs0;
block_44:
        func_802964F0(var_s1, M2C_FIELD((M2C_FIELD(arg0, void **, 0xB0) + (M2C_FIELD(arg0, s32 *, 0) * 2)), s16 *, 0xDC));
        D_80296500(var_s1, (s16) (s32) var_fv0);
    }
}
