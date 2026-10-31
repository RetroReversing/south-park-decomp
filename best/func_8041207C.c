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

s32 func_8029BC60(s32, s32, s32, void *);           /* extern */
s32 func_8029C018(s32, s32, s32, void *, s32);      /* extern */
s32 func_8041249C();                                /* extern */

s32 func_8041207C(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    u8 *var_a1;
    u8 *var_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_v1;
    void *temp_s1;
    void *var_a3;
    void *var_a3_2;
    void *var_a3_3;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8041249C(), (var_v0 == 0))) {
        var_s4 = 1;
        if (!(arg3 & 0xFF)) {
            var_s4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        var_s0 = 0;
        if ((arg2 & 0xFF) == 1) {
            var_a1 = (var_s4 * 2) + arg1;
            var_a0_2 = 0;
            temp_a2 = (0x80 - var_s4) * 2;
            var_v1 = 0;
            if (temp_a2 > 0) {
                do {
                    temp_v0 = *var_a1;
                    var_a1 += 1;
                    var_a0_2 += 1;
                    var_v1 = (var_v1 + temp_v0) & 0xFFFF;
                } while (var_a0_2 < temp_a2);
            }
            M2C_FIELD(arg1, u8 *, 1) = var_v1;
            var_s0 = 0;
        }
        temp_s3 = (arg3 & 0xFF) * 8;
        var_v0_2 = 0 << 5;
loop_9:
        temp_s1 = arg1 + var_v0_2;
        if ((arg2 & 0xFF) == 1) {
            func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x56) + temp_s3 + var_s0) & 0xFFFF, temp_s1, 0);
            var_a0 = func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x5A) + temp_s3 + var_s0) & 0xFFFF, temp_s1, 0);
        } else {
            var_a0 = func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x56) + temp_s3 + var_s0) & 0xFFFF, temp_s1);
        }
        var_s0 += 1;
        if (var_a0 == 0) {
            var_v0_2 = var_s0 << 5;
            if (var_s0 >= 8) {
                var_v0 = 0;
                if (!(arg2 & 0xFF)) {
                    var_v1_2 = 0;
                    var_a2 = (var_s4 * 2) + arg1;
                    temp_a3 = (0x80 - var_s4) * 2;
                    var_a1_2 = 0;
                    if (var_a0 < temp_a3) {
                        do {
                            temp_v0_2 = *var_a2;
                            var_a2 += 1;
                            var_a1_2 += 1;
                            var_v1_2 = (var_v1_2 + temp_v0_2) & 0xFFFF;
                        } while (var_a1_2 < temp_a3);
                    }
                    var_s0_2 = 0;
                    if ((var_v1_2 & 0xFF) != M2C_FIELD(arg1, u8 *, 1)) {
                        var_s1 = arg1;
                        var_a3 = var_s1;
                        do {
                            var_s1 += 0x20;
                            func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x5A) + ((arg3 & 0xFF) * 8) + var_s0_2) & 0xFFFF, var_a3);
                            var_s0_2 += 1;
                            var_a3 = var_s1;
                        } while (var_s0_2 < 8);
                        var_v0 = 3;
                        if ((var_v1_2 & 0xFF) == M2C_FIELD(arg1, u8 *, 1)) {
                            var_s0_3 = 0;
                            var_s1_2 = arg1;
                            var_a3_2 = var_s1_2;
                            do {
                                var_s1_2 += 0x20;
                                func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x56) + ((arg3 & 0xFF) * 8) + var_s0_3) & 0xFFFF, var_a3_2, 0);
                                var_s0_3 += 1;
                                var_a3_2 = var_s1_2;
                            } while (var_s0_3 < 8);
                            return 0;
                        }
                        /* Duplicate return node #28. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    var_s1_3 = arg1;
                    var_a3_3 = var_s1_3;
                    do {
                        var_s1_3 += 0x20;
                        func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, u16 *, 0x5A) + ((arg3 & 0xFF) * 8) + var_s0_2) & 0xFFFF, var_a3_3, 0);
                        var_s0_2 += 1;
                        var_a3_3 = var_s1_3;
                    } while (var_s0_2 < 8);
                    var_v0 = 0;
                    /* Duplicate return node #28. Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #28. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_9;
        }
        return var_a0;
    }
    return var_v0;
}
