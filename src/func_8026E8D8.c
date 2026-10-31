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

extern M2C_UNK D_26EC5C;
extern M2C_UNK D_800F17F0;
extern M2C_UNK D_800F1CB8;

M2C_UNK *func_8026E8D8(M2C_UNK **arg0) {
    if (M2C_FIELD(&D_800F1CB8, u8 *, 0) == 0) {
        M2C_FIELD(&D_800F1CB8, M2C_UNK **, 8) = &D_800F17F0;
        M2C_FIELD(&D_800F1CB8, s32 *, 4) = 0;
        M2C_FIELD(&D_800F1CB8, u8 *, 0) = 1U;
    }
    *arg0 = &D_800F1CB8;
    return &D_26EC5C;
}
