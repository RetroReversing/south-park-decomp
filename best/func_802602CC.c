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

extern f32 D_800A9A5C;

void func_802602CC(void *arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) D_800A9A5C;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    temp_v0_2 = arg0 + 0x2C;
    temp_a0 = arg0 + 0x40;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
}
