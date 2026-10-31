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

M2C_UNK D_802A0520(s32);                            /* extern */
M2C_UNK func_8029DDA0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_802A0500();                                /* extern */

void func_802703E8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = arg0 + 0x110;
    temp_v0 = func_802A0500();
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) - 1;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
    if (temp_v1 != 0) {
        D_802A0520(temp_v0);
        func_8029DDA0(temp_s0, 0, 1);
        return;
    }
    D_802A0520(temp_v0);
}
