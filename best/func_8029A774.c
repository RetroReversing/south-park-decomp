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

f32 D_80299AE8(f32);                                /* extern */
M2C_UNK func_8029A1E4();                            /* extern */
f32 func_8029A900(f32);                             /* extern */
extern f32 D_800AB060;
extern f32 D_800AB064;
extern M2C_UNK D_800AB068;
extern M2C_UNK D_800AB070;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x20, 0x24, 0x30, 0x34, 0x40, 0x44], gap at: 0x28. */
void func_8029A774(f32 *arg0, s16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 *var_s0;
    f32 *var_v1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1f;
    s16 var_v0;
    s16 var_v1_2;
    s32 var_a0;
    s32 var_a1;

    var_s0 = arg0;
    func_8029A1E4();
    temp_fs0 = arg2 * D_800AB060 * D_800AB064;
    temp_fs0_2 = D_80299AE8(temp_fs0);
    var_a1 = 0;
    temp_fs0_3 = temp_fs0_2 / func_8029A900(temp_fs0);
    temp_fv1f = arg4 - arg5;
    M2C_FIELD(var_s0, f32 *, 0) = temp_fs0_3 / arg3;
    M2C_FIELD(var_s0, f32 *, 0x14) = temp_fs0_3;
    M2C_FIELD(var_s0, s32 *, 0x3C) = 0;
    M2C_FIELD(var_s0, f32 *, 0x2C) = (f32) M2C_FIELD(&D_800AB068, f32 *, 0);
    M2C_FIELD(var_s0, f32 *, 0x28) = (f32) ((arg4 + arg5) / temp_fv1f);
    M2C_FIELD(var_s0, f32 *, 0x38) = (f32) ((2.0f * arg4 * arg5) / temp_fv1f);
    do {
        var_a0 = 0;
        var_v1 = var_s0;
loop_2:
        var_a0 += 1;
        *var_v1 *= arg6;
        var_v1 += 4;
        if (var_a0 < 4) {
            goto loop_2;
        }
        var_a1 += 1;
        var_s0 += 0x10;
    } while (var_a1 < 4);
    if (arg1 != NULL) {
        temp_fv1 = arg4 + arg5;
        var_v0 = 0xFFFF;
        if (!(temp_fv1 <= M2C_FIELD(&D_800AB068, f32 *, 4))) {
            temp_fv0 = M2C_FIELD(&D_800AB070, f32 *, 0) / temp_fv1;
            if (M2C_FIELD(&D_800AB070, f32 *, 4) <= temp_fv0) {
                var_v1_2 = (s32) (temp_fv0 - M2C_FIELD(&D_800AB070, f32 *, 4)) | 0x80000000;
                *arg1 = var_v1_2;
            } else {
                var_v1_2 = (s16) (s32) temp_fv0;
                *arg1 = var_v1_2;
            }
            var_v0 = 1;
            if (!(var_v1_2 & 0xFFFF)) {
                goto block_12;
            }
        } else {
block_12:
            *arg1 = var_v0;
        }
    }
}
