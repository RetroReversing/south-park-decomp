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

s16 D_8020577C(M2C_UNK *);                          /* extern */
extern M2C_UNK D_800CCA80;

void func_802836FC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = 2;
    M2C_FIELD(arg0, s8 *, 1) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = D_8020577C(&D_800CCA80);
}
