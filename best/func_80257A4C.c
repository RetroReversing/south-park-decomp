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

s32 func_802569D0();
extern char D_800CE0FC[];

void func_80257A4C(s32 arg0) {
    s32 var_a3;
    s32 var_v1;
    void **temp_a2;
    void *var_a1;

    if (arg0 != 0) {
        var_a3 = 0;
        var_v1 = 0x30;
loop_2:
        temp_a2 = D_800CE0FC + var_v1;
        var_a1 = *temp_a2;
        if (var_a1 != NULL) {
loop_3:
            if (var_a1 == arg0) {
                func_802569D0(&D_800CE0FC, var_a1, temp_a2, var_a3);
                return;
            }
            var_a1 = M2C_FIELD(var_a1, void **, 0x1E4);
            if (var_a1 == NULL) {
                goto block_6;
            }
            goto loop_3;
        }
block_6:
        var_a3 += 1;
        var_v1 += 0x14;
        if (var_a3 >= 3) {

        } else {
            goto loop_2;
        }
    }
}
