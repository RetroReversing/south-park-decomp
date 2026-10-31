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

s32 D_802A0520(s32);                            /* extern */
s32 func_8029DC78();
s32 func_8029DDA0();
s32 func_802A0500();

s32 func_8027076C(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;
    void *var_v1;

    temp_s0 = arg0 + 0x110;
    var_s1 = 0;
    temp_a0 = func_802A0500();
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) + 1;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
    if (temp_v1 != 1) {
        D_802A0520(temp_a0);
        func_8029DC78(temp_s0, 0, 1);
        var_a0 = 0;
    } else {
        D_802A0520(temp_a0);
        var_a0 = 0;
    }
    var_v1 = arg0;
    do {
        if (M2C_FIELD(var_v1, s32 *, 0x1B18) == arg1) {
            var_s1 += 1;
        }
        var_a0 += 1;
        var_v1 += 0xB8;
    } while (var_a0 < 0x11);
    temp_s0_2 = arg0 + 0x110;
    temp_v0 = func_802A0500(var_a0);
    temp_v1_2 = M2C_FIELD(temp_s0_2, s32 *, 0x1C) - 1;
    M2C_FIELD(temp_s0_2, s32 *, 0x1C) = temp_v1_2;
    if (temp_v1_2 != 0) {
        D_802A0520(temp_v0);
        func_8029DDA0(temp_s0_2, 0, 1);
        return var_s1;
    }
    D_802A0520(temp_v0);
    return var_s1;
}
