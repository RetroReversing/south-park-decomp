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

M2C_UNK D_80203F74(M2C_UNK *, void *, M2C_UNK);     /* extern */
s32 func_8028E724();                                /* extern */
extern M2C_UNK D_800CCA80;

void func_8024D8A0(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) | 0x108000);
    if (func_8028E724() != 0) {
        *arg1 |= 0x1000;
    }
    D_80203F74(&D_800CCA80, arg0, 0);
}
