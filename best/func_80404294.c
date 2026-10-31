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

extern M2C_UNK D_800BF018;

void *func_80404294(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8) & 0x1E0;
    var_v1_2 = 0;
    if (temp_a0 != 0x40) {
        if (temp_a0 >= 0x41U) {
            if (temp_a0 == 0x80) {
                var_v1_2 = 2;
                goto block_9;
            }
            var_v1 = 4;
            if (temp_a0 != 0x100) {
                var_v0 = 4 * 2;
            } else {
                var_v1_2 = 3;
                goto block_9;
            }
        } else {
            goto block_9;
        }
    } else {
        var_v1_2 = 1;
block_9:
        var_v1 = var_v1_2 + 4;
        var_v0 = var_v1 * 2;
    }
    return ((var_v0 + var_v1) * 8) + &D_800BF018;
}
