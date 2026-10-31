/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

M2C_UNK D_80209C78(M2C_UNK *, s32);                 /* extern */
extern M2C_UNK D_800CC760;
extern s32 D_800D78F0;
extern s32 D_8010E4F8;

s32 func_8040C3CC(void) {
    if (D_800D78F0 != D_8010E4F8) {
        D_80209C78(&D_800CC760, D_8010E4F8);
    }
    return 0;
}
