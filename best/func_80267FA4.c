/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 D_802046B8(M2C_UNK *, s32, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK D_80221864(M2C_UNK, s32);                   /* extern */
M2C_UNK D_80221CCC(M2C_UNK, s32);                   /* extern */
M2C_UNK func_80266F94(u16 *, M2C_UNK *, s32, s32);  /* extern */
M2C_UNK func_80267570(u16 *, s32, s32);             /* extern */
M2C_UNK func_80268DB4(s32, M2C_UNK, u16 **, u8 *);  /* extern */
extern M2C_UNK D_800CCA80;
extern void *D_800D7F68;

void func_80267FA4(s32 arg0, M2C_UNK arg1, void *arg2) {
    u16 *sp10;
    u8 sp14;
    s32 sp18;
    u16 *sp1C;
    s32 sp20;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    u16 *var_s2_2;
    u16 *var_s3;
    u16 temp_s2;
    u16 temp_s3;
    u16 temp_s4;
    u16 temp_s4_2;
    u32 temp_lo;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1_2;
    void *temp_v1;

    temp_v0 = D_802046B8(&D_800CCA80, arg0, 0, 1);
    sp18 = temp_v0;
    if (temp_v0 != 0) {
        func_80268DB4(temp_v0, arg1, &sp10, &sp14);
        if (sp10 != NULL) {
            var_s5 = 0;
            if (sp14 != 0) {
                temp_s4 = M2C_FIELD(sp10, u16 *, 2);
                var_s3 = sp10 + 8;
                sp1C = sp10;
                var_s4 = temp_s4 - 1;
                if (temp_s4 != 0) {
                    do {
                        temp_s2 = *sp1C;
                        var_s2 = temp_s2 - 1;
                        if (temp_s2 != 0) {
                            do {
                                temp_s1 = M2C_FIELD(var_s3, s32 *, 0);
                                temp_s0 = M2C_FIELD(var_s3, s32 *, 4);
                                func_80267570(var_s3 + 8, temp_s1, temp_s0);
                                temp_a1 = var_s5 * 0x10;
                                var_s5 += 4;
                                temp_a2 = var_s2;
                                var_s2 -= 1;
                                temp_a0 = D_800D7F68;
                                temp_v1 = D_800D7F68 + 8;
                                M2C_FIELD(temp_a0, s32 *, 0) = 0x01004008;
                                D_800D7F68 = temp_v1;
                                D_800D7F68 = temp_v1 + 8;
                                M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + temp_a1);
                                M2C_FIELD(D_800D7F68, s32 *, 8) = 0x06040200;
                                M2C_FIELD(temp_v1, s32 *, 4) = 0x604;
                                var_s3 = var_s3 + ((u32) (temp_s1 * temp_s0) >> 1) + 8;
                            } while (temp_a2 != 0);
                        }
                        var_s4 -= 1;
                    } while (var_s4 != 0);
                }
            } else {
                temp_s4_2 = M2C_FIELD(sp10, u16 *, 2);
                var_s2_2 = sp10 + 8;
                var_s4_2 = temp_s4_2 - 1;
                if (temp_s4_2 != 0) {
                    sp20 = 0x01004008;
                    do {
                        temp_s3 = M2C_FIELD(sp10, u16 *, 0);
                        var_s3_2 = temp_s3 - 1;
                        if (temp_s3 != 0) {
                            do {
                                temp_a2_3 = M2C_FIELD(var_s2_2, s32 *, 0);
                                temp_a3 = M2C_FIELD(var_s2_2, s32 *, 4);
                                temp_lo = temp_a2_3 * temp_a3;
                                func_80266F94(var_s2_2 + 8, &M2C_FIELD(&var_s2_2[temp_lo], M2C_UNK *, 8), temp_a2_3, temp_a3);
                                temp_a3_2 = var_s5 * 0x10;
                                var_s5 += 4;
                                var_s2_2 = var_s2_2 + ((temp_lo * 2) + (temp_lo >> 1)) + 8;
                                temp_a2_2 = var_s3_2;
                                var_s3_2 -= 1;
                                temp_a1_2 = D_800D7F68;
                                M2C_FIELD(temp_a1_2, s32 *, 0) = sp20;
                                temp_a0_2 = D_800D7F68 + 8;
                                D_800D7F68 = temp_a0_2;
                                D_800D7F68 = temp_a0_2 + 8;
                                M2C_FIELD(temp_a1_2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + temp_a3_2);
                                M2C_FIELD(D_800D7F68, s32 *, 8) = 0x06000204;
                                M2C_FIELD(temp_a0_2, s32 *, 4) = 0x40600;
                            } while (temp_a2_2 != 0);
                        }
                        var_s4_2 -= 1;
                    } while (var_s4_2 != 0);
                }
            }
            D_80221CCC(0, sp18);
        }
        D_80221864(0, sp18);
    }
}
