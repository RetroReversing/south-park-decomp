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

M2C_UNK D_80214A28(s32, s32);                       /* extern */
M2C_UNK D_80214DD0(s32, f32);                       /* extern */

void func_8024BD28(s32 arg0, void *arg1) {
    void *temp_a0;
    void *temp_s1;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg1, void **, 0);
    temp_s1 = M2C_FIELD(temp_a0, s32 *, 0x14) + 0x14;
    if (M2C_FIELD(arg1, s32 *, 0x7C) == M2C_FIELD(temp_s1, s32 *, 0x2C)) {
        D_80214A28(arg0, M2C_FIELD(temp_a0, s32 *, 0x2BC));
    }
    if (M2C_FIELD(arg1, s32 *, 0x7C) == M2C_FIELD(temp_s1, s32 *, 0x30)) {
        temp_v0 = M2C_FIELD(arg1, void **, 0);
        D_80214DD0(arg0, M2C_FIELD(temp_v0, f32 *, 0x1EC) - M2C_FIELD(temp_v0, f32 *, 0x70));
    }
}
