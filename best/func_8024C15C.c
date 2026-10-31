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

M2C_UNK D_8023E95C(s32, void *, M2C_UNK);           /* extern */
M2C_UNK D_802417F0(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK D_8024220C(u8 *, u8 *, M2C_UNK *);          /* extern */
extern u8 *D_800F4AC8;

void func_8024C15C(s32 arg0, void *arg1) {
    M2C_UNK sp18;

    if ((M2C_FIELD(arg1, s8 *, 0x30) == 2) && (D_800F4AC8 != NULL) && (*D_800F4AC8 == 1)) {
        D_802417F0(&sp18, arg0, 5, 0x41CCCCCC, 0x80000, 0);
        D_8024220C(D_800F4AC8, D_800F4AC8 + 0x168, &sp18);
        D_8023E95C(arg0, arg1, 0);
    }
}
