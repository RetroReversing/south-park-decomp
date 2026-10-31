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

extern M2C_UNK D_800AA328;
extern f32 D_800AA330;

f32 func_802821F8(void *arg0) {
    s32 temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(temp_v1, s32 *, 0);
    switch (temp_a1) {                              /* irregular */
    case 0:
        return (f32) M2C_FIELD((temp_v1 + (s32) ((M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(&D_800AA328, f32 *, 4)) / M2C_FIELD(temp_v1, f32 *, 0x14))), u8 *, 4) * D_800AA330;
    case 1:
        return M2C_FIELD(arg0, f32 *, 8);
    default:
        return 0.0f;
    }
}
