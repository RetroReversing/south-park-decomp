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

s32 D_80210ADC(s32, s16);                           /* extern */
M2C_UNK D_80211D5C(void *, s32, s32, s32);          /* extern */
extern M2C_UNK D_800AA2C0;

void func_80280930(void *arg0, s32 arg1, void *arg2) {
    s16 temp_a1;
    s32 temp_v0;
    void *temp_v1;

    temp_a1 = M2C_FIELD(((arg1 * 4) + M2C_FIELD(arg0, s32 *, 0)), s16 *, 2);
    if (temp_a1 == -1) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0x14);
        M2C_FIELD(arg2, f32 *, 0) = (f32) ((f32) M2C_FIELD(temp_v1, s16 *, 0xC) * M2C_FIELD(&D_800AA2C0, f32 *, 4));
        M2C_FIELD(arg2, f32 *, 4) = (f32) ((f32) M2C_FIELD(temp_v1, s16 *, 0xE) * M2C_FIELD(&D_800AA2C0, f32 *, 4));
        M2C_FIELD(arg2, f32 *, 8) = (f32) ((f32) M2C_FIELD(temp_v1, s16 *, 0x10) * M2C_FIELD(&D_800AA2C0, f32 *, 4));
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_v1, s16 *, 0x12) * M2C_FIELD(&D_800AA2C0, f32 *, 4));
        return;
    }
    temp_v0 = D_80210ADC(M2C_FIELD(arg0, s32 *, 0xC), temp_a1);
    D_80211D5C(arg2, M2C_FIELD(arg0, s32 *, 0x20), temp_v0 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10), temp_v0 + (M2C_FIELD(arg0, s32 *, 0x14) * 0x10));
}
