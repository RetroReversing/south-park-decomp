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

void func_802A0540(u32 arg0, s32 arg1) {
    s32 temp_t2;
    s32 temp_t2_2;
    u32 temp_t1;
    u32 temp_t1_2;
    u32 temp_t1_3;
    u32 var_t0;
    u32 var_t0_2;

    if (arg1 > 0) {
        if ((u32) arg1 < 0x2000U) {
            temp_t1 = arg0 + arg1;
            temp_t1_2 = temp_t1 - 0x10;
            if ((arg0 < temp_t1) && ((temp_t2 = arg0 & 0xF, var_t0 = arg0 - temp_t2, (temp_t2 == 0)) || (M2C_ERROR(/* unknown instruction: cache 0x15, ($t0) */), var_t0 += 0x10, ((var_t0 < temp_t1_2) != 0))) && ((temp_t2_2 = temp_t1_2 & 0xF, temp_t1_3 = temp_t1_2 - temp_t2_2, (temp_t2_2 == 0)) || (M2C_ERROR(/* unknown instruction: cache 0x15, 0x10($t1) */), M2C_ERROR(/* unknown instruction: cache 0x11, ($t0) */), ((temp_t1_3 < var_t0) == 0)))) {
                do {
                    M2C_ERROR(/* unknown instruction: cache 0x11, ($t0) */);
                    var_t0 += 0x10;
                } while (var_t0 < temp_t1_3);
            }
        } else {
            var_t0_2 = 0x80000000;
            do {
                M2C_ERROR(/* unknown instruction: cache 0x1, ($t0) */);
                var_t0_2 += 0x10;
            } while (var_t0_2 < 0x80001FF0U);
        }
    }
}
