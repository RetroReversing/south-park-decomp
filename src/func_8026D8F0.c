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

void *D_80203B70(M2C_UNK *, s32);                   /* extern */
extern M2C_UNK D_800CCA80;

u8 func_8026D8F0(s32 arg0) {
    void *temp_v0;

    temp_v0 = D_80203B70(&D_800CCA80, arg0);
    if (temp_v0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_v0, u8 *, 0x59);
}
