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

s32 D_8021E710(void *, s32);                    /* extern */
s32 *D_8022154C(s32, s32, s32, void *);         /* extern */
s32 func_80402148();
extern char D_800BC3C0[];

s32 func_8040458C(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
int __repair_literal;

    char *var_v1;
    s16 temp_v0;
    s16 temp_v1;
    s32 *temp_v0_2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    u16 temp_v0_3;

    temp_v1 = M2C_FIELD(arg1, s16 *, 4);
    var_a0 = 0;
    var_a1 = (temp_v1 * 0x28) + 0x1D8;
__repair_literal = 0;

    if (temp_v1 > __repair_literal) {
        var_v1 = M2C_FIELD(arg1, s16 **, 0);
        do {
            temp_v0 = *(s16 *)var_v1;
            if (temp_v0 == 4) {
                var_v0 = 0x430;
            } else {
                var_v0 = 0;
                if (temp_v0 == 5) {
                    var_v0 = 0x1B8;
                }
            }
            var_a1 += var_v0;
            var_a0 += 1;
            var_v1 += 0x20;
        } while (var_a0 < temp_v1);
    }
    temp_v0_2 = D_8022154C(0, var_a1, 0x3B, D_800BC3C0 + 4);
    if (temp_v0_2 == NULL) {
        return 0;
    }
    temp_s0 = *temp_v0_2;
    if (temp_s0 == 0) {
        return 0;
    }
    func_80402148(temp_s0, temp_v0_2, arg1, arg2, arg3, arg4, arg5, arg0);
    D_8021E710(arg0, temp_s0);
    temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x14) + 1;
    M2C_FIELD(arg0, u16 *, 0x14) = temp_v0_3;
    if ((s16) temp_v0_3 >= 4) {
        M2C_FIELD(arg0, u16 *, 0x14) = 0U;
    }
    return temp_s0;
}
