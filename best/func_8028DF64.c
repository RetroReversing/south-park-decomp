/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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
M2C_UNK D_8021B8D4(s32);                            /* extern */
void *func_8028FE64(void *);                        /* extern */
extern s32 D_800ACCF8;
extern void *D_800B3628;
extern M2C_UNK D_800CCA80;

void func_8028DF64(f32 arg0, f32 arg1, s32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_v0_3;
    s32 var_condition_bit;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    temp_a0 = M2C_FIELD(D_800B3628, s32 *, 4);
    if (temp_a0 != 0) {
        temp_v0 = D_80210ADC(temp_a0, 2);
        temp_v0_2 = func_8028FE64(temp_v0);
        temp_s3 = M2C_FIELD(temp_v0, s32 *, 4);
        if (temp_s3 != 0) {
            D_800ACCF8 = arg2;
            var_s1 = 0;
            if (temp_s3 > 0) {
                var_s0 = temp_v0_2;
                do {
                    temp_v0_3 = M2C_FIELD(var_s0, s32 *, 4);
                    switch (temp_v0_3) {            /* irregular */
                    case -1:
                        var_s1 += 1;
                        break;
                    case 0:
                        var_v0 = M2C_FIELD(&D_800CCA80, s32 *, 0x1048);
                        var_v1 = M2C_FIELD(var_s0, s32 *, 8) * 0x14;
block_10:
                        temp_fv0 = M2C_FIELD(var_s0, f32 *, 0);
                        if (!(arg0 <= temp_fv0) || !(temp_fv0 <= arg1)) {
                            temp_fv0_2 = M2C_FIELD(D_800B3628, f32 *, 0x10);
                            temp_fv0f = M2C_FIELD(D_800B3628, f32 *, 0x1C);
                            if (temp_fv0f <= temp_fv0_2) {
                                var_condition_bit = temp_fv0f <= M2C_FIELD(var_s0, f32 *, 0);
                                goto block_18;
                            }
                            temp_fv0f_2 = M2C_FIELD(D_800B3628, f32 *, 0x18);
                            if (temp_fv0_2 != temp_fv0f_2) {
                                var_s1 += 1;
                            } else {
                                var_condition_bit = M2C_FIELD(var_s0, f32 *, 0) <= temp_fv0f_2;
block_18:
                                if (!var_condition_bit) {
                                    var_s1 += 1;
                                } else {
                                    goto block_21;
                                }
                            }
                        } else {
block_21:
                            var_s1 += 1;
                            D_8021B8D4(var_v0 + var_v1);
                            M2C_FIELD(var_s0, s32 *, 4) = -1;
                        }
                        break;
                    default:
                        var_v0 = M2C_FIELD(&D_800CCA80, s32 *, 0x104C);
                        var_v1 = M2C_FIELD(var_s0, s32 *, 8) * 0x14;
                        goto block_10;
                    }
                    var_s0 += 0xC;
                } while (var_s1 < temp_s3);
            }
            D_800ACCF8 = 0;
        }
    }
}
