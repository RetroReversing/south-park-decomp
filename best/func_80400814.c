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

extern M2C_UNK D_800BC208;
extern M2C_UNK D_800BC210;
extern M2C_UNK D_800BC218;

void func_80400814(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s8 *arg4, s8 *arg5, s8 *arg6) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 var_fv1f;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3;
    s32 var_t5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 var_a0_3;
    u32 var_a2;

    M2C_ERROR(/* unknown instruction: scd $at, 0x5e02($a3) */);
    if (arg0 != 0) {
        if (arg0 < 0) {
            var_a0 = arg0 + 0x55;
            var_v0 = var_a0 * 2;
            if (var_a0 < 0) {
                var_t5 = 0;
                goto block_7;
            }
            goto block_5;
        }
        var_a0 = 0x55 - arg0;
        var_v0 = var_a0 * 2;
        if (var_a0 >= 0) {
block_5:
            var_t5 = (s32) ((f32) ((((var_v0 + var_a0) * 8) + var_a0) * 4) * M2C_FIELD(&D_800BC208, f32 *, 0));
            var_v0_2 = arg0 << 0x18;
        } else {
            var_t5 = 0;
block_7:
            var_v0_2 = arg0 << 0x18;
        }
        temp_v1 = var_v0_2 >> 0x18;
        if (temp_v1 >= -0x55) {
            var_v1 = -temp_v1;
            var_a3 = 0;
            if (var_v1 >= 0) {
                goto block_13;
            }
            var_v0_3 = arg0 << 0x18;
        } else {
            var_v1 = temp_v1 + 0xAA;
block_13:
            var_a3 = (s32) ((f32) (var_v1 * 0x64) * M2C_FIELD(&D_800BC208, f32 *, 4));
            var_v0_3 = arg0 << 0x18;
        }
        temp_a0 = var_v0_3 >> 0x18;
        if (temp_a0 >= 0x56) {
            var_v0_4 = (0xAA - temp_a0) * 0x19;
            goto block_19;
        }
        if (temp_a0 >= 0) {
            var_v0_4 = temp_a0 * 0x19;
block_19:
            var_a0_2 = (s32) ((f32) (var_v0_4 * 4) * M2C_FIELD(&D_800BC210, f32 *, 0));
            var_a2 = arg3 & 0xFF;
        } else {
            var_a0_2 = 0;
            var_a2 = arg3 & 0xFF;
        }
        temp_a1 = arg1 & 0xFF;
        temp_v1_2 = arg2 & 0xFF;
        temp_t3 = (var_a3 * var_a2) + (var_t5 * temp_a1) + (var_a0_2 * temp_v1_2);
        temp_t0 = (var_a3 * temp_a1) + (var_t5 * temp_v1_2) + (var_a0_2 * var_a2);
        temp_a3 = (var_a3 * temp_v1_2) + (var_t5 * var_a2) + (var_a0_2 * temp_a1);
        if (var_a2 < temp_v1_2) {
            var_v0_5 = arg1 & 0xFF;
            if ((s32) temp_v1_2 >= temp_a1) {
                var_a0_3 = arg2 & 0xFF;
                goto block_27;
            }
            goto block_25;
        }
        var_v0_5 = arg1 & 0xFF;
        if ((s32) var_a2 < temp_a1) {
block_25:
            var_fv1f = (f32) var_v0_5;
            var_v1_2 = temp_a3;
        } else {
            var_a0_3 = arg2 & 0xFF;
block_27:
            temp_v1_3 = arg3 & 0xFF;
            if (temp_v1_3 < var_a0_3) {
                var_fv1f = (f32) var_a0_3;
                var_v1_2 = temp_a3;
            } else {
                var_fv1f = (f32) temp_v1_3;
                var_v1_2 = temp_a3;
            }
        }
        if (temp_a3 < temp_t0) {
            var_v1_2 = temp_t0;
        }
        if (var_v1_2 < temp_t3) {
            var_v1_2 = temp_t3;
        }
        temp_fv1 = (f32) var_v1_2;
        if (temp_fv1 == 0.0f) {
            *arg4 = arg1;
            *arg5 = arg2;
            *arg6 = arg3;
            return;
        }
        temp_fv0 = ((f32) temp_t3 * var_fv1f) / temp_fv1;
        if (M2C_FIELD(&D_800BC210, f32 *, 4) <= temp_fv0) {
            var_v1_3 = (s32) (temp_fv0 - M2C_FIELD(&D_800BC210, f32 *, 4)) | 0x80000000;
        } else {
            var_v1_3 = (s32) temp_fv0;
        }
        temp_fv0_2 = ((f32) temp_t0 * var_fv1f) / temp_fv1;
        *arg4 = (s8) var_v1_3;
        if (!(M2C_FIELD(&D_800BC218, f32 *, 0) <= temp_fv0_2)) {
            var_v1_4 = (s32) temp_fv0_2;
        } else {
            var_v1_4 = (s32) (temp_fv0_2 - M2C_FIELD(&D_800BC218, f32 *, 0)) | 0x80000000;
        }
        temp_fv0_3 = ((f32) temp_a3 * var_fv1f) / temp_fv1;
        *arg5 = (s8) var_v1_4;
        if (!(M2C_FIELD(&D_800BC218, f32 *, 4) <= temp_fv0_3)) {
            *arg6 = (s8) (s32) temp_fv0_3;
            return;
        }
        *arg6 = (s32) (temp_fv0_3 - M2C_FIELD(&D_800BC218, f32 *, 4)) | 0x80000000;
        return;
    }
    *arg4 = arg1;
    *arg5 = arg2;
    *arg6 = arg3;
}
