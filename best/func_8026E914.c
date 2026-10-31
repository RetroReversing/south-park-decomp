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

s32 func_80258FE4();
s32 func_8026EA2C();
s32 func_80274234();
s32 func_80274428();
s32 func_8027444C();
s32 func_80296FFC();
s32 func_8029ABC0();
s32 func_8029DC78();
s32 func_8029E4E0();
s32 osWritebackDCacheAll();
extern s32 D_800B1E70;
extern char D_800D79A8[];
extern char D_800F1CE8[];
extern char D_800F1D48[];
extern u16 D_800F1D62;

s32 func_8026E914(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    func_8026EA2C();
    temp_s0 = func_8029E4E0(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, u16 *, 4) = (u16) D_800F1D62;
    func_80274428();
    temp_s0_2 = func_80296FFC(*(D_800F1CE8 + (D_800B1E70 * 4)), &sp10, temp_s0, (s16) M2C_FIELD(arg0, u16 *, 4));
    func_8027444C();
    if (sp10 == 0) {
        return 0;
    }
    temp_v0 = D_800B1E70 * 4;
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) *(D_800F1CE8 + temp_v0);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (((s32) (temp_s0_2 - *(D_800F1CE8 + temp_v0)) >> 3) * 8);
    osWritebackDCacheAll();
    func_80258FE4(&D_800D79A8, arg0 + 8);
    D_800B1E70 ^= 1;
    func_80274234();
    func_8029DC78(&D_800F1D48, &sp14, 1);
    func_8029ABC0(M2C_FIELD(arg0, s32 *, 0), (s16) M2C_FIELD(arg0, u16 *, 4) * 4);
    return 1;
}
