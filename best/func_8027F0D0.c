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
extern f32 D_800AA258;

void func_8027F0D0(void *arg0, s32 arg1, f32 arg2, f32 *arg3) {
    char *var_a3;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 var_fv0;
    s16 temp_a0;
    s16 temp_s1;
    s32 *temp_s0;
    s32 *temp_t0;
    s32 *temp_v0;
    s32 temp_ft0;
    s32 temp_ft0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0_2;

    temp_s0 = *M2C_FIELD(arg0, s32 ***, 0x10);
    temp_s1 = M2C_FIELD((D_80210ADC(temp_s0, 1) + (arg1 * 4)), s16 *, 8);
    if (temp_s1 == -1) {
        temp_v0 = D_80210ADC(temp_s0, 2);
        temp_v0_2 = (char *)(temp_v0); temp_v0_2 += (s32)(((arg1 * *temp_v0) + 8));
        M2C_FIELD(arg3, f32 *, 0) = M2C_FIELD(temp_v0_2, f32 *, 0);
        M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(temp_v0_2, s32 *, 4);
        M2C_FIELD(arg3, s32 *, 8) = (s32) M2C_FIELD(temp_v0_2, s32 *, 8);
        return;
    }
    temp_t0 = D_80210ADC(D_80210ADC(D_80210ADC(temp_s0, 5), 1), temp_s1);
    if (arg2 >= 0.0f) {
        var_v0 = (s32) arg2;
        goto block_6;
    }
    temp_ft0 = (s32) arg2;
    var_fv0 = (f32) temp_ft0;
    if (var_fv0 != arg2) {
        var_v0 = temp_ft0 - 1;
block_6:
        var_fv0 = (f32) var_v0;
    }
    temp_fv1 = arg2 - var_fv0;
    var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a3 = arg3;
    if (var_v1 == 0xFFFF) {
        var_v1 = 0;
    }
    if (arg2 >= 0.0f) {
        var_a1 = (s32) arg2;
    } else {
        temp_ft0_2 = (s32) arg2;
        var_a1_2 = 1;
        if ((f32) temp_ft0_2 == arg2) {
            var_a1_2 = 0;
        }
        var_a1 = temp_ft0_2 - var_a1_2;
    }
    temp_a0 = M2C_FIELD(arg0, s16 *, 8);
    if (var_a1 >= temp_a0) {
        var_a1 = var_v1;
    }
    var_a2 = var_a1 + 1;
    if (var_a2 >= temp_a0) {
        var_a2 = var_v1;
    }
    var_v1_2 = 0;
    do {
        temp_fv0f = ((D_800AA258 - temp_fv1) * M2C_BITWISE(f32, temp_t0[(var_a1 * 4) + var_v1_2])) + (temp_fv1 * M2C_BITWISE(f32, temp_t0[(var_a2 * 4) + var_v1_2]));
        var_v1_2 += 1;
        *(f32 *)var_a3 = temp_fv0f;
        var_a3 += 4;
    } while (var_v1_2 < 3);
}
