/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_8021083C(s32 **, M2C_UNK);                /* extern */
void *D_80210ADC(s32 *, M2C_UNK);                   /* extern */
s32 D_80210B64(s32, s32, s32, s32 *);               /* extern */
s32 **D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, void *, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK D_80221864(M2C_UNK, s32 **);                /* extern */
M2C_UNK D_80221A18(M2C_UNK);                        /* extern */
M2C_UNK D_80227DA8(void *, M2C_UNK);                /* extern */
s32 **D_80227E34(void *);                           /* extern */
s32 **D_8022AFB8(void *);                           /* extern */
extern M2C_UNK D_413EE4;
extern M2C_UNK D_800A78C0;

void func_80414424(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 **temp_v0;
    s32 **temp_v0_3;
    s32 **temp_v0_5;
    s32 *temp_s4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_t0;
    s32 var_a2;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s6;
    s32 var_s7;
    void *temp_v0_2;
    void *temp_v0_4;
    void *var_s1;
    void *var_s2_2;

    sp28 = 0;
    sp24 = M2C_FIELD(D_80210ADC(M2C_FIELD(arg0, s32 **, 0x58), 0), s32 *, 4);
    temp_s0 = M2C_FIELD(D_80210ADC(M2C_FIELD(arg0, s32 **, 0x58), 2), s32 *, 4);
    temp_s0_2 = temp_s0 - 1;
    sp34 = D_80210ADC(M2C_FIELD(arg0, s32 **, 0x58), 4) + 8;
    sp30 = temp_s0_2;
    sp2C = sp24 - 1;
    if (temp_s0_2 >= 0) {
        var_s7 = 0;
loop_2:
        var_s6 = 0;
        var_a2 = var_s7;
        if (sp2C >= 0) {
loop_3:
            if (M2C_FIELD((sp34 + (var_a2 * 0x14)), s32 *, 0x10) == 0) {
                temp_v0 = D_8021FCD8(0, D_80210B64(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x24), var_a2, &sp20), sp20, 4, arg0, &D_413EE4, &D_800A78C0, 1);
                if (temp_v0 != NULL) {
                    temp_s4 = *temp_v0;
                    if (*temp_s4 != 0) {
                        temp_v0_2 = D_80210ADC(temp_s4, 0);
                        var_s2 = 0;
                        temp_s3 = M2C_FIELD(temp_v0_2, s32 *, 4);
                        if (temp_s3 > 0) {
                            var_s1 = temp_v0_2 + 8;
                            do {
                                M2C_FIELD(var_s1, s32 ***, 0x24) = temp_v0;
                                D_80227DA8(var_s1, 0);
                                temp_v0_3 = D_80227E34(var_s1);
                                if (temp_v0_3 != NULL) {
                                    D_8021083C(temp_v0_3, 8);
                                    D_80221864(0, temp_v0_3);
                                }
                                var_s2 += 1;
                                var_s1 += 0x90;
                            } while (var_s2 < temp_s3);
                        }
                        temp_v0_4 = D_80210ADC(temp_s4, 1);
                        var_s1_2 = 0;
                        temp_s3_2 = M2C_FIELD(temp_v0_4, s32 *, 4);
                        if (temp_s3_2 > 0) {
                            var_s2_2 = temp_v0_4 + 8;
                            do {
                                temp_v0_5 = D_8022AFB8(var_s2_2);
                                if (temp_v0_5 != NULL) {
                                    D_8021083C(temp_v0_5, 4);
                                    D_80221864(0, temp_v0_5);
                                }
                                var_s1_2 += 1;
                                var_s2_2 += 0x1B0;
                            } while (var_s1_2 < temp_s3_2);
                        }
                    }
                    D_80221864(0, temp_v0);
                    goto block_18;
                }
                D_80221A18(0);
                return;
            }
block_18:
            var_s6 += 1;
            var_a2 = var_s6 + var_s7;
            if (sp2C < var_s6) {
                goto block_19;
            }
            goto loop_3;
        }
block_19:
        var_s7 += sp24;
        temp_t0 = sp28 + 1;
        sp28 = temp_t0;
        if (sp30 < temp_t0) {

        } else {
            goto loop_2;
        }
    }
}
