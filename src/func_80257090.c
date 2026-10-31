/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_802168D8(M2C_UNK *, void *);              /* extern */
M2C_UNK func_80257824();                            /* extern */
M2C_UNK func_80261CC0(M2C_UNK *, void *);           /* extern */
extern M2C_UNK D_800CE20C;
extern M2C_UNK D_800CEE08;

void func_80257090(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x1B1) != 0) {
        func_80257824();
        func_80261CC0(&D_800CEE08, arg0);
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0x114);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s16 *, 0x16) = 0;
        D_802168D8(&D_800CE20C, M2C_FIELD(arg0, void **, 0x114));
        M2C_FIELD(arg0, void **, 0x114) = NULL;
    }
}
