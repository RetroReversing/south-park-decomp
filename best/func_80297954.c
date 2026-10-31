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

s32 func_80293970(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80298980(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_2A1650;
extern M2C_UNK D_2A2024;

void func_80297954(void *arg0, s32 (*arg1)(void *), M2C_UNK arg2) {
    func_80298980(&D_2A1650, &D_2A2024, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = func_80293970(0, 0, arg2, 1, 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = func_80293970(0, 0, arg2, 1, 0x20);
    M2C_FIELD(arg0, s32 *, 0x30) = arg1(arg0 + 0x34);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}
