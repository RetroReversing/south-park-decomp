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

extern char D_800ADDCC[];

s32 func_8028C544(s32 arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0;
    var_a1 = 0;
loop_1:
    if (*(D_800ADDCC + var_a1) != arg0) {
        var_v1 += 1;
        var_a1 += 0xC;
        if (var_v1 >= 4) {
            return -1;
        }
        goto loop_1;
    }
    return var_v1;
}
