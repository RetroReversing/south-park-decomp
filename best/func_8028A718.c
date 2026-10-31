/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_8023E95C(s32, void *, s32);               /* extern */
s32 D_802485E8(s32, void *);                        /* extern */

void func_8028A718(s32 arg0, void *arg1, void *arg2) {
    s32 var_a0;
    u16 temp_v1;
    u16 var_v0;

    temp_v1 = M2C_FIELD(arg1, u16 *, 4);
    if ((temp_v1 - M2C_FIELD(arg2, s32 *, 4)) >= 0) {
        var_v0 = temp_v1 - M2C_FIELD(arg2, u16 *, 6);
    } else {
        var_v0 = 0;
    }
    M2C_FIELD(arg1, u16 *, 4) = var_v0;
    var_a0 = 0;
    if (!(var_v0 & 0xFFFF)) {
        var_a0 = temp_v1 > 0U;
    }
    if (var_a0 != 0) {
        D_8023E95C(arg0, arg1, D_802485E8(arg0, arg1));
    }
}
