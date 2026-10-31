/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK D_8021E710(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
M2C_UNK func_802569D0(void *, s32, void *, s32);    /* extern */

void *func_80257BF8(void *arg0, s32 arg1) {
int __repair_literal;

    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    void *temp_s0;
    void *var_v1;

    if (M2C_FIELD(arg0, void **, 8) == NULL) {
        var_a0 = 0;
        temp_v1 = arg1 & 0xFF;
__repair_literal = 0;

        if (temp_v1 >= __repair_literal) {
            var_v1 = arg0;
            var_a2 = 0;
loop_3:
            temp_a1 = M2C_FIELD(var_v1, s32 *, 0x34);
            if (temp_a1 == 0) {
                var_a2 += 0x14;
                var_a0 += 1;
                var_v1 += 0x14;
                if (temp_v1 >= var_a0) {
                    goto loop_3;
                }
            } else {
                func_802569D0(arg0, temp_a1, arg0 + (var_a2 + 0x30), temp_v1);
            }
        }
    }
    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if (temp_s0 != NULL) {
        D_8021E930(arg0 + 8, temp_s0);
        D_8021E710(arg0 + (((arg1 & 0xFF) * 0x14) + 0x30), temp_s0);
        M2C_FIELD(temp_s0, s32 *, 0x1EC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x1E8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0x100;
        return temp_s0;
    }
    return NULL;
}
