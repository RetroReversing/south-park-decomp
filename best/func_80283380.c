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

extern f32 D_800AA36C;
extern M2C_UNK D_800AA370;
extern f32 D_800ABA00;
extern f32 D_800ABA0C;

s32 func_80283380(void *arg0, s32 arg1, f32 arg2, s32 arg3, f32 arg4, void *arg5) {
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0f;
    f32 var_fv1;
    u8 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(arg0, u16 *, 0x10) & arg1) {
        var_fv0f = M2C_FIELD(arg0, f32 *, 0x208) + (M2C_FIELD(temp_a1, f32 *, 0x20) * D_800ABA00);
        if (D_800AA36C < var_fv0f) {
            var_fv0f = D_800AA36C;
        }
        M2C_FIELD(arg0, f32 *, 0x208) = var_fv0f;
        goto block_8;
    }
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x208);
    if (temp_fv1 != 0.0f) {
        var_fv0 = temp_fv1 - (M2C_FIELD(temp_a1, f32 *, 0x20) * D_800ABA00);
        if (var_fv0 < 0.0f) {
            var_fv0 = 0.0f;
        }
        M2C_FIELD(arg0, f32 *, 0x208) = var_fv0;
block_8:
        M2C_FIELD(arg0, f32 *, 0x20C) = (f32) (M2C_FIELD(arg0, f32 *, 0x20C) + M2C_FIELD(temp_a1, f32 *, 0x10));
        M2C_FIELD(arg0, f32 *, 0x1C) = M2C_BITWISE(f64, (M2C_FIELD(arg0, f32 *, 0x20) + (D_800ABA00 * D_800ABA0C * M2C_FIELD(temp_a1, f32 *, 8) * M2C_FIELD(&D_800AA370, f32 *, 4))));
        var_fv1 = M2C_FIELD(temp_a1, f32 *, 0x14);
        if ((arg3 != 0) && (M2C_FIELD(arg5, s32 *, 0x10) == 0)) {
            var_fv1 += arg4;
        } else {
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x29);
            if (temp_v1 & 1) {
                var_fv1 += M2C_FIELD(arg5, f32 *, 0x138) * M2C_FIELD(temp_a1, f32 *, 0x1C);
            } else if (temp_v1 & 2) {
                var_fv1 += arg2;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x210) = var_fv1;
        return 0;
    }
    return 1;
}
