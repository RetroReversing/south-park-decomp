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
extern void *D_800D7F68;

void func_80269028(s32 arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_a1 = D_800D7F68;
    temp_v0 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    D_800D7F68 = temp_v0 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x100000;
    D_8020B858(0x1B, temp_a1, 0xE3000A01);
    D_8020BDE4(0x19);
    temp_a0 = D_800D7F68;
    temp_v1 = D_800D7F68 + 8;
    D_800D7F68 = temp_v1;
    M2C_FIELD(temp_a0, s32 *, 0) = 0xFB000000;
    temp_v0_2 = temp_v1 + 8;
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) (arg0 | ~0xFF);
    temp_a0_2 = temp_v1 + 0x10;
    D_800D7F68 = temp_v0_2;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x80008000;
    temp_a1_2 = temp_v1 + 0x18;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xD7000002;
    D_800D7F68 = temp_a0_2;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xE3001001;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    D_800D7F68 = temp_a1_2;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0xE3000C00;
    M2C_FIELD(temp_a0_2, s32 *, 4) = 0;
    D_800D7F68 = temp_v1 + 0x20;
    M2C_FIELD(temp_v1, s32 *, 0x18) = 0xE3001201;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0x2000;
}
