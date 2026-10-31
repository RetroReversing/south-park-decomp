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
s32 D_80216E8C(void *, M2C_UNK, s8);                /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
s32 D_80246A4C();                                   /* extern */
M2C_UNK func_80286374(void *, void *);              /* extern */
extern M2C_UNK D_800AA408;
extern M2C_UNK D_800AA410;
extern f32 D_800AA418;
extern s32 D_800D6340;

void func_80285318(void *arg0, void *arg1) {
int __repair_literal;

    M2C_UNK var_a2_2;
    M2C_UNK var_a2_3;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fs0;
    s32 *temp_a3;
    s32 temp_a0;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_condition_bit;
    s32 var_v0;
    u16 temp_v0_2;
    u16 temp_v1_3;
    u16 temp_v1_5;
    u8 *temp_v0;
    u8 *temp_v1;
    void *temp_a0_2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x14) + 0x14;
    if (D_80246A4C() != 1) {
        temp_fs0 = M2C_FIELD(&D_800AA408, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 0x158) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x158), temp_fs0);
        M2C_FIELD(arg1, f32 *, 0x154) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x154), temp_fs0);
    }
    if (M2C_FIELD(arg1, s8 *, 0x30) != 0) {
        temp_fv0f = M2C_FIELD(temp_s1, f32 *, 0x7C);
        var_fs0 = 0.0f;
        if (temp_fv0f > 0.0f) {
            var_fs0 = (temp_fv0f + M2C_FIELD(temp_s1, f32 *, 0x74)) * M2C_FIELD(&D_800AA408, f32 *, 4);
        }
        temp_a0 = M2C_FIELD(arg1, s32 *, 0x188);
        if ((temp_a0 & 0x10) && (M2C_FIELD(arg1, s32 *, 0x17C) < M2C_FIELD(temp_s1, s16 *, 0x6E))) {
            M2C_FIELD(arg1, s32 *, 0x188) = (s32) (temp_a0 & ~0x10);
            func_80286374(arg0, arg1);
        }
        if (M2C_FIELD(arg1, s32 *, 0x10C) != 0) {
            temp_v0 = M2C_FIELD(arg1, u8 **, 0x108);
            M2C_FIELD(arg1, s32 *, 0x10C) = 0;
            if ((temp_v0 != NULL) && (*temp_v0 == 1)) {
                var_a1 = 0;
__repair_literal = 0;

                if (D_800D6340 > __repair_literal) {
                    temp_a3 = &D_800D6340 - 4;
                    var_a2 = 0;
loop_13:
                    temp_v1 = M2C_FIELD(arg1, u8 **, 0x108);
                    temp_a0_2 = M2C_FIELD(temp_a3, s32 *, 0) + var_a2;
                    if (temp_a0_2 == temp_v1) {
block_17:
                        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0xD8);
                        switch (temp_v0_2) {        /* switch 1; irregular */
                        default:                    /* switch 1 */
                            M2C_FIELD(temp_a0_2, s32 *, 0xC40) = 1;
                            break;
                        case 0x7D3:                 /* switch 1 */
                            /* fallthrough */
                        case 0x3F1:                 /* switch 1 */
                        case 0x7D0:                 /* switch 1 */
                            M2C_FIELD(temp_a0_2, s32 *, 0xC40) = 2;
                            break;
                        }
                        M2C_FIELD(temp_a0_2, f32 *, 0xC44) = (f32) M2C_FIELD(&D_800AA410, f32 *, 0);
                        M2C_FIELD(temp_a0_2, f32 *, 0xC54) = (f32) M2C_FIELD(&D_800AA410, f32 *, 4);
                        M2C_FIELD(temp_a0_2, f32 *, 0xC58) = (f32) D_800AA418;
                        M2C_FIELD(temp_a0_2, f32 *, 0xC48) = (f32) ((f32) M2C_FIELD(arg1, u16 *, 4) / (f32) M2C_FIELD(arg1, u16 *, 6));
                    } else {
                        if ((temp_a0_2 + 0x368) != temp_v1) {
                            var_a1 += 1;
                            var_a2 += 0x15C0;
                            if (var_a1 < M2C_FIELD(temp_a3, s32 *, 4)) {
                                goto loop_13;
                            }
                        } else {
                            goto block_17;
                        }
                    }
                }
            }
        }
        if ((M2C_FIELD(arg1, u16 *, 4) != 0) && (temp_v1_2 = M2C_FIELD(arg1, s32 *, 0x188), ((temp_v1_2 & 2) == 0))) {
            temp_fv1f = (f32) M2C_FIELD(arg1, u16 *, 6);
            temp_fv1 = (f32) M2C_FIELD(arg1, u16 *, 4);
            if (temp_fv1 <= (temp_fv1f * M2C_FIELD(temp_s1, f32 *, 0x74))) {
                M2C_FIELD(arg1, s32 *, 0x188) = (s32) (temp_v1_2 | 1);
            } else {
                temp_fv0f_2 = M2C_FIELD(temp_s1, f32 *, 0x7C);
                var_condition_bit = temp_fv0f_2 > 0.0f;
                if (temp_fv0f_2 > 0.0f) {
                    if ((temp_fv1 <= (temp_fv1f * var_fs0)) && !(temp_v1_2 & 8)) {
                        var_a2_2 = 0x2C;
                        goto block_38;
                    }
                    var_condition_bit = temp_fv0f_2 > 0.0f;
                    goto block_34;
                }
block_34:
                if (var_condition_bit && ((f32) M2C_FIELD(arg1, u16 *, 4) <= ((f32) M2C_FIELD(arg1, u16 *, 6) * temp_fv0f_2)) && !(M2C_FIELD(arg1, s32 *, 0x188) & 4)) {
                    var_a2_2 = 0x2B;
block_38:
                    D_8023E95C(arg0, arg1, var_a2_2);
                }
            }
            if ((M2C_FIELD(arg1, s8 *, 0x30) != 0x30) && (M2C_FIELD(arg1, s32 *, 0x19C) != 0) && (temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u16 *, 2), ((temp_v1_3 & 1) == 0)) && !(temp_v1_3 & 8) && (M2C_FIELD(arg1, s32 *, 0x17C) != M2C_FIELD(temp_s1, s16 *, 0x6E)) && ((M2C_FIELD(arg1, s32 *, 0x190) < M2C_FIELD(temp_s1, s8 *, 0xA4)) || (M2C_FIELD(arg1, s32 *, 0x194) < M2C_FIELD(temp_s1, s8 *, 0xA5))) && ((temp_v1_4 = M2C_FIELD(temp_s1, s32 *, 0x64), var_v0 = temp_v1_4 & 2, ((temp_v1_4 & 1) != 0)) || (var_v0 = temp_v1_4 & 2, (M2C_FIELD(arg1, s32 *, 0x180) != 0))) && ((var_v0 == 0) || !(M2C_FIELD(arg0, s32 *, 0xF4) & 0x10000)) && (M2C_FIELD(arg1, f32 *, 0x184) <= M2C_FIELD(arg1, f32 *, 0x3C))) {
                if (M2C_FIELD(arg1, s32 *, 0x188) & 1) {
                    M2C_FIELD(arg1, s32 *, 0xF4) = 1;
                    return;
                }
                if (D_80216E8C(arg0, 0x2BFC, M2C_FIELD(arg1, s8 *, 0xB2)) >= 0) {
                    if (!((f32) M2C_FIELD(arg1, u16 *, 4) <= ((f32) M2C_FIELD(arg1, u16 *, 6) * M2C_FIELD(temp_s1, f32 *, 0x78)))) {
                        if (M2C_FIELD(arg1, s32 *, 0x19C) == 2) {
                            goto block_57;
                        }
                        goto block_68;
                    }
block_57:
                    var_a2_3 = 0x2A;
                    goto block_69;
                }
                temp_v1_5 = M2C_FIELD(arg0, u16 *, 0xD8);
                switch (temp_v1_5) {                /* switch 2; irregular */
                case 0x3FA:                         /* switch 2 */
                    if ((((u32) M2C_FIELD(arg1, u32 *, 0x18C) < 2U) && (M2C_FIELD(arg1, s32 *, 0x194) < M2C_FIELD(temp_s1, s8 *, 0xA5)) && (M2C_FIELD(temp_s1, s8 *, 0x9F) != 0)) || (M2C_FIELD(temp_s1, s8 *, 0x9C) == 0)) {
                        var_a2_3 = 0xF;
                    } else {
block_68:
                        var_a2_3 = 0x29;
                    }
block_69:
                    D_8023E95C(arg0, arg1, var_a2_3);
                    break;
                case 0x3F9:                         /* switch 2 */
                    if (!(M2C_FIELD(arg1, s32 *, 0x188) & 4)) {
                        D_8023E95C(arg0, arg1, 0x33);
                        M2C_FIELD(arg1, s32 *, 0x1AC) = 0x29;
                        return;
                    }
                    goto block_68;
                }
            }
        }
    }
}
