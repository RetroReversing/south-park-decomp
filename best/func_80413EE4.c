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

s32 D_80202B24(void **, s32, f32 *, void *);    /* extern */
s32 *D_80210ADC(s32 *, s32);                        /* extern */
s32 D_80210B50(s32, s32, u16);                      /* extern */
s32 D_80210C34(s32 *, void *, s32);         /* extern */
s32 D_8021C020(void *, s32 *);                  /* extern */
s32 D_80221E20(s32, s32 ***, void **);      /* extern */
void **D_802223EC(s32, s32 ***, s32);           /* extern */
s32 D_80222FA0(s32 ***, s32);                   /* extern */
s32 D_802273E0(void *, s32 *, s32, s32 *, f32); /* extern */
s32 D_802276D8(void *, s32 *, s32, s32 *);      /* extern */
f32 D_802281F4(void *);                             /* extern */
s32 D_8022A7A8(void *, s32 *, s32, s32 *);      /* extern */
extern f32 D_800A78BC;

void func_80413EE4(void *arg0, s32 ***arg1) {
    void *sp18;
    f32 sp218;
    f32 sp21C;
    f32 sp220;
    s32 *sp228;
    s32 *sp22C;
    s32 *sp230;
    void *sp234;
    s32 sp238;
    s32 sp23C;
    s32 sp240;
    s32 sp244;
    s32 sp248;
    s32 sp24C;
    s32 *sp250;
    void *sp254;
    s32 *sp258;
    void **sp25C;
    f32 temp_fs0;
    s32 *temp_a1;
    s32 *temp_s0;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_7;
    s32 *temp_v0_8;
    s32 *temp_v1;
    char *var_s0;
    char *var_s1_2;
    char *var_s2_3;
    char *var_s4;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_fp;
    s32 temp_s0_5;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0_5;
    s32 var_s0_2;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    u16 var_s1_3;
    void **temp_v0_6;
    void **var_v1;
    void *temp_a0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_6;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s5;
    void *var_s0_3;
    void *var_s0_4;
    void *var_s0_5;
    void *var_s1;
    void *var_s2_2;

    if (D_80222FA0(arg1, 1) != 0) {
        temp_s0 = **arg1;
        if (*temp_s0 != 0) {
            temp_v0 = D_80210ADC(temp_s0, 0);
            sp228 = temp_v0;
            temp_s4 = M2C_FIELD(temp_v0, s32 *, 4);
            temp_v0_2 = D_80210ADC(temp_s0, 1);
            temp_t1 = M2C_FIELD(temp_v0_2, s32 *, 4);
            temp_s1 = temp_s4 + temp_t1;
            sp238 = temp_t1;
            sp240 = (temp_s1 * 0x90) | 8;
            temp_v0_3 = D_80210ADC(temp_s0, 2);
            sp22C = temp_v0_3;
            temp_t2 = M2C_FIELD(temp_v0_3, s32 *, 4);
            sp23C = temp_t2;
            sp244 = (temp_t2 * 0x1B0) | 8;
            temp_v0_4 = D_80210ADC(temp_s0, 3);
            sp230 = temp_v0_4;
            temp_fp = M2C_FIELD(temp_v0_4, s32 *, 4);
            temp_v0_5 = ((temp_fp * 0xC4) + 0xF) & ~7;
            sp248 = temp_v0_5;
            temp_v0_6 = D_802223EC(0, arg1, sp240 + (sp244 + 0x18) + temp_v0_5);
            sp25C = temp_v0_6;
            if (temp_v0_6 != NULL) {
                var_s2 = 0;
                sp24C = 1;
                temp_s5 = *temp_v0_6;
                temp_s0_2 = temp_s5 + 0x18;
                M2C_FIELD(temp_s5, s32 *, 0) = 0;
                M2C_FIELD(temp_s5, s32 *, 4) = 0x18;
                D_80210C34(sp228, temp_s0_2, 1);
                D_80210C34(temp_v0_2, temp_s0_2, 1);
                M2C_FIELD(temp_s5, s32 *, 0x18) = 0x90;
                M2C_FIELD(temp_s0_2, s32 *, 4) = temp_s1;
                temp_v0_7 = D_80210ADC(M2C_FIELD(arg0, s32 **, 0x5C), 2);
                sp250 = temp_v0_2 + 8;
                temp_s3 = temp_s5 + 0x20;
                sp234 = temp_s5;
                sp258 = temp_v0_7 + 8;
                var_s0 = sp228 + 8;
                if (temp_s4 > 0) {
                    var_s1 = temp_s3;
                    do {
                        var_s2 += 1;
                        temp_a0 = var_s1;
                        temp_a1 = var_s0;
                        temp_a2 = D_80210B50(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(var_s0, u16 *, 8));
                        var_s1 += 0x90;
                        var_s0 += 0x1C;
                        D_802273E0(temp_a0, temp_a1, temp_a2, sp258, *M2C_FIELD(arg0, f32 **, 0x174C));
                    } while (var_s2 < temp_s4);
                }
                var_s0_2 = 0;
                if (sp238 > 0) {
                    var_s1_2 = sp250;
                    do {
                        D_802276D8(temp_s3 + ((var_s0_2 + temp_s4) * 0x90), var_s1_2, D_80210B50(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(var_s1_2, u16 *, 0x28)), sp258);
                        var_s0_2 += 1;
                        var_s1_2 += 0x34;
                    } while (var_s0_2 < sp238);
                }
                temp_s6 = sp240 + 0x18;
                M2C_FIELD(temp_s5, s32 *, 0) = sp24C;
                sp24C += 1;
                temp_s0_3 = sp234 + temp_s6;
                M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, s32 *, 0) * 4)), s32 *, 4) = temp_s6;
                D_80210C34(sp22C, temp_s0_3, 1);
                M2C_FIELD(temp_s0_3, s32 *, 0) = 0x1B0;
                var_s3 = 0;
                M2C_FIELD(temp_s0_3, s32 *, 4) = sp23C;
                temp_s0_4 = temp_s0_3 + 8;
                sp254 = temp_s0_4;
                if (sp23C > 0) {
                    var_s2_2 = temp_s0_4;
                    var_s4 = sp22C + 8;
                    do {
                        D_8022A7A8(var_s2_2, var_s4, D_80210B50(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(var_s4, u16 *, 0x14)), sp258);
                        var_s1_3 = M2C_FIELD(var_s2_2, u16 *, 0x16E);
                        temp_s0_5 = M2C_FIELD(arg0, s32 *, 0x1774);
                        temp_v0_8 = D_80210ADC(D_80210ADC(D_80210ADC(M2C_FIELD(arg0, s32 **, 0x74), 0), temp_s0_5), 2);
                        D_80210ADC(temp_v0_8, 0);
                        temp_v1 = D_80210ADC(temp_v0_8, 1);
                        temp_a0_2 = 1 << (var_s1_3 & 7);
                        if ((s32) var_s1_3 < 0) {
                            var_s1_3 += 7;
                        }
                        if (*(temp_v1 + ((s32) var_s1_3 >> 3)) & temp_a0_2) {
                            M2C_FIELD(var_s2_2, u16 *, 0x16C) |= 1;
                        }
                        var_s2_2 += 0x1B0;
                        var_s3 += 1;
                        var_s4 += 0x20;
                    } while (var_s3 < sp23C);
                }
                var_s1_4 = 0;
                temp_s6_2 = temp_s6 + sp244;
                M2C_FIELD(temp_s5, s32 *, 0) = sp24C;
                sp24C += 1;
                temp_s0_6 = sp234 + temp_s6_2;
                M2C_FIELD((temp_s5 + (M2C_FIELD(temp_s5, s32 *, 0) * 4)), s32 *, 4) = temp_s6_2;
                D_80210C34(sp230, temp_s0_6, 1);
                M2C_FIELD(temp_s0_6, s32 *, 0) = 0xC4;
                M2C_FIELD(temp_s0_6, s32 *, 4) = temp_fp;
                temp_s3_2 = temp_s0_6 + 8;
                if (temp_fp > 0) {
                    var_s2_3 = sp230 + 8;
                    var_s0_3 = temp_s3_2;
                    do {
                        D_8021C020(var_s0_3, var_s2_3);
                        var_s2_3 += 0x48;
                        var_s1_4 += 1;
                        var_s0_3 += 0xC4;
                    } while (var_s1_4 < temp_fp);
                }
                var_s1_5 = 0;
                M2C_FIELD(temp_s5, s32 *, 0) = sp24C;
                M2C_FIELD((temp_s5 + (sp24C * 4)), s32 *, 4) = (s32) (temp_s6_2 + sp248);
                if (temp_fp > 0) {
                    var_v1 = &sp18;
                    var_s0_4 = temp_s3_2;
                    do {
                        *var_v1 = var_s0_4;
                        var_v1 += 4;
                        var_s1_5 += 1;
                        var_s0_4 += 0xC4;
                    } while (var_s1_5 < temp_fp);
                }
                var_s3_2 = 0;
                if (sp23C > 0) {
                    temp_fs0 = D_800A78BC;
                    var_s0_5 = sp254;
                    do {
                        sp218 = M2C_FIELD(var_s0_5, f32 *, 4);
                        var_s3_2 += 1;
                        sp21C = M2C_FIELD(var_s0_5, f32 *, 8) + (D_802281F4(var_s0_5) * temp_fs0);
                        sp220 = M2C_FIELD(var_s0_5, f32 *, 0xC);
                        D_80202B24(&sp18, temp_fp, &sp218, var_s0_5 + 0x178);
                        M2C_FIELD(var_s0_5, s32 *, 0x190) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x178);
                        M2C_FIELD(var_s0_5, s32 *, 0x194) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x17C);
                        M2C_FIELD(var_s0_5, s32 *, 0x198) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x180);
                        M2C_FIELD(var_s0_5, s32 *, 0x19C) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x184);
                        M2C_FIELD(var_s0_5, s32 *, 0x1A0) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x188);
                        M2C_FIELD(var_s0_5, s32 *, 0x1A4) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x18C);
                        var_s0_5 += 0x1B0;
                    } while (var_s3_2 < sp23C);
                }
            }
            D_80221E20(0, arg1, sp25C);
        }
    }
}
