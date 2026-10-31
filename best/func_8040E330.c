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

void *D_8020982C(M2C_UNK *);                        /* extern */
M2C_UNK func_8026624C();                            /* extern */
M2C_UNK func_80266B34(s32, s32, s32, s32);          /* extern */
M2C_UNK func_8026798C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, s32); /* extern */
M2C_UNK func_80268EB0();                            /* extern */
M2C_UNK func_80268F10(M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80268FF8(s32, s32, s32);               /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
M2C_UNK func_80269028(M2C_UNK);                     /* extern */
extern f32 D_800BEDD8;
extern f32 D_800BEDDC;
extern M2C_UNK D_800BEDE0;
extern M2C_UNK D_800CA5A0;
extern M2C_UNK D_800CA5A8;
extern M2C_UNK D_800CC760;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800F150C;
extern M2C_UNK D_8010E7C8;
extern s32 D_8010E7D0;
extern u8 D_8010E7DB;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x40, 0x44, 0x50, 0x54], gap at: 0x38. */
void func_8040E330(void) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 var_fa0;
    f32 var_fa1;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    void *temp_s0;
    void *var_s1;

    temp_s0 = D_8020982C(&D_800CC760);
    temp_fs1f = M2C_FIELD(temp_s0, f32 *, 0xB0);
    temp_fs0 = M2C_FIELD(temp_s0, f32 *, 0xB4);
    func_80269028(0xFF);
    func_8026798C(0x406, 0, 0, 0, M2C_FIELD(temp_s0, f32 *, 0xB0), M2C_FIELD(temp_s0, f32 *, 0xB4), 0);
    func_80268EB0();
    func_80268F10(0, 0, D_800BEE18, D_800BEE1C, 0, 0, 0x10, (s32) D_8010E7DB);
    if (D_8010E7D0 == 0) {
        var_s3 = 0;
        func_8026624C();
        var_s0 = M2C_FIELD(&D_8010E7C8, s32 **, 0);
        var_v1 = *var_s0;
        D_800F14F0 = 1;
        D_800F1508 = 1;
        var_a1 = 0;
        if (!(var_v1 & 2)) {
            do {
                temp_v0 = var_v1 & 0xC;
                var_a1 = (s32) ((f32) var_a1 + (M2C_FIELD(var_s0, f32 *, 4) * temp_fs0));
                if ((temp_v0 == 4) || (temp_v0 == 8)) {
                    var_a1 = (s32) ((f32) var_a1 + (temp_fs0 * D_800BEDD8));
                }
                var_s0 += 0x14;
                var_v1 = *var_s0;
            } while (!(var_v1 & 2));
        }
        var_s0_2 = M2C_FIELD(&D_8010E7C8, s32 **, 0);
        var_s2 = ((s32) D_800BEE1C / 2) - (var_a1 / 2);
        if (!(*var_s0_2 & 2)) {
            var_s1 = var_s0_2 + 0x10;
            temp_fs1 = D_800BEDDC;
            temp_fs0f = M2C_FIELD(&D_800BEDE0, f32 *, 0);
            do {
                temp_a1 = (M2C_FIELD(var_s1, s32 *, -4) % 11) * 0x10;
                var_s2 = (s32) ((f32) (var_s2 + var_s3) + (M2C_FIELD(var_s1, f32 *, -0xC) * temp_fs0));
                func_80268FF8((s32) *(&D_800CA5A0 + temp_a1), (s32) *(&D_800CA5A0 + 4 + temp_a1), (s32) *(&D_800CA5A8 + temp_a1));
                temp_v1 = *var_s0_2 & 0xC;
                if (temp_v1 != 4) {
                    if (temp_v1 != 8) {
                        var_s0_2 += 0x14;
                    } else {
                        var_fa0 = M2C_FIELD(var_s1, f32 *, -8) * temp_fs1f;
                        var_fa1 = temp_fs0;
                        goto block_14;
                    }
                } else {
                    var_fa1 = temp_fs0 * temp_fs1;
                    var_fa0 = M2C_FIELD(var_s1, f32 *, -8) * (temp_fs1f * temp_fs1);
block_14:
                    D_800F150C = 1;
                    func_80269010(var_fa0, var_fa1);
                    var_s3 = (s32) (temp_fs0 * temp_fs0f);
                    var_s0_2 += 0x14;
                }
                func_80266B34(M2C_FIELD(var_s1, s32 *, 0), (s32) (D_800BEE18 + ((u32) D_800BEE18 >> 0x1F)) >> 1, var_s2, (s32) (M2C_FIELD(&D_8010E7C8, f32 *, 4) * M2C_FIELD(&D_800BEDE0, f32 *, 4)));
                var_s1 += 0x14;
            } while (!(*var_s0_2 & 2));
        }
    }
}
