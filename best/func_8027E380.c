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

void *D_80210ADC(void *, M2C_UNK);                  /* extern */
s32 D_80210B64(s32 *, M2C_UNK, s16, s32 *);         /* extern */
s32 D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, void *, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_8027EE4C(void *);                          /* extern */
void *func_8028087C(void *);                        /* extern */
extern M2C_UNK D_27FA20;
extern M2C_UNK D_800AA208;

void func_8027E380(void *arg0, s32 *arg1, M2C_UNK arg2, s32 arg3, s32 *arg4, void *arg5) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s16 temp_s2;
    s16 temp_s3;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;
    u16 temp_v0_2;
    u16 temp_v0_4;
    void *temp_v0;
    void *temp_v0_3;

    temp_s3 = M2C_FIELD(arg0, s16 *, 4);
    temp_s2 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_s2 != temp_s3) && (arg3 != 0)) {
        sp20 = M2C_FIELD(arg0, s32 *, 0);
        sp24 = (s32) M2C_FIELD(arg0, s16 *, 4);
        sp28 = M2C_FIELD(arg0, s32 *, 8);
        sp2C = M2C_FIELD(arg0, s32 *, 0xC);
        sp30 = M2C_FIELD(arg0, s32 *, 0x10);
        sp34 = M2C_FIELD(arg0, s32 *, 0x14);
        if ((temp_s2 == -1) || (temp_s2 >= *arg1)) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            var_v1 = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x10) = D_8021FCD8(0, D_80210B64(arg1, arg2, temp_s2, &sp38), sp38, 4, arg0, &D_27FA20, &D_800AA208, 0);
            var_v1 = 0;
            if (func_8027EE4C(arg0) != 0) {
                temp_v0 = func_8028087C(arg0);
                temp_v0_2 = M2C_FIELD(D_80210ADC(temp_v0, 0), u16 *, 6);
                M2C_FIELD(arg0, s16 *, 4) = temp_s2;
                M2C_FIELD(arg0, s32 *, 8) = temp_v0_2;
                var_v1 = 1;
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(D_80210ADC(D_80210ADC(temp_v0, 3), 0), u16 *, 2);
            }
        }
        if (var_v1 != 0) {
            if (arg5 != NULL) {
                M2C_FIELD(arg5, s32 *, 0) = sp20;
                M2C_FIELD(arg5, s32 *, 4) = sp24;
                M2C_FIELD(arg5, s32 *, 8) = sp28;
                M2C_FIELD(arg5, s32 *, 0xC) = sp2C;
                M2C_FIELD(arg5, s32 *, 0x10) = sp30;
                M2C_FIELD(arg5, s32 *, 0x14) = sp34;
                M2C_FIELD(arg5, s32 *, 4) = temp_s3;
                M2C_FIELD(arg5, s16 *, 6) = temp_s3;
            }
            M2C_FIELD(arg0, s16 *, 4) = temp_s2;
            M2C_FIELD(arg0, s16 *, 6) = temp_s2;
            M2C_FIELD(arg0, s32 *, 0) = 0;
            M2C_FIELD(arg0, s16 *, 0xA) = 0;
            if (arg4 != NULL) {
                *arg4 = 1;
            }
        } else {
            if (arg4 != NULL) {
                *arg4 = 0;
            }
            if (temp_s3 == -1) {
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                return;
            }
            if (temp_s3 < *arg1) {
                var_a1 = D_80210B64(arg1, arg2, temp_s3, &sp3C);
                var_a2 = sp3C;
                goto block_27;
            }
            goto block_25;
        }
    } else {
        if (arg4 != NULL) {
            *arg4 = 0;
        }
        if (temp_s3 == -1) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return;
        }
        if (temp_s3 >= *arg1) {
block_25:
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return;
        }
        var_a1 = D_80210B64(arg1, arg2, temp_s3, &sp40);
        var_a2 = sp40;
block_27:
        M2C_FIELD(arg0, s32 *, 0x10) = D_8021FCD8(0, var_a1, var_a2, 4, arg0, &D_27FA20, &D_800AA208, 0);
        if (func_8027EE4C(arg0) != 0) {
            temp_v0_3 = func_8028087C(arg0);
            temp_v0_4 = M2C_FIELD(D_80210ADC(temp_v0_3, 0), u16 *, 6);
            M2C_FIELD(arg0, s16 *, 4) = temp_s3;
            M2C_FIELD(arg0, s32 *, 8) = temp_v0_4;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(D_80210ADC(D_80210ADC(temp_v0_3, 3), 0), u16 *, 2);
        }
    }
}
