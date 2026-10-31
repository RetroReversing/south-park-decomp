/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern f32 D_800BC630;
extern f32 D_800BC634;
extern M2C_UNK D_800D7918;

void func_80406E1C(f32 arg0, s32 arg1) {
    f32 temp_fa0;

    M2C_FIELD(&D_800D7918, f32 *, 4) = 0.0f;
    temp_fa0 = arg0 * D_800BC630;
    M2C_FIELD(&D_800D7918, s32 *, 8) = arg1;
    M2C_FIELD(&D_800D7918, s32 *, 0xC) = 0;
    M2C_FIELD(&D_800D7918, s32 *, 0x10) = 1;
    M2C_FIELD(&D_800D7918, f32 *, 0) = temp_fa0;
    if (temp_fa0 == M2C_FIELD(&D_800D7918, f32 *, 4)) {
        M2C_FIELD(&D_800D7918, s32 *, 0x10) = 0;
        M2C_FIELD(&D_800D7918, f32 *, 0) = (f32) D_800BC634;
    }
}
