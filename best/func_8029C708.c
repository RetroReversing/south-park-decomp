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

s32 func_8029E4E0(s32);                             /* extern */
M2C_UNK func_802A0938(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK D_800F62F8;

M2C_UNK *func_8029C708(s32 arg0) {
    func_802A0938(&D_800F62F8, arg0, 0x40);
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x10) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x10) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x10));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x18) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x18) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x18));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x20) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x20) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x20));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x28) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x28) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x28));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x2C) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x2C) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x2C));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x30) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x30) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x30));
    }
    if (M2C_FIELD(&D_800F62F8, s32 *, 0x38) != 0) {
        M2C_FIELD(&D_800F62F8, s32 *, 0x38) = func_8029E4E0(M2C_FIELD(&D_800F62F8, s32 *, 0x38));
    }
    return &D_800F62F8;
}
