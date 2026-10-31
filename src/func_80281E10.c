/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_8021E6F8(void *, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK D_8021E76C(void *, s32);                    /* extern */
M2C_UNK D_802A0520(s32);                            /* extern */
s32 func_802A0500();                                /* extern */

void func_80281E10(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 var_s0;
    s32 var_s1;

    var_s1 = arg1;
    temp_s4 = func_802A0500();
    D_8021E6F8(arg0, 0, 4);
    D_8021E6F8(arg0 + 0x14, 0, 4);
    var_s0 = 0;
    if (arg2 > 0) {
        do {
            D_8021E76C(arg0, var_s1);
            var_s0 += 1;
            var_s1 += 0x3C;
        } while (var_s0 < arg2);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    D_802A0520(temp_s4);
}
