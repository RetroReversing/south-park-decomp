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

extern void *D_800D7F68;

void func_8025F7B4(void *arg0) {
    void *temp_a2;
    void *temp_v1;

    temp_a2 = D_800D7F68;
    temp_v1 = D_800D7F68 + 8;
    D_800D7F68 = temp_v1;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xDA380007;
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) (arg0 + 0x420);
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xDB0E0000;
    D_800D7F68 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) M2C_FIELD(arg0, u16 *, 0x418);
}
