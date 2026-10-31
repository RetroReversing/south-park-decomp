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

M2C_UNK D_8021E6F8(s32, M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK D_8021E76C(s32, void *);                    /* extern */

void func_802832C8(void *arg0) {
    s32 var_s1;
    void *var_s0;

    D_8021E6F8(arg0 + 0x874, 0, 4);
    D_8021E6F8(arg0 + 0x860, 0, 4);
    var_s1 = 0;
    var_s0 = arg0;
    do {
        D_8021E76C(arg0 + 0x860, var_s0);
        var_s1 += 1;
        var_s0 += 0x218;
    } while (var_s1 < 4);
    M2C_FIELD(arg0, s16 *, 0x888) = 0;
}
