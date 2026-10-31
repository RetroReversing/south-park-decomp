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

M2C_UNK D_802131C4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK D_80213274(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK D_80213AF4(s32, f32 *, M2C_UNK *);          /* extern */
s32 func_80277EF8(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32, f32, s32); /* extern */

void func_8027A814(void *arg0, void **arg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK sp30;
    M2C_UNK sp3C;
    M2C_UNK sp48;
    M2C_UNK sp58;
    M2C_UNK sp68;
    M2C_UNK sp78;
    M2C_UNK *temp_a2;
    M2C_UNK *var_s1;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3;
    s32 var_s2;
    void **var_a2;
    void **var_s0;
    void **var_v0;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = M2C_FIELD(arg1, void **, 4);
    temp_v1 = M2C_FIELD(arg1, void **, 0);
    temp_fv1f = M2C_FIELD(temp_v0, f32 *, 0);
    temp_fv1 = M2C_FIELD(temp_v0, f32 *, 4);
    temp_v0_2 = M2C_FIELD(arg1, void **, 8);
    if (!((((temp_fv1f - M2C_FIELD(temp_v1, f32 *, 0)) * (M2C_FIELD(temp_v0_2, f32 *, 4) - temp_fv1)) - ((temp_fv1 - M2C_FIELD(temp_v1, f32 *, 4)) * (M2C_FIELD(temp_v0_2, f32 *, 0) - temp_fv1f))) >= 0.0f)) {
        var_a0 = 0;
        var_a3 = 4;
        var_a2 = arg1;
loop_2:
        temp_v1_2 = *var_a2;
        var_v0 = arg1;
        if (var_a0 != 2) {
            var_v0 = arg1 + var_a3;
        }
        temp_v0_3 = *var_v0;
        temp_fv1f_2 = M2C_FIELD(temp_v1_2, f32 *, 4);
        temp_fv1_2 = M2C_FIELD(temp_v1_2, f32 *, 0);
        var_a3 += 4;
        if (!((((temp_fv1f_2 - M2C_FIELD(temp_v0_3, f32 *, 4)) * temp_fv1_2) + ((M2C_FIELD(temp_v0_3, f32 *, 0) - temp_fv1_2) * temp_fv1f_2)) < 0.0f)) {
            var_a0 += 1;
            var_a2 += 4;
            if (var_a0 >= 3) {
                var_s2 = 0;
                var_s1 = &sp30;
                var_s0 = arg1;
                var_a0_2 = arg0 + 0x54;
                do {
                    temp_v1_3 = M2C_FIELD(*var_s0, void **, 0x10);
                    temp_a2 = var_s1;
                    var_s1 += 0xC;
                    sp20 = (f32) M2C_FIELD(temp_v1_3, s16 *, 0);
                    var_s0 += 4;
                    sp24 = (f32) M2C_FIELD(temp_v1_3, s16 *, 2);
                    var_s2 += 1;
                    sp28 = (f32) M2C_FIELD(temp_v1_3, s16 *, 4);
                    D_80213AF4(var_a0_2, &sp20, temp_a2);
                    var_a0_2 = arg0 + 0x54;
                } while (var_s2 < 3);
                D_802131C4(&sp58, &sp3C, &sp30);
                D_802131C4(&sp68, &sp48, &sp3C);
                D_80213274(&sp78, &sp68, &sp58);
                temp_s0 = M2C_FIELD(arg0, void **, 0);
                temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x50);
                temp_s2 = M2C_FIELD(temp_s0, void **, 4);
                if ((temp_v1_4 == 2) || (temp_v1_4 == 8)) {
                    if ((M2C_FIELD(temp_s2, s32 *, 0) & 8) && (M2C_FIELD(D_800F4864, s32 *, 0xC0) == 0) && (func_80277EF8(temp_s0, &sp78, &sp30, 1, 7, M2C_FIELD(temp_s2, f32 *, 0x18), 0) != 0)) {
                        M2C_FIELD(temp_s0, s32 *, 0x38) = 0;
                        M2C_FIELD(temp_s0, void **, 0x34) = (void *) (D_800F4864 + 0xC4);
                        M2C_FIELD(temp_s0, void **, 0x3C) = (void *) (D_800F4864 + 0xD0);
                        M2C_FIELD(temp_s0, void **, 0x44) = (void *) (D_800F4864 + 0xC0);
                        M2C_FIELD(temp_s0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
                        M2C_FIELD(temp_s0, void **, 0x48) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), void **, 0x10);
                    }
                } else if (func_80277EF8(temp_s0, &sp78, &sp30, 1, (s32) M2C_FIELD(temp_s2, s8 *, 5), M2C_FIELD(temp_s2, f32 *, 0x10), 0) != 0) {
                    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) * M2C_FIELD(temp_s0, f32 *, 8));
                    M2C_FIELD(temp_s0, void **, 0x34) = (void *) (D_800F4864 + 8);
                    M2C_FIELD(temp_s0, void **, 0x3C) = (void *) (D_800F4864 + 0x14);
                    M2C_FIELD(temp_s0, s32 *, 0x38) = 0;
                    M2C_FIELD(temp_s0, s32 *, 0x40) = -1;
                    M2C_FIELD(temp_s0, void **, 0x44) = (void *) D_800F4864;
                    M2C_FIELD(temp_s0, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0x4C);
                    if (M2C_FIELD(temp_s2, s32 *, 0) & 0x04000000) {
                        M2C_FIELD(temp_s0, s32 *, 0x9C) = 1;
                    }
                }
            } else {
                goto loop_2;
            }
        }
    }
}
