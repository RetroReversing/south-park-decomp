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

M2C_UNK func_80412EB4(M2C_UNK *, s16);              /* extern */
s16 func_80414904(M2C_UNK *);                       /* extern */
extern s32 D_800BF128;
extern M2C_UNK D_800CCA80;

s32 func_804050A8(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(&D_800CCA80, s32 *, 0xC) + 1;
    M2C_FIELD(&D_800CCA80, s32 *, 0xC) = temp_v0;
    if (temp_v0 >= 0x11) {
        M2C_FIELD(&D_800CCA80, s32 *, 0xC) = 0;
    }
    D_800BF128 = 1;
    func_80412EB4(&D_800CCA80, func_80414904(&D_800CCA80));
    return 0;
}
