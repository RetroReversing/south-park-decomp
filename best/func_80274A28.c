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

M2C_UNK func_8026F21C(void *, s32, M2C_UNK, void *); /* extern */
M2C_UNK func_80270384(void *);                      /* extern */
M2C_UNK func_802703E8(void *);                      /* extern */
s16 func_80271DF0(void *, s16, s16, s16, s32);      /* extern */
s16 func_80295B28(void *, s32);                     /* extern */
M2C_UNK func_802A0938(void *, void *, M2C_UNK);     /* extern */

void func_80274A28(void *arg0) {
    void *sp18;
    void *sp1C;
    s32 sp20;
    M2C_UNK *temp_s6;
    M2C_UNK *var_s1;
    s16 *temp_s3;
    s16 temp_s4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;

    func_80270384(M2C_FIELD(arg0, void **, 0));
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    var_s1 = M2C_FIELD(arg0, M2C_UNK **, 8);
    sp18 = (char *)(temp_v0); sp18 += (s32)(0xDC);
    sp1C = temp_v0 + 0x84;
    sp20 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x7C), s32 *, 0xC);
    if (var_s1 != (arg0 + 4)) {
loop_2:
        temp_v0_2 = M2C_FIELD(var_s1, s32 *, 0x1C);
        temp_s6 = M2C_FIELD(var_s1, M2C_UNK **, 4);
        temp_v0_3 = temp_v0_2 - 1;
        if (temp_v0_2 != 0) {
            M2C_FIELD(var_s1, s32 *, 0x1C) = temp_v0_3;
            if (temp_v0_3 <= 0) {
                M2C_FIELD(var_s1, s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x104);
                temp_v1 = M2C_FIELD(arg0, void **, 0);
                temp_v0_4 = M2C_FIELD(temp_v1, s32 *, 0x108);
                M2C_FIELD(var_s1, s32 *, 0x44) = temp_v0_4;
                M2C_FIELD(temp_v1, s32 *, 0x108) = (s32) (temp_v0_4 + 1);
                M2C_FIELD(var_s1, s32 *, 0xA4) = 0;
            }
            goto block_13;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if ((M2C_FIELD(temp_a0, s32 *, 0x104) - M2C_FIELD(var_s1, s32 *, 0x18)) >= 0x10) {
            M2C_FIELD(M2C_FIELD(var_s1, M2C_UNK **, 0), M2C_UNK **, 4) = temp_s6;
            goto block_12;
        }
        temp_v0_5 = func_80271DF0(temp_a0 + 0x1B10, M2C_FIELD(var_s1, s16 *, 0x40), M2C_FIELD(var_s1, s16 *, 0x3E), M2C_FIELD(var_s1, s16 *, 0x3C), 0);
        if ((temp_v0_5 != -1) && (temp_v0_5 != 0x10)) {
            temp_s3 = (temp_v0_5 * 2) + sp18;
            temp_s4 = *temp_s3;
            if (temp_s4 == -1) {
                temp_v0_6 = func_80295B28(sp1C, M2C_FIELD((sp20 + (M2C_FIELD(var_s1, s16 *, 0x3E) * 4)), s32 *, 0x10));
                *temp_s3 = temp_v0_6;
                if (temp_v0_6 != temp_s4) {
                    temp_s0 = M2C_FIELD(arg0, void **, 0) + ((temp_v0_5 * 0xB8) + 0x1B14);
                    func_802A0938(temp_s0, var_s1 + 8, 0xB8);
                    M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) M2C_FIELD(var_s1, s32 *, 0x44);
                    M2C_FIELD(temp_s0, s32 *, 8) = (s32) *temp_s3;
                    M2C_FIELD(temp_s0, s32 *, 0) = (s32) temp_v0_5;
                    M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x104);
                    func_8026F21C(M2C_FIELD(arg0, void **, 0), M2C_FIELD(temp_s0, s32 *, 0xC), 0, temp_s0 + 0x40);
                    M2C_FIELD(var_s1, s32 *, 0x44) = (s32) temp_s4;
                    M2C_FIELD(var_s1, s16 *, 0x3C) = temp_s4;
                    M2C_FIELD(M2C_FIELD(var_s1, M2C_UNK **, 0), M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(var_s1, M2C_UNK **, 4);
block_12:
                    *M2C_FIELD(var_s1, M2C_UNK **, 4) = M2C_FIELD(var_s1, M2C_UNK **, 0);
                    M2C_FIELD(var_s1, M2C_UNK **, 4) = (M2C_UNK *) (arg0 + 0xC4);
                    M2C_FIELD(var_s1, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 0xC4);
                    M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0xC4), M2C_UNK **, 4) = var_s1;
                    M2C_FIELD(arg0, M2C_UNK **, 0xC4) = var_s1;
block_13:
                    var_s1 = temp_s6;
                    if (var_s1 != (arg0 + 4)) {
                        goto loop_2;
                    }
                }
            }
        }
    }
    func_802703E8(M2C_FIELD(arg0, void **, 0));
}
