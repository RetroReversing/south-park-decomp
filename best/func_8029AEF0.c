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

M2C_UNK func_8029AFFC();                            /* extern */
M2C_UNK func_8029B1D0(M2C_UNK);                     /* extern */
M2C_UNK func_8029B288(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8029C5A4();                            /* extern */
M2C_UNK func_8029C610();                            /* extern */
s32 func_8029C638(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_8029DC78(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_800F6050;
extern u8 D_800F6090;

s32 func_8029AEF0(s32 arg0, M2C_UNK arg1) {
    M2C_UNK sp10;
    s32 temp_s0;

    func_8029C5A4();
    if (D_800F6090 != 0xFF) {
        func_8029AFFC();
        func_8029C638(1, &D_800F6050);
        func_8029DC78(arg0, 0, 1);
        func_8029C638(0, &D_800F6050);
        func_8029DC78(arg0, 0, 1);
        func_8029B1D0(0xFF);
        func_8029C638(1, &D_800F6050);
        func_8029DC78(arg0, 0, 1);
        D_800F6090 = 0xFF;
    }
    temp_s0 = func_8029C638(0, &D_800F6050);
    func_8029DC78(arg0, 0, 1);
    func_8029B288(&sp10, arg1);
    func_8029C610();
    return temp_s0;
}
