/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

extern f32 D_800A9A20;

void func_8025F708(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;

    sp18 = arg6;
    sp1C = arg7;
    sp20 = arg8;
    M2C_FIELD(arg0, s32 *, 0xE0) = arg6;
    M2C_FIELD(arg0, s32 *, 0xE4) = arg7;
    M2C_FIELD(arg0, s32 *, 0xE8) = arg8;
    M2C_FIELD(arg0, f32 *, 0xEC) = arg4;
    M2C_FIELD(arg0, s32 *, 0xF0) = arg5;
    M2C_FIELD(arg0, s32 *, 0x104) = arg5;
    M2C_FIELD(arg0, s32 *, 0x118) = arg5;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) (arg1 * D_800A9A20);
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) (arg2 * D_800A9A20);
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) (arg3 * D_800A9A20);
}
