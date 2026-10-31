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

s32 func_80267570();
extern f32 D_800A9C48;
extern void *D_800D7F68;

void func_802676F8(s32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6) {
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    var_s4 = 0x400;
    if (arg5 != 0.0f) {
        var_s4 = (s32) ((f32) 0x400 / arg5);
    }
    var_s3 = 0x400;
    if (arg6 != 0.0f) {
        var_s3 = (s32) ((f32) 0x400 / arg6);
    }
    temp_s5 = (s32) (arg1 * D_800A9C48);
    temp_s1 = (s32) (arg2 * D_800A9C48);
    temp_s2 = (s32) ((arg2 + ((f32) arg4 * arg6)) * D_800A9C48);
    temp_s0 = (s32) ((arg1 + ((f32) arg3 * arg5)) * D_800A9C48) << 0x10;
    func_80267570(arg0, arg3, arg4);
    temp_a0 = D_800D7F68;
    D_800D7F68 = temp_a0 + 8;
    temp_v0 = temp_s0 >> 0x10;
    if (temp_v0 > 0) {
        var_v1 = ((temp_v0 & 0xFFF) << 0xC) | 0xE4000000;
    } else {
        var_v1 = 0xE4000000;
    }
    M2C_FIELD(temp_a0, s32 *, 0) = var_v1;
    if ((s16) temp_s2 > 0) {
        M2C_FIELD(temp_a0, s32 *, 0) = (s32) (var_v1 | ((s16) temp_s2 & 0xFFF));
    }
    if ((s16) temp_s5 > 0) {
        var_v1_2 = ((s16) temp_s5 & 0xFFF) << 0xC;
    } else {
        var_v1_2 = 0;
    }
    M2C_FIELD(temp_a0, s32 *, 4) = var_v1_2;
    if ((s16) temp_s1 > 0) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (var_v1_2 | ((s16) temp_s1 & 0xFFF));
    }
    temp_a1 = D_800D7F68;
    D_800D7F68 = temp_a1 + 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xE1000000;
    var_a0 = 0;
    if ((s16) temp_s5 < 0) {
        temp_lo = (s16) temp_s5 * (s16) var_s4;
        if ((s16) var_s4 < 0) {
            temp_v0_2 = temp_lo >> 7;
            var_v0 = -temp_v0_2;
            if (temp_v0_2 < 0) {
                var_v0_2 = 0;
                goto block_20;
            }
        } else {
            var_v0_2 = temp_lo >> 7;
            if (var_v0_2 > 0) {
                var_v0_2 = 0;
            }
block_20:
            var_v0 = -var_v0_2;
        }
        var_a0 = var_v0 << 0x10;
    }
    if (temp_s1 >= 0) {
        M2C_FIELD(temp_a1, s32 *, 4) = var_a0;
    } else {
        if ((s16) var_s3 < 0) {
            temp_v0_3 = (s32) ((s16) temp_s1 * (s16) var_s3) >> 7;
            var_v0_3 = -temp_v0_3;
            if (temp_v0_3 < 0) {
                var_v0_4 = 0;
                goto block_30;
            }
        } else {
            var_v0_4 = (s32) ((s16) temp_s1 * (s16) var_s3) >> 7;
            if (var_v0_4 > 0) {
                var_v0_4 = 0;
            }
block_30:
            var_v0_3 = -var_v0_4;
        }
        M2C_FIELD(temp_a1, s32 *, 4) = (s32) (var_a0 | (var_v0_3 & 0xFFFF));
    }
    temp_a0_2 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_a0_2, s32 *, 0) = 0xF1000000;
    M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) ((var_s4 << 0x10) | (var_s3 & 0xFFFF));
}
