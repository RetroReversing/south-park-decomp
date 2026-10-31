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

/* Warning: missing "jr $ra" in last block of func_8025A5C0 (initial). */

M2C_UNK D_8022154C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800A9728;

void func_8025A5C0(s32 arg0) {
    D_8022154C(0, 0x6F00, 3, &D_800A9728);
}
