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

M2C_UNK func_80403D34(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK D_415E38;
extern M2C_UNK D_800D77E8;

s32 func_80406A9C(M2C_UNK arg2) {
    M2C_FIELD(&D_800D77E8, s8 *, 0) = 0;
    M2C_FIELD(&D_800D77E8, s8 *, 1) = 1;
    func_80403D34(arg2, &D_415E38);
    return 1;
}
