/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern f32 D_800AACB8;

void func_80295060(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 * 0x10;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 6) = 0;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 0xA) = 0;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 7) = 0x40;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 9) = 0x7F;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 8) = 5;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s8 *, 0xB) = 0;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), s16 *, 4) = 0xC8;
    M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC) = (f32) D_800AACB8;
}
