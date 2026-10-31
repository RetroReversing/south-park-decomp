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

s32 *D_80210ADC(s32 *, s16);                        /* extern */
M2C_UNK D_80211D5C(void *, f32, void *, void *);    /* extern */
extern M2C_UNK D_800AA258;

void func_8027F2D4(void *arg0, s32 arg1, f32 arg2, void *arg3) {
    f32 var_fv0;
    s16 temp_a0;
    s16 temp_s1;
    s32 *temp_s0;
    s32 *temp_t0;
    s32 *temp_v0;
    s32 temp_fv1;
    s32 temp_fv1_2;
    s32 temp_fv1_3;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a3;
    s32 var_v0;
    void *temp_v0_2;

    temp_s0 = *M2C_FIELD(arg0, s32 ***, 0x10);
    temp_s1 = M2C_FIELD((D_80210ADC(temp_s0, 1) + (arg1 * 4)), s16 *, 0xA);
    if (temp_s1 == -1) {
        temp_v0 = D_80210ADC(temp_s0, 2);
        temp_v0_2 = (char *)(temp_v0); temp_v0_2 += (s32)(((arg1 * *temp_v0) + 8));
        M2C_FIELD(arg3, f32 *, 0) = (f32) ((f32) M2C_FIELD(temp_v0_2, s16 *, 0xC) * M2C_FIELD(&D_800AA258, f32 *, 4));
        M2C_FIELD(arg3, f32 *, 4) = (f32) ((f32) M2C_FIELD(temp_v0_2, s16 *, 0xE) * M2C_FIELD(&D_800AA258, f32 *, 4));
        M2C_FIELD(arg3, f32 *, 8) = (f32) ((f32) M2C_FIELD(temp_v0_2, s16 *, 0x10) * M2C_FIELD(&D_800AA258, f32 *, 4));
        M2C_FIELD(arg3, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_v0_2, s16 *, 0x12) * M2C_FIELD(&D_800AA258, f32 *, 4));
        return;
    }
    temp_t0 = D_80210ADC(D_80210ADC(D_80210ADC(temp_s0, 5), 2), temp_s1);
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0xFFFF) {
        if (arg2 >= 0.0f) {
            var_a2 = (s32) arg2;
        } else {
            temp_fv1 = (s32) arg2;
            var_a2_2 = 1;
            if ((f32) temp_fv1 == arg2) {
                var_a2_2 = 0;
            }
            var_a2 = temp_fv1 - var_a2_2;
        }
        temp_a0 = M2C_FIELD(arg0, s16 *, 8);
        if (var_a2 >= temp_a0) {
            var_a2 = 0;
        }
        var_a3 = var_a2 + 1;
        if (var_a3 >= temp_a0) {
            var_a3 = 0;
        }
    } else {
        if (arg2 >= 0.0f) {
            var_a2 = (s32) arg2;
        } else {
            temp_fv1_2 = (s32) arg2;
            var_a2_3 = 1;
            if ((f32) temp_fv1_2 == arg2) {
                var_a2_3 = 0;
            }
            var_a2 = temp_fv1_2 - var_a2_3;
        }
        temp_v1 = M2C_FIELD(arg0, s16 *, 8) - 1;
        var_a3 = var_a2 + 1;
        if (var_a2 >= temp_v1) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0xC);
            var_a3 = var_a2 + 1;
        }
        if (var_a3 >= temp_v1) {
            var_a3 = M2C_FIELD(arg0, s32 *, 0xC);
        }
    }
    if (arg2 >= 0.0f) {
        var_v0 = (s32) arg2;
        goto block_27;
    }
    temp_fv1_3 = (s32) arg2;
    var_fv0 = (f32) temp_fv1_3;
    if (var_fv0 != arg2) {
        var_v0 = temp_fv1_3 - 1;
block_27:
        var_fv0 = (f32) var_v0;
    }
    D_80211D5C(arg3, arg2 - var_fv0, temp_t0 + (var_a2 * 0x10), temp_t0 + (var_a3 * 0x10));
}
