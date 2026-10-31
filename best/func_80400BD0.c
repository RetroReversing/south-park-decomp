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

void func_80400BD0(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 *arg4, s8 *arg5, s8 *arg6) {
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t0_2;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 var_a1;
    u32 var_v0;

    temp_t0 = arg0 & 0xFF;
    if (temp_t0 != 0) {
        temp_t0_2 = 0x64 - temp_t0;
        temp_a2 = arg2 & 0xFF;
        temp_a1 = arg3 & 0xFF;
        temp_a3 = arg1 & 0xFF;
        if (temp_a1 < temp_a2) {
            var_a1 = arg1 & 0xFF;
            if ((s32) temp_a2 >= temp_a3) {
                var_v0 = arg3 & 0xFF;
                goto block_6;
            }
        } else {
            var_a1 = arg1 & 0xFF;
            if ((s32) temp_a1 >= temp_a3) {
                var_v0 = arg3 & 0xFF;
block_6:
                var_a1 = var_v0;
                temp_a2_2 = arg2 & 0xFF;
                if (var_a1 < temp_a2_2) {
                    var_a1 = temp_a2_2;
                }
            }
        }
        temp_lo = var_a1 * (arg0 & 0xFF);
        *arg4 = (((arg1 & 0xFF) * temp_t0_2) + temp_lo) / 100;
        *arg5 = (((arg2 & 0xFF) * temp_t0_2) + temp_lo) / 100;
        *arg6 = (((arg3 & 0xFF) * temp_t0_2) + temp_lo) / 100;
        return;
    }
    *arg4 = arg1;
    *arg5 = arg2;
    *arg6 = arg3;
}
