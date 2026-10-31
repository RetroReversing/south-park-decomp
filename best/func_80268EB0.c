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

M2C_UNK D_8020B858(M2C_UNK);                        /* extern */
M2C_UNK D_8020BDE4(M2C_UNK, void **, void *, M2C_UNK); /* extern */
extern void *D_800D7F68;

void func_80268EB0(void) {
    void *temp_a2;
    void *temp_v0;

    temp_a2 = D_800D7F68;
    temp_v0 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
    D_800D7F68 = temp_v0 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    D_8020BDE4(0x15, &D_800D7F68, temp_a2, 0xE3000A01);
    D_8020B858(0x19);
}
