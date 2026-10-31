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

M2C_UNK D_80221948(M2C_UNK, s32);                   /* extern */
extern s32 D_800F4EAC;
extern s32 D_800F4EB4;

void func_80284DB8(void) {
    if (D_800F4EAC != 0) {
        D_80221948(0, D_800F4EAC);
        D_800F4EAC = 0;
    }
    if (D_800F4EB4 != 0) {
        D_80221948(0, D_800F4EB4);
        D_800F4EB4 = 0;
    }
}
