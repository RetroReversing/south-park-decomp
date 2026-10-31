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

M2C_UNK D_8020B858(M2C_UNK, void *, M2C_UNK);       /* extern */
M2C_UNK D_8020BDE4(M2C_UNK);                        /* extern */
M2C_UNK func_80268FF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
extern f32 D_800A9BB8;
extern M2C_UNK D_800CE37C;
extern void *D_800D7F68;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800F150C;

void func_8026624C(void) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_a1 = D_800D7F68;
    temp_v0 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    D_800D7F68 = temp_v0 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    D_8020B858(0x1D, temp_a1, 0xE3000A01);
    D_8020BDE4(0x15);
    D_800F150C = 1;
    temp_v1 = D_800D7F68;
    temp_v0_2 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0_2;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xD7000002;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x80008000;
    temp_v1_2 = temp_v0_2 + 8;
    temp_a1_2 = temp_v0_2 + 0x10;
    D_800D7F68 = temp_v1_2;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3001001;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    D_800D7F68 = temp_a1_2;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0xE3000C00;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    D_800D7F68 = temp_v0_2 + 0x18;
    M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0xE3001201;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0x2000;
    func_80268FF8(0xC8, 0xC8, 0x32, 0xE3001001);
    func_80269010(D_800A9BB8, D_800A9BB8);
    M2C_FIELD(&D_800CE37C, s32 *, 0) = 2;
    M2C_FIELD(&D_800CE37C, s32 *, 4) = 2;
    D_800F14F0 = 1;
    D_800F1508 = 1;
}
