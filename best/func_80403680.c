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

M2C_UNK func_8026798C(s32, M2C_UNK, s16, s16, f32, f32, s32); /* extern */
M2C_UNK func_80269028(s32);                         /* extern */
extern f32 D_800BC3D0;
extern f32 D_800BC3D4;
extern s32 D_800BF014;
extern void *D_800D7F68;

void func_80403680(void *arg0, void *arg1, void *arg3) {
    void *temp_a1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    if (D_800BF014 != 4) {
        D_800BF014 = 4;
        func_80269028((s32) (M2C_FIELD(arg3, f32 *, 0x34) * (M2C_FIELD(arg3, f32 *, 0x38) * D_800BC3D0)));
    }
    temp_a1 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xFB000000;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) ((M2C_FIELD(temp_s0, u8 *, 4) << 0x18) | (M2C_FIELD(temp_s0, u8 *, 5) << 0x10) | (M2C_FIELD(temp_s0, u8 *, 6) << 8) | ((s32) (M2C_FIELD(arg3, f32 *, 0x34) * (M2C_FIELD(arg3, f32 *, 0x38) * D_800BC3D4)) & 0xFF));
    func_8026798C(M2C_FIELD(temp_s0, s32 *, 0), 0, M2C_FIELD(arg1, s16 *, 0xE), M2C_FIELD(arg1, s16 *, 0x16), M2C_FIELD(M2C_FIELD(arg3, void **, 0x3C), f32 *, 0xB0), M2C_FIELD(M2C_FIELD(arg3, void **, 0x3C), f32 *, 0xB4), 0);
}
