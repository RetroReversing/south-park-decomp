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

s32 D_80200528(M2C_UNK *, s32);                     /* extern */
M2C_UNK D_8023E95C(s32, void *, M2C_UNK);           /* extern */
M2C_UNK func_8024BC68(s32, void *, M2C_UNK);        /* extern */
extern M2C_UNK D_800CCA80;

void func_8024BCB0(s32 arg0, void *arg1, M2C_UNK arg2) {
    if ((D_80200528(&D_800CCA80, arg0) == 0) && (M2C_FIELD(arg1, s8 *, 0x30) == 0)) {
        func_8024BC68(arg0, arg1, arg2);
        D_8023E95C(arg0, arg1, 1);
    }
}
