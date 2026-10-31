/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_8021E710(s32, void *);                    /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
M2C_UNK func_8026624C();                            /* extern */
M2C_UNK func_80266B34(M2C_UNK *, s32, s32, s32);    /* extern */
M2C_UNK func_80268FF8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
M2C_UNK func_802A08B8(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_800A99D8;
extern M2C_UNK D_800A99E0;
extern M2C_UNK D_800A99E8;
extern M2C_UNK D_800A99F0;
extern f32 D_800A99F8;
extern f32 D_800ABA00;
extern s32 D_800BEE18;
extern u8 D_800D77E8;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800F150C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x80, 0x84, 0x88, 0x8c], gap at: 0x74. */
void func_8025EFB8(s32 arg0, void *arg1) {
    M2C_UNK sp10;
    M2C_UNK *var_a0_2;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 var_fa0;
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fs1;
    f32 var_fv0f;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_s3;
    void *var_a0;
    void *var_s0;

    temp_fs0 = M2C_FIELD(arg1, f32 *, 0x2B0);
    temp_fs1 = M2C_FIELD(arg1, f32 *, 0x2B4);
    func_8026624C();
    D_800F150C = 2;
    D_800F14F0 = 1;
    func_80268FF8(0xC8, 0xC8, 0);
    if (arg1 == (arg0 + 0x40)) {
        D_800F1508 = 2;
        var_fs0f = (f32) D_800BEE18 - (M2C_FIELD(arg1, f32 *, 0xB0) * M2C_FIELD(&D_800A99E0, f32 *, 0));
    } else if (D_800D77E8 != 0) {
        D_800F1508 = 1;
        var_fs0f = temp_fs0 + (M2C_FIELD(arg1, f32 *, 0x2A8) * M2C_FIELD(&D_800A99E8, f32 *, 0));
    } else {
        D_800F1508 = 0;
        var_fs0f = temp_fs0 + (M2C_FIELD(arg1, f32 *, 0xB0) * M2C_FIELD(&D_800A99E0, f32 *, 4));
    }
    if (D_800D77E8 == 0) {
        var_fv0f = M2C_FIELD(&D_800A99E8, f32 *, 4);
    } else {
        var_fv0f = M2C_FIELD(&D_800A99F0, f32 *, 0);
    }
    var_fs0 = temp_fs1 + (M2C_FIELD(arg1, f32 *, 0xB4) * var_fv0f);
    if (D_800D77E8 == 0) {
        var_fa0 = M2C_FIELD(arg1, f32 *, 0xB0);
        var_fs1 = M2C_FIELD(arg1, f32 *, 0xB4);
    } else {
        var_fa0 = M2C_FIELD(arg1, f32 *, 0xB0) * M2C_FIELD(&D_800A99F0, f32 *, 4);
        var_fs1 = M2C_FIELD(arg1, f32 *, 0xB4) * M2C_FIELD(&D_800A99F0, f32 *, 4);
    }
    func_80269010(var_fa0, var_fs1);
    var_s0 = M2C_FIELD(arg1, void **, 0xDD0);
    if (var_s0 != NULL) {
        do {
            temp_s3 = M2C_FIELD(var_s0, void **, 4);
            var_a0 = arg1 + 0xDD0;
            if (M2C_FIELD(var_s0, s32 *, 0x10) != 0) {
                if (M2C_FIELD(var_s0, u8 *, 0x1C) != 0) {
                    func_802A08B8(&sp10, &D_800A99D8, M2C_FIELD(var_s0, M2C_UNK **, 0x20), M2C_FIELD(var_s0, s32 *, 0x18));
                    var_a0_2 = &sp10;
                } else {
                    var_a0_2 = M2C_FIELD(var_s0, M2C_UNK **, 0x20);
                }
                func_80266B34(var_a0_2, (s32) var_fs0f, (s32) var_fs0, M2C_FIELD(var_s0, s32 *, 0x14));
                temp_v1 = M2C_FIELD(var_s0, s32 *, 0x10);
                switch (temp_v1) {                  /* irregular */
                case 1:
                    temp_v0 = M2C_FIELD(var_s0, s32 *, 0x14) + 0x80;
                    M2C_FIELD(var_s0, s32 *, 0x14) = temp_v0;
                    if (temp_v0 >= 0xFF) {
                        M2C_FIELD(var_s0, s32 *, 0x14) = 0xFF;
                        M2C_FIELD(var_s0, s32 *, 0x10) = 2;
                        M2C_FIELD(var_s0, f32 *, 8) = (f32) M2C_FIELD(var_s0, f32 *, 0xC);
                    }
                    break;
                case 2:
                    temp_fv0 = M2C_FIELD(var_s0, f32 *, 8) - D_800ABA00;
                    M2C_FIELD(var_s0, s32 *, 0x14) = 0xFF;
                    M2C_FIELD(var_s0, f32 *, 8) = temp_fv0;
                    if (temp_fv0 < 0.0f) {
                        M2C_FIELD(var_s0, s32 *, 0x10) = 3;
                    }
                    break;
                case 3:
                    temp_v0_2 = M2C_FIELD(var_s0, s32 *, 0x14) - 0x80;
                    M2C_FIELD(var_s0, s32 *, 0x14) = temp_v0_2;
                    if (temp_v0_2 < 0) {
                        M2C_FIELD(var_s0, s32 *, 0x14) = 0;
                        M2C_FIELD(var_s0, s32 *, 0x10) = 0;
                    }
                    break;
                }
                var_a0 = arg1 + 0xDD0;
                if (M2C_FIELD(var_s0, s32 *, 0x10) == 0) {
                    goto block_30;
                }
            } else {
block_30:
                D_8021E930(var_a0, var_s0);
                D_8021E710(arg0 + 0xFFC, var_s0);
            }
            var_s0 = temp_s3;
            var_fs0 += var_fs1 * D_800A99F8;
        } while (var_s0 != NULL);
    }
}
