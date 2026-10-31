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

M2C_UNK alSeqpSetVol(s32, s16);                     /* extern */
M2C_UNK alSeqpStop(s32);                            /* extern */
extern M2C_UNK D_800A9FB8;
extern f32 D_800A9FC0;

void func_802738BC(void *arg0) {
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 var_fv0;
    s32 temp_fv1f;
    s32 var_condition_bit;

    if (M2C_FIELD(arg0, s32 *, 0x1C) & 2) {
        alSeqpSetVol(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s16 *, 0x22));
        temp_fv1f = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x34));
        M2C_FIELD(arg0, s32 *, 0x20) = temp_fv1f;
        if (temp_fv1f <= 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            alSeqpStop(M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 4);
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        temp_fv0f = M2C_FIELD(arg0, f32 *, 0x3C);
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_fv1 < temp_fv0f) {
            var_fv0 = temp_fv0f - M2C_FIELD(&D_800A9FB8, f32 *, 4);
            var_condition_bit = temp_fv1 <= var_fv0;
            goto block_8;
        }
        if (temp_fv0f < temp_fv1) {
            var_fv0 = temp_fv0f + D_800A9FC0;
            var_condition_bit = var_fv0 <= temp_fv1;
block_8:
            if (!var_condition_bit) {
                var_fv0 = temp_fv1;
            }
            M2C_FIELD(arg0, f32 *, 0x3C) = var_fv0;
        }
    }
}
