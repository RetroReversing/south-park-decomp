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

u64 D_8029D708();                                   /* extern */
M2C_UNK func_8029B1D0(M2C_UNK);                     /* extern */
M2C_UNK func_8029B288(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8029C550();                            /* extern */
s32 func_8029C638(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_8029D588(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8029DC78(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8029DFF8(M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_800B3A68;
extern M2C_UNK D_800F6030;
extern M2C_UNK D_800F6048;
extern s8 D_800F604C;
extern M2C_UNK D_800F6050;
extern s8 D_800F6090;

s32 func_8029B030(M2C_UNK *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp58;
    s32 temp_s0;
    u64 temp_ret;
    u64 temp_v0;

    if (D_800B3A68 != 0) {
        return 0;
    }
    D_800B3A68 = 1;
    temp_ret = D_8029D708();
    temp_v0 = temp_ret;
    if (temp_v0 == 0) {
        if (temp_v0 == 0) {
            if ((u32) temp_ret <= 0x0165A0BBU) {
                goto block_6;
            }
        } else {
block_6:
            func_8029D588(&sp40, &sp58, 1);
            func_8029DFF8(&sp20, 0, 0, &sp40, &sp58);
            func_8029DC78(&sp40, &sp58, 1);
        }
    }
    D_800F604C = 4;
    func_8029B1D0(0);
    func_8029C638(1, &D_800F6050);
    func_8029DC78(arg0, &sp58, 1);
    temp_s0 = func_8029C638(0, &D_800F6050);
    func_8029DC78(arg0, &sp58, 1);
    func_8029B288(arg1, arg2);
    D_800F6090 = 0;
    func_8029C550();
    func_8029D588(&D_800F6030, &D_800F6048, 1);
    return temp_s0;
}
