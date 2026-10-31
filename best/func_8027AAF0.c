/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

u32 *D_80210ADC(s32, s32);                  /* extern */
s32 D_80213AF4(void *, f32 *, f32 *);           /* extern */
s32 func_8027A814();

void func_8027AAF0(void *arg0, s32 arg1) {
    s32 sp10;
    void *sp290;
    void *sp294;
    void *sp298;
    f32 sp2A0;
    f32 sp2A4;
    f32 sp2A8;
    s32 sp2B0;
    u8 sp2B4;
    void *sp2B8;
    void **sp2BC;
    char *var_s1;
    f32 temp_fv0f;
    char *var_s2;
    s32 temp_v1_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    char *var_s5;
    char *var_s7;
    u32 temp_v1;
    u32 temp_v1_5;
    u8 temp_a3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s0;
    void *var_s3;

    temp_v1 = *D_80210ADC(arg1, 0);
    if (!(temp_v1 & 0x280)) {
        sp2B0 = temp_v1 & 4;
        sp2B8 = M2C_FIELD(arg0, void **, 0);
        var_s5 = D_80210ADC(arg1, 1);
        var_s7 = var_s5 + 4;
        sp2BC = &sp290;
loop_2:
        if (M2C_FIELD(sp2B8, s32 *, 0x9C) == 0) {
            temp_a3 = M2C_FIELD(var_s5, u8 *, 0);
            temp_v1_2 = temp_a3 & 0xFF;
            sp2B4 = temp_a3;
            if (temp_v1_2 != 1) {
                if ((temp_v1_2 != 0) && (temp_v1_2 < 7) && (temp_v1_2 >= 5)) {
                    temp_a1 = &sp10 + (((u32) (M2C_FIELD(var_s5, u32 *, 0) & 0xFE0000) >> 0x11) * 0x14);
                    sp290 = temp_a1;
                    temp_a0 = &sp10 + (((u32) (M2C_FIELD(var_s5, u32 *, 0) & 0xFE00) >> 9) * 0x14);
                    sp294 = temp_a0;
                    temp_v0 = &sp10 + (((u8) M2C_FIELD(var_s5, u8 *, 3) >> 1) * 0x14);
                    sp298 = temp_v0;
                    if (!(M2C_FIELD(temp_a1, s32 *, 0xC) & M2C_FIELD(temp_a0, s32 *, 0xC) & M2C_FIELD(temp_v0, s32 *, 0xC))) {
                        func_8027A814(arg0);
                        if (sp2B0 != 0) {
                            temp_v1_3 = sp290;
                            sp290 = sp298;
                            sp298 = temp_v1_3;
                            func_8027A814(arg0, sp2BC);
                        }
                    }
                    if (sp2B4 != 6) {
                        var_s7 += 8;
                    } else {
                        temp_a1_2 = &sp10 + (((u32) (M2C_FIELD(var_s7, u32 *, 0) & 0xFE0000) >> 0x11) * 0x14);
                        sp290 = temp_a1_2;
                        temp_a0_2 = &sp10 + (((u32) (M2C_FIELD(var_s7, u32 *, 0) & 0xFE00) >> 9) * 0x14);
                        sp294 = temp_a0_2;
                        temp_v0_2 = &sp10 + (((u8) M2C_FIELD(var_s7, u8 *, 3) >> 1) * 0x14);
                        sp298 = temp_v0_2;
                        if (!(M2C_FIELD(temp_a1_2, s32 *, 0xC) & M2C_FIELD(temp_a0_2, s32 *, 0xC) & M2C_FIELD(temp_v0_2, s32 *, 0xC)) && (func_8027A814(arg0, sp2BC), (sp2B0 != 0))) {
                            temp_v1_4 = sp290;
                            sp290 = sp298;
                            sp298 = temp_v1_4;
                            func_8027A814(arg0, sp2BC);
                            var_s7 += 8;
                        } else {
                            goto block_29;
                        }
                    }
                } else {
                    goto block_29;
                }
            } else {
                temp_v1_5 = M2C_FIELD(var_s5, u32 *, 0);
                var_s2 = (M2C_FIELD(var_s7, u32 *, 0) & 0xFFFFFF) + M2C_FIELD(arg0, s32 *, 0xD4);
                var_s4 = (temp_v1_5 >> 0xC) & 0xFF;
                var_s1 = &sp10 + ((((u32) (temp_v1_5 & 0xFE) >> 1) - var_s4) * 0x14);
                if (var_s4 != 0) {
                    var_s0 = var_s1 + 0xC;
                    var_s3 = var_s2 + 4;
                    do {
                        M2C_FIELD(var_s0, s16 **, 4) = var_s2;
                        sp2A0 = (f32) *(s16 *)var_s2;
                        sp2A4 = (f32) M2C_FIELD(var_s3, s16 *, -2);
                        sp2A8 = (f32) M2C_FIELD(var_s3, s16 *, 0);
                        D_80213AF4(arg0 + 0x94, &sp2A0, var_s1);
                        var_v0 = 2;
                        if (*(f32 *)var_s1 < 0.0f) {
                            var_v0 = 1;
                        }
                        if (!(M2C_FIELD(var_s0, f32 *, -8) < 0.0f)) {
                            var_v0_2 = var_v0 | 4;
                        } else {
                            var_v0_2 = var_v0 | 8;
                        }
                        temp_fv0f = M2C_FIELD(var_s0, f32 *, -4);
                        M2C_FIELD(var_s0, s32 *, 0) = var_v0_2;
                        if (temp_fv0f >= 0.0f) {
                            var_v0_3 = var_v0_2 | 0x10;
                            goto block_27;
                        }
                        var_v0_3 = var_v0_2 | 0x20;
                        if (temp_fv0f < M2C_FIELD(arg0, f32 *, 0x48)) {
block_27:
                            M2C_FIELD(var_s0, s32 *, 0) = var_v0_3;
                        }
                        var_s3 += 0x10;
                        var_s2 += 0x10;
                        var_s0 += 0x14;
                        var_s4 -= 1;
                        var_s1 += 0x14;
                    } while (var_s4 != 0);
                }
block_29:
                var_s7 += 8;
            }
            var_s5 += 8;
            if (sp2B4 != 0xDF) {
                goto loop_2;
            }
        }
    }
}
