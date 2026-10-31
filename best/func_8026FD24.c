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

void *D_80210ADC(void *, s16);                      /* extern */
s32 D_80239B10(void *, s16, s32, s32);  /* extern */
s32 D_8023D54C(s16);                                /* extern */
s32 D_802A0520(s32);                            /* extern */
s32 func_8026F3F8();
s32 func_8026F598();
s32 func_8029DC78();
s32 func_8029DDA0();
s32 func_802A0500();

s32 func_8026FD24(void *arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s16 var_s0_2;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s7;
    s32 var_v0;
    u32 temp_s5;
    u32 var_s0_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;

    var_s1 = NULL;
    var_v0 = -1;
    if (arg1 != -1) {
        var_v0 = -1;
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x2758)) {
            var_s7 = 0;
            if ((arg6 != NULL) && (M2C_FIELD(arg6, void **, 0x334) != NULL)) {
                var_s7 = D_8023D54C(arg1) != 0;
            }
            var_s0 = arg1 << 0x10;
            if ((var_s7 != 0) && (var_s1 = M2C_FIELD(arg6, void **, 0x334), (var_s1 != NULL))) {
                var_s0_2 = arg1;
                if (M2C_FIELD(var_s1, u16 *, 8) == 1) {
                    temp_v0 = D_80210ADC(D_80210ADC(M2C_FIELD(arg0, void **, 0x2750), arg1), 1);
                    var_s0 = arg1 << 0x10;
                    if (M2C_FIELD(temp_v0, s32 *, 4) != 0) {
                        var_v0 = -1;
                        if ((u16) M2C_FIELD(var_s1, u16 *, 0x32) < (u32) ((s8) M2C_FIELD(temp_v0, u8 *, 0xC) & 0xFFFF)) {
                            func_8026F3F8(arg0, M2C_FIELD(var_s1, u16 *, 0x30));
                            var_s0 = arg1 << 0x10;
                            goto block_11;
                        }
                    } else {
                        goto block_11;
                    }
                } else {
                    goto block_12;
                }
            } else {
block_11:
                var_s0_2 = (s16) (var_s0 >> 0x10);
block_12:
                M2C_FIELD(arg0, void **, 0x278C) = D_80210ADC(D_80210ADC(M2C_FIELD(arg0, void **, 0x2750), var_s0_2), 0);
                M2C_FIELD(arg0, s16 *, 0x2790) = 0x100;
                M2C_FIELD(arg0, s32 *, 0x2794) = -1;
                temp_v0_2 = D_80210ADC(D_80210ADC(M2C_FIELD(arg0, void **, 0x2750), var_s0_2), 1);
                temp_s5 = M2C_FIELD(temp_v0_2, u32 *, 4);
                var_s3 = -1;
                if (temp_s5 != 0) {
                    temp_s0 = arg0 + 0x110;
                    temp_a0 = func_802A0500();
                    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) + 1;
                    M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
                    if (temp_v1 != 1) {
                        D_802A0520(temp_a0);
                        func_8029DC78(temp_s0, 0, 1);
                    } else {
                        D_802A0520(temp_a0);
                    }
                    temp_s0_2 = arg0 + 0x110;
                    var_s3 = M2C_FIELD(arg0, s32 *, 0x10C) + 1;
                    M2C_FIELD(arg0, s32 *, 0x10C) = var_s3;
                    temp_v0_3 = func_802A0500();
                    temp_v1_2 = M2C_FIELD(temp_s0_2, s32 *, 0x1C) - 1;
                    M2C_FIELD(temp_s0_2, s32 *, 0x1C) = temp_v1_2;
                    if (temp_v1_2 != 0) {
                        D_802A0520(temp_v0_3);
                        func_8029DDA0(temp_s0_2, 0, 1);
                    } else {
                        D_802A0520(temp_v0_3);
                    }
                    if (var_s7 != 0) {
                        var_s1 = M2C_FIELD(arg6, void **, 0x334);
                        if (var_s1 != NULL) {
                            D_80239B10(var_s1, arg1, 0, 0);
                        }
                        goto block_22;
                    }
                    goto block_24;
                }
block_22:
                if (var_s7 != 0) {
                    temp_s0_3 = temp_v0_2 + 8;
                    func_8026F598(arg0, temp_s0_3, &arg2, arg1, var_s3, 0, arg5);
                    M2C_FIELD(var_s1, s16 *, 0x30) = (s16) var_s3;
                    M2C_FIELD(var_s1, s32 *, 0x34) = (s32) arg1;
                    M2C_FIELD(var_s1, s16 *, 0x32) = (s16) (s8) M2C_FIELD(temp_s0_3, u8 *, 4);
                } else {
block_24:
                    var_s0_3 = 0;
                    if (temp_s5 != 0) {
                        do {
                            temp_lo = var_s0_3 * M2C_FIELD(temp_v0_2, s32 *, 0);
                            var_s0_3 += 1;
                            func_8026F598(arg0, temp_v0_2 + (temp_lo + 8), &arg2, arg1, var_s3, 0, arg5);
                        } while (var_s0_3 < temp_s5);
                    }
                }
                var_v0 = var_s3;
            }
        }
    }
    return var_v0;
}
