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

s32 func_8029BC60();
s32 func_8029C018();
s32 func_802A04D0();
s32 func_8041249C();

s32 func_80411A38(void *arg0, void *arg1, u8 *arg2) {
    u8 sp18;
    u8 sp38;
    u16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v0;
    char *var_s1_2;
    u16 temp_v1;
    u32 var_a0;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 *var_v0_4;
    u8 *var_v0_5;
    u8 var_s1;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8041249C(), (var_v0 == 0))) {
        M2C_FIELD(arg2, s32 *, 0) = -1;
        var_s1 = 0;
        M2C_FIELD(arg2, s32 *, 4) = func_802A04D0();
        M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
loop_3:
        M2C_FIELD(arg0, u8 *, 0x65) = var_s1;
        var_v0 = func_8041249C(arg0);
        if (var_v0 == 0) {
            var_v0 = func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp18);
            var_s0 = 1;
            if (var_v0 == 0) {
                sp18 = var_s1 | 0x80;
                var_v0_2 = &sp18 + 1;
                do {
                    var_s0 += 1;
                    *var_v0_2 = ~*var_v0_2;
                    var_v0_2 = &(&sp18)[var_s0];
                } while (var_s0 < 0x20);
                var_v0 = func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0U, &sp18, 0);
                if (var_v0 == 0) {
                    var_v0 = func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp38);
                    var_s0_2 = 0;
                    if (var_v0 == 0) {
                        var_v0_3 = &sp38;
loop_10:
                        if (*var_v0_3 == (&sp18)[var_s0_2]) {
                            var_s0_2 += 1;
                            var_v0_3 = &(&sp38)[var_s0_2];
                            if (var_s0_2 >= 0x20) {

                            } else {
                                goto loop_10;
                            }
                        }
                        if (var_s0_2 == 0x20) {
                            if ((s32) var_s1 > 0) {
                                M2C_FIELD(arg0, u8 *, 0x65) = 0U;
                                var_v0 = func_8041249C(arg0);
                                if (var_v0 == 0) {
                                    var_v0 = func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0, &sp18);
                                    if (var_v0 == 0) {
                                        if (sp18 == 0x80) {
                                            goto block_18;
                                        }
                                        goto block_19;
                                    }
                                }
                                /* Duplicate return node #32. Try simplifying control flow for better match */
                                return var_v0;
                            }
block_18:
                            var_s1 += 1;
                            if ((s32) var_s1 >= 0x3E) {
                                goto block_19;
                            }
                            goto loop_3;
                        }
block_19:
                        M2C_FIELD(arg0, u8 *, 0x65) = 0U;
                        var_v0 = func_8041249C(arg0);
                        if (var_v0 == 0) {
                            M2C_FIELD(arg2, u8 *, 0x1A) = var_s1;
                            M2C_FIELD(arg2, s16 *, 0x18) = (s16) (((s32) var_s1 > 0) | (M2C_FIELD(arg1, u16 *, 0x18) & 0xFFFE));
                            var_a0 = 0;
                            M2C_FIELD(arg2, u16 *, 0x1E) = 0U;
                            M2C_FIELD(arg2, u16 *, 0x1C) = 0U;
                            M2C_FIELD(arg2, u8 *, 0x1B) = (u8) M2C_FIELD(arg1, u8 *, 0x1B);
                            var_v0_4 = arg2;
                            do {
                                temp_v1 = *var_v0_4;
                                var_a0 += 2;
                                M2C_FIELD(arg2, u16 *, 0x1C) += temp_v1;
                                M2C_FIELD(arg2, u16 *, 0x1E) += ~temp_v1;
                                var_v0_4 = arg2 + var_a0;
                            } while (var_a0 < 0x1CU);
                            var_s0_3 = 0;
                            var_s1_2 = &sp58;
                            sp58 = 1;
                            sp5A = 3;
                            sp5C = 4;
                            sp5E = 6;
loop_23:
                            var_v0 = func_8029C018(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), *(u16 *)var_s1_2, arg2, 1);
                            var_s0_3 += 1;
                            if (var_v0 == 0) {
                                var_s1_2 += 2;
                                if (var_s0_3 >= 4) {
                                    temp_v0 = func_8029BC60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, &sp18);
                                    var_s0_4 = 0;
                                    if (temp_v0 != 0) {
                                        return temp_v0;
                                    }
                                    var_v0_5 = &sp18;
loop_29:
                                    var_s0_4 += 1;
                                    if (*var_v0_5 == arg2[var_s0_4]) {
                                        var_v0_5 = &(&sp18)[var_s0_4];
                                        if (var_s0_4 >= 0x20) {
                                            var_v0 = 0;
                                            /* Duplicate return node #32. Try simplifying control flow for better match */
                                            return var_v0;
                                        }
                                        goto loop_29;
                                    }
                                    return 0xA;
                                }
                                goto loop_23;
                            }
                            /* Duplicate return node #32. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #32. Try simplifying control flow for better match */
                        return var_v0;
                    }
                }
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return var_v0;
            }
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
