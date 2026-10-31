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

M2C_UNK D_8021E710(s32, M2C_UNK);                   /* extern */
M2C_UNK D_8021E930(s32, M2C_UNK);                   /* extern */

void func_802601D8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    D_8021E930(arg1 + 0xDD0, arg2);
    D_8021E710(arg0 + 0xFFC, arg2);
}
