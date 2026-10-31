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

M2C_UNK D_80209B00(M2C_UNK *, M2C_UNK);             /* extern */
M2C_UNK D_80235DF0(void *, M2C_UNK);                /* extern */
extern M2C_UNK D_800CC760;
extern M2C_UNK D_800D6368;

s32 func_8040D5BC(void *arg1) {
    if (M2C_FIELD(&D_800D6368, s32 *, 0) == 1) {
        D_80209B00(&D_800CC760, 1);
    } else if ((M2C_FIELD(&D_800D6368, s32 *, 0) == 2) && (M2C_FIELD(&D_800D6368, s32 *, 0x15BC) == 0)) {
        M2C_FIELD(&D_800D6368, s32 *, 0x15C4) = 1;
        D_80235DF0(&D_800D6368 - 0x30, 1);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x20), s16 *, 0xA48) = 0;
    }
    return 1;
}
