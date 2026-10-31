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
/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

s32 D_8021B7EC(void *, s32, s32);           /* extern */
s32 D_8023E95C(void *, void *, s32, s32);   /* extern */
s32 D_80247110(void *, void *);                 /* extern */
s32 func_8025A554();
extern f32 D_800AA608;
extern f32 D_800ABA00;
extern char D_800B2190[];
extern char D_800B233C[];
extern void *D_800F4AC8;
extern s32 D_800F4B60;

void func_80287D58(void *arg0, void *arg1) {
    char *var_s0;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 (*var_v0)(s32, s32 *);
    s32 temp_a3;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a0_2;
    u16 temp_v1;
    void *var_a1;
    void *var_v1;

    if (M2C_FIELD(arg1, u16 *, 4) != 0) {
        if (D_800F4B60 != 0) {
            temp_fv0f = M2C_FIELD(arg1, f32 *, 0x194);
            if (temp_fv0f <= 0.0f) {
                M2C_FIELD(arg1, f32 *, 0x194) = (f32) D_800AA608;
            } else {
                temp_fv0 = temp_fv0f - D_800ABA00;
                M2C_FIELD(arg1, f32 *, 0x194) = temp_fv0;
                if (temp_fv0 <= 0.0f) {
                    M2C_FIELD(arg1, f32 *, 0x194) = 0.0f;
                    temp_a3 = M2C_FIELD(arg1, s32 *, 0x88);
                    M2C_FIELD(arg1, s32 *, 0x98) = temp_a3;
                    M2C_FIELD(arg1, s32 *, 0x9C) = (s32) M2C_FIELD(arg1, s32 *, 0x8C);
                    M2C_FIELD(arg1, s32 *, 0xA0) = (s32) M2C_FIELD(arg1, s32 *, 0x90);
                    D_8023E95C(arg0, arg1, 7, temp_a3);
                }
            }
        }
        if ((D_800F4AC8 != NULL) && (M2C_FIELD(D_800F4AC8, u8 *, 0) == 1) && (M2C_FIELD(D_800F4AC8, s32 *, 0xF4) & 0x18000000)) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0xD8);
            temp_s3 = M2C_FIELD(D_800F4AC8, s32 *, 0x1CC);
            if (temp_v1 == 0x3FF) {
                var_s0 = &D_800B2190;
                D_8021B7EC(arg0, 2, temp_s3);
                var_a0 = 0;
                var_v1 = D_800B2190 + 0x10;
loop_11:
                if (M2C_FIELD(var_v1, s16 *, -0xC) != 0x1456) {
                    var_v1 += 0x14;
                    var_a0 += 1;
                    var_s0 += 0x14;
                    if (var_a0 >= 9) {
                        return;
                    }
                    goto loop_11;
                }
                var_v0 = M2C_FIELD(var_v1, s32 (**)(s32, s32 *), 0);
                goto block_23;
            }
            if ((u32) ((unsigned short)(temp_v1 - 0x65)) < 4U) {
                var_s0 = &D_800B233C;
                D_8021B7EC(arg0, 2, temp_s3);
                var_a0_2 = 0;
                var_a1 = D_800B233C + 8;
loop_19:
                if (M2C_FIELD(var_a1, s16 *, -4) == M2C_FIELD(arg0, u16 *, 0xD8)) {
                    var_v0 = M2C_FIELD(var_a1, s32 (**)(s32, s32 *), 0);
block_23:
                    if (var_v0(temp_s3, var_s0) != 0) {
                        M2C_FIELD(arg1, s32 *, 0) |= 0x20;
                        M2C_FIELD(arg0, s32 *, 0xF4) &= 0xFF7FFFFF & 0xFFEFFFFF & 0xFFFF7FFF;
                        if (M2C_FIELD(arg1, s32 *, 0xF0) != 0) {
                            D_80247110(arg0, arg1);
                        }
                        if (M2C_FIELD(arg0, s32 *, 0xF4) & 0x04000000) {
                            func_8025A554(arg0);
                        }
                        D_8021B7EC(arg0, 1, temp_s3);
                    }
                } else {
                    var_a1 += 0xC;
                    var_a0_2 += 1;
                    var_s0 += 0xC;
                    if (var_a0_2 >= 4) {

                    } else {
                        goto loop_19;
                    }
                }
            }
        }
    }
}
