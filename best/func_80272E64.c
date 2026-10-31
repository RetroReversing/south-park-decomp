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

f32 D_802156CC(f32, s32, s32);                      /* extern */
extern M2C_UNK D_800A9F78;

f32 func_80272E64(s32 arg0, s32 arg1) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_a0;
    s32 temp_a1;

    temp_a0 = arg0 & 0xFF;
    temp_fs0 = (f32) temp_a0 * M2C_FIELD(&D_800A9F78, f32 *, 4);
    temp_a1 = arg1 & 0xFF;
    temp_fv0 = (f32) temp_a1 * M2C_FIELD(&D_800A9F78, f32 *, 4);
    if (temp_fs0 == D_800A9F80) {
        return D_800A9F80;
    }
    if (temp_fv0 == temp_fs0) {
        return temp_fs0;
    }
    return temp_fs0 + D_802156CC(temp_fv0 - temp_fs0, temp_a0, temp_a1);
}
