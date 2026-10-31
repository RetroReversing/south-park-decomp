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

M2C_UNK D_8020BDE4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK D_802114B8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK D_80211B2C(M2C_UNK *, void *);              /* extern */
M2C_UNK D_80213A84(M2C_UNK *);                      /* extern */
M2C_UNK D_80213F0C(M2C_UNK *, M2C_UNK, f32, f32);   /* extern */
M2C_UNK D_802160C8(void *, void *, void *, void *); /* extern */
M2C_UNK func_8024E8B0(s32, M2C_UNK, void *, void *); /* extern */
M2C_UNK func_80284854(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_8029A774(M2C_UNK *, u16 *, M2C_UNK, f32, f32, f32, f32); /* extern */
extern f32 D_800A989C;
extern M2C_UNK D_800A98A0;
extern f32 D_800A98A8;
extern f32 D_800A98AC;
extern s32 D_800AB9FC;
extern M2C_UNK D_800B1368;
extern M2C_UNK D_800B1398;
extern u16 D_800BEE1A;
extern u16 D_800BEE1E;
extern s32 D_800BEE20;
extern void *D_800CCA78;
extern M2C_UNK D_800D6538;
extern void *D_800D7F68;

void func_8025C814(void *arg0) {
    M2C_UNK sp20;
    M2C_UNK sp60;
    M2C_UNK spA0;
    M2C_UNK spE0;
    u8 sp120;
    u8 sp121;
    u8 sp122;
    u16 sp124;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_ft0f;
    s32 temp_ft0f_2;
    s32 temp_ft0f_3;
    s32 temp_ft0f_4;
    s32 temp_ft0f_5;
    s32 temp_ft0f_6;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_a2_2;
    u8 temp_a3_2;
    void *temp_a0;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_a3_3;
    void *temp_s7;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t3;
    void *temp_t4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_v0_3;
    void *var_v1;

    temp_v0 = D_800D7F68;
    temp_a3 = (char *)(D_800D7F68); temp_a3 += (s32)(8);
    temp_a1 = temp_a3 + 8;
    D_800D7F68 = temp_a3;
    M2C_FIELD(temp_v0, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    temp_v1 = temp_a3 + 0x10;
    D_800D7F68 = temp_a1;
    M2C_FIELD(temp_a3, M2C_UNK **, 4) = &D_800B1368;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xDE000000;
    D_800D7F68 = temp_v1;
    M2C_FIELD(temp_a3, s32 *, 8) = 0xD9FFFFFF;
    M2C_FIELD(temp_a1, s32 *, 4) = 0x800000;
    M2C_FIELD(temp_a3, s32 *, 0x10) = 0xDE000000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_800B1398;
    temp_fv1f = M2C_FIELD(arg0, f32 *, 0x2B0);
    temp_t2 = temp_a3 + 0x18;
    D_800D7F68 = temp_t2;
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x2A8);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x2B4);
    temp_ft0f = (s32) temp_fv1f;
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x2AC);
    temp_ft0f_2 = (s32) temp_fv0;
    var_s5 = temp_ft0f;
    var_s2 = temp_ft0f_2;
    temp_ft0f_3 = (s32) (temp_fv1f + temp_fv1);
    var_s1 = temp_ft0f_3;
    temp_ft0f_4 = (s32) (temp_fv0 + temp_fv0f);
    temp_ft0f_5 = (s32) (2.0f * temp_fv1);
    temp_ft0f_6 = (s32) (2.0f * temp_fv0f);
    var_s0 = temp_ft0f_4;
    if ((D_800BEE18 - 1) < (s16) temp_ft0f_3) {
        var_s1 = D_800BEE1A - 1;
    }
    if (temp_ft0f & 0x8000) {
        var_s5 = 0;
    }
    if (temp_ft0f_2 & 0x8000) {
        var_s2 = 0;
    }
    var_v0 = temp_ft0f_5 << 0x10;
    if ((D_800BEE1C - 1) < (s16) temp_ft0f_4) {
        var_s0 = D_800BEE1E - 1;
        var_v0 = temp_ft0f_5 << 0x10;
    }
    temp_s7 = D_800CCA78;
    temp_v1_2 = D_800AB9FC * 0x10;
    temp_a0 = arg0 + temp_v1_2;
    M2C_FIELD(temp_a0, s16 *, 0x2B8) = (s16) temp_ft0f_5;
    M2C_FIELD(temp_a0, s16 *, 0x2BA) = (s16) temp_ft0f_6;
    M2C_FIELD(temp_a0, s16 *, 0x2C0) = (s16) (s32) ((((f32) (var_v0 >> 0x10) * D_800A989C) + M2C_FIELD(arg0, f32 *, 0x2B0)) * M2C_FIELD(&D_800A98A0, f32 *, 0));
    temp_a2 = temp_a3 + 0x20;
    D_800D7F68 = temp_a2;
    D_800D7F68 = temp_a3 + 0x28;
    M2C_FIELD(temp_a0, s16 *, 0x2C2) = (s16) (s32) ((((f32) (s16) temp_ft0f_6 * D_800A989C) + M2C_FIELD(arg0, f32 *, 0x2B4)) * M2C_FIELD(&D_800A98A0, f32 *, 0));
    M2C_FIELD(temp_a3, s32 *, 0x18) = 0xDC080008;
    M2C_FIELD(temp_t2, void **, 4) = (void *) (arg0 + (temp_v1_2 + 0x2B8));
    temp_a0_2 = ((s32) ((f32) (s16) var_s2 * M2C_FIELD(&D_800A98A0, f32 *, 0)) & 0xFFF) | 0xED000000;
    M2C_FIELD(temp_a3, s32 *, 0x20) = (s32) ((((s32) ((f32) (s16) var_s5 * M2C_FIELD(&D_800A98A0, f32 *, 0)) & 0xFFF) << 0xC) | temp_a0_2);
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) ((((s32) ((f32) (s16) var_s1 * M2C_FIELD(&D_800A98A0, f32 *, 0)) & 0xFFF) << 0xC) | ((s32) ((f32) (s16) var_s0 * M2C_FIELD(&D_800A98A0, f32 *, 0)) & 0xFFF));
    func_8024E8B0(temp_a0_2, 0xDC080008, temp_a2, temp_a3);
    if (arg0 != &D_800D6538) {
        if (M2C_FIELD(arg0, s8 *, 0x510) != 0) {
            temp_v1_3 = D_800D7F68;
            temp_v0_2 = D_800D7F68 + 8;
            temp_a1_2 = temp_v0_2 + 8;
            D_800D7F68 = temp_v0_2;
            M2C_FIELD(temp_v1_3, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v1_3, s32 *, 4) = 0;
            D_800D7F68 = temp_a1_2;
            M2C_FIELD(temp_v0_2, s32 *, 4) = 0x300000;
            M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
            D_800D7F68 = temp_v0_2 + 0x10;
            M2C_FIELD(temp_v0_2, s32 *, 8) = 0xFCFFFFFF;
            M2C_FIELD(temp_a1_2, s32 *, 4) = 0xFFFE793C;
            D_8020BDE4(0x14, temp_a1_2, 0xE3000A01, 0xFFFE793C);
            sp120 = M2C_FIELD(arg0, u8 *, 0x4E8) & 0xF8;
            temp_a1_3 = D_800D7F68 + 8;
            sp121 = M2C_FIELD(arg0, u8 *, 0x4E9) & 0xF8;
            M2C_FIELD(D_800D7F68, s32 *, 4) = 0x10000;
            M2C_FIELD(D_800D7F68, s32 *, 0) = 0xD9FFFFFF;
            M2C_FIELD(D_800D7F68, s32 *, 8) = 0xDB080000;
            temp_a2_2 = M2C_FIELD(arg0, u16 *, 0x506);
            temp_v0_3 = 0x3E8 - temp_a2_2;
            temp_t0 = temp_a1_3 + 8;
            temp_t1 = temp_a1_3 + 0x10;
            temp_t2_2 = temp_a1_3 + 0x18;
            temp_t3 = temp_a1_3 + 0x20;
            D_800D7F68 = temp_a1_3;
            D_800D7F68 = temp_t0;
            D_800D7F68 = temp_t1;
            temp_a3_2 = M2C_FIELD(arg0, u8 *, 0x4EA) & 0xF8;
            M2C_FIELD(temp_a1_3, s32 *, 8) = 0xF8000000;
            D_800D7F68 = temp_t2_2;
            D_800D7F68 = temp_t3;
            sp122 = temp_a3_2;
            M2C_FIELD(temp_a1_3, s32 *, 4) = (s32) (((0x1F400 / temp_v0_3) << 0x10) | (((s32) ((0x1F4 - temp_a2_2) << 8) / temp_v0_3) & 0xFFFF));
            M2C_FIELD(temp_t0, s32 *, 4) = (s32) ((sp120 << 0x18) | (sp121 << 0x10) | (temp_a3_2 << 8) | 0xFF);
            temp_a0_3 = ((sp120 << 8) & 0xF800) | ((sp121 * 8) & 0x7C0) | ((temp_a3_2 >> 2) & 0x3E);
            M2C_FIELD(temp_a1_3, s32 *, 0x10) = (s32) (((D_800BEE18 - 1) & 0xFFF) | 0xFF100000);
            D_800D7F68 = temp_a1_3 + 0x28;
            M2C_FIELD(temp_t1, s32 *, 4) = (s32) M2C_FIELD(temp_s7, s32 *, 0xF0);
            M2C_FIELD(temp_a1_3, s32 *, 0x18) = 0xF7000000;
            M2C_FIELD(temp_t2_2, s32 *, 4) = (s32) (((temp_a0_3 | 1) << 0x10) | 1 | temp_a0_3);
            M2C_FIELD(temp_a1_3, s32 *, 0x20) = (s32) (((var_s1 & 0x3FF) << 0xE) | (((var_s0 & 0x3FF) * 4) | 0xF6000000));
            M2C_FIELD(temp_t3, s32 *, 4) = (s32) (((var_s5 & 0x3FF) << 0xE) | ((var_s2 & 0x3FF) * 4));
            if (M2C_FIELD(arg0, s8 *, 0x510) != 0) {
                var_v0_2 = 0xDA380007;
                if (M2C_FIELD(arg0, f32 *, 0xE68) != 0.0f) {
                    temp_fs0 = D_800A98AC;
                    func_8029A774(&sp20, &sp124, 0x42340000, (f32) D_800BEE18 / (f32) D_800BEE1C, M2C_FIELD(&D_800A98A0, f32 *, 4), D_800A98A8, temp_fs0);
                    D_80213F0C(&sp60, 0xBF800000, temp_fs0, temp_fs0);
                    D_802114B8(&spE0, arg0 + 0x22C, &sp20);
                    D_802114B8(&spA0, &spE0, &sp60);
                    D_80213A84(&spA0);
                    D_80211B2C(&spA0, arg0 + ((D_800AB9FC << 6) + 0xE70));
                    temp_a1_4 = D_800D7F68;
                    temp_v1_4 = D_800D7F68 + 8;
                    D_800D7F68 = temp_v1_4;
                    M2C_FIELD(temp_a1_4, void **, 4) = (void *) (arg0 + ((D_800AB9FC << 6) + 0xE70));
                    M2C_FIELD(temp_a1_4, s32 *, 0) = 0xDA380007;
                    D_800D7F68 = temp_v1_4 + 8;
                    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xDB0E0000;
                    M2C_FIELD(temp_v1_4, s32 *, 4) = (s32) sp124;
                    func_80284854(arg0 + 0xDE8, sp124, 0xDA380007);
                    goto block_13;
                }
            } else {
                goto block_14;
            }
        } else {
block_13:
            goto block_14;
        }
    } else {
block_14:
        var_v0_2 = 0xDA380007;
    }
    temp_a0_4 = D_800D7F68;
    temp_t2_3 = D_800D7F68 + 8;
    D_800D7F68 = temp_t2_3;
    M2C_FIELD(temp_a0_4, s32 *, 0) = var_v0_2;
    temp_a2_3 = temp_t2_3 + 8;
    M2C_FIELD(temp_a0_4, void **, 4) = (void *) (arg0 + ((D_800AB9FC << 6) + 0x358));
    D_800D7F68 = temp_a2_3;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xDB0E0000;
    temp_a0_5 = temp_t2_3 + 0x10;
    D_800D7F68 = temp_a0_5;
    M2C_FIELD(temp_t2_3, s32 *, 8) = 0xDC08000A;
    temp_a1_5 = temp_t2_3 + 0x18;
    temp_a3_3 = temp_t2_3 + 0x20;
    temp_t4 = temp_t2_3 + 0x28;
    temp_v1_5 = arg0 + ((D_800AB9FC << 5) + 0x3D8);
    D_800D7F68 = temp_a1_5;
    D_800D7F68 = temp_a3_3;
    D_800D7F68 = temp_t4;
    M2C_FIELD(temp_t2_3, s32 *, 4) = (s32) M2C_FIELD(arg0, u16 *, 0x54);
    M2C_FIELD(temp_a2_3, void **, 4) = temp_v1_5;
    M2C_FIELD(temp_t2_3, s32 *, 0x10) = 0xDC08030A;
    M2C_FIELD(temp_a0_5, void **, 4) = (void *) (temp_v1_5 + 0x10);
    M2C_FIELD(temp_t2_3, s32 *, 0x18) = 0xE7000000;
    M2C_FIELD(temp_a1_5, s32 *, 4) = 0;
    M2C_FIELD(temp_t2_3, s32 *, 0x20) = 0xE3000A01;
    M2C_FIELD(temp_a3_3, s32 *, 4) = 0x100000;
    if (D_800BEE20 != 0) {
        var_v1 = temp_t2_3 + 0x30;
        D_800D7F68 = var_v1;
        M2C_FIELD(temp_t2_3, s32 *, 0x28) = 0xE3001801;
        M2C_FIELD(temp_t4, s32 *, 4) = 0x40;
        var_v0_3 = temp_t2_3 + 0x38;
    } else {
        var_v1 = temp_t2_3 + 0x30;
        D_800D7F68 = var_v1;
        M2C_FIELD(temp_t2_3, s32 *, 0x28) = 0xE3001801;
        var_v0_3 = temp_t2_3 + 0x38;
        M2C_FIELD(temp_t4, s32 *, 4) = 0;
    }
    D_800D7F68 = var_v0_3;
    M2C_FIELD(temp_t2_3, s32 *, 0x30) = 0xE3001A01;
    M2C_FIELD(var_v1, s32 *, 4) = 0x10;
    if (arg0 != &D_800D6538) {
        D_802160C8(arg0, temp_a1_5, temp_a2_3, temp_a3_3);
    }
    temp_a0_6 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_a0_6, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a0_6, s32 *, 4) = 0;
}
