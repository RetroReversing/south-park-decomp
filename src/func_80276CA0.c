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

M2C_UNK func_8027434C();                            /* extern */
M2C_UNK func_80274370();                            /* extern */
extern s32 D_800D78F0;

s32 func_80276CA0(s16 *arg0) {
    if (D_800D78F0 == 0xD) {
        if (*arg0 == 3) {
            func_80274370();
        } else {
            func_8027434C();
        }
    }
    return 0;
}
