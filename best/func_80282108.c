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

f32 D_80215BE0(f32, f32, void *);                   /* extern */
extern f32 D_800AA320;
extern f32 D_800AA324;
extern f32 D_800AA328;
extern M2C_UNK D_800D7CB8;

s32 func_80282108(void *arg0) {
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v1 = M2C_FIELD(temp_a0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_fv0f = M2C_FIELD(arg0, f32 *, 4) + (D_800AA320 / M2C_FIELD(&D_800D7CB8, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 4) = temp_fv0f;
        if (M2C_FIELD(temp_a0, f32 *, 0x14) <= temp_fv0f) {
            return 1;
        }
block_7:
        return 0;
    case 1:
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 4) - (D_800AA324 / M2C_FIELD(&D_800D7CB8, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 4) = temp_fv0f_2;
        if (temp_fv0f_2 <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_fv0f_2 + M2C_FIELD(temp_a0, f32 *, 4));
            M2C_FIELD(arg0, f32 *, 8) = D_80215BE0((f32) M2C_FIELD(temp_a0, u8 *, 8) * D_800AA328, (f32) M2C_FIELD(temp_a0, u8 *, 9) * D_800AA328, temp_a0);
        }
        goto block_7;
    default:
        return 0;
    }
}
