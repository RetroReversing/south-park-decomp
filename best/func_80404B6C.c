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

f32 D_80299AE8(f32);                                /* extern */
M2C_UNK func_8026624C();                            /* extern */
M2C_UNK func_80266B34(u8 *, s32, s32, M2C_UNK);     /* extern */
M2C_UNK func_8026798C(M2C_UNK, M2C_UNK, s16, s16, f32, f32, s32); /* extern */
M2C_UNK func_80268E18(M2C_UNK, M2C_UNK, s32 *, s32 *); /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
M2C_UNK func_80269028(M2C_UNK);                     /* extern */
M2C_UNK func_80404728(void *);                      /* extern */
extern f32 D_800BC454;
extern M2C_UNK D_800BC458;
extern M2C_UNK D_800BC460;
extern f32 D_800BC468;
extern f32 D_800BC46C;
extern s32 D_800BF0D8;
extern M2C_UNK D_800BF100;
extern s32 D_800F1508;
extern s32 D_800F150C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x50, 0x54, 0x58, 0x5c], gap at: 0x44. */
void func_80404B6C(void *arg0, s32 arg1) {
    u8 sp20;
    s8 sp21;
    s32 sp28;
    s32 sp2C;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fv1f;
    s32 temp_ft0;
    s32 temp_ft0_2;
    s32 temp_ft0_3;
    s32 temp_s0_2;
    u32 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp28 = 0;
    sp2C = 0;
    func_80269028(0xFF);
    func_80268E18(0x3F2, 0, &sp28, &sp2C);
    temp_v0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_fs1 = D_800BC454;
    temp_ft0 = (s32) ((f32) sp28 * M2C_FIELD(temp_v0, f32 *, 0xB0));
    temp_s0 = D_800BEE18 - temp_ft0;
    sp28 = temp_ft0;
    temp_ft0_2 = (s32) ((f32) sp2C * M2C_FIELD(temp_v0, f32 *, 0xB4));
    sp2C = temp_ft0_2;
    temp_fs0 = (f32) (D_800BEE1C - temp_ft0_2);
    temp_fs0f = (f32) D_800BEE1C;
    temp_s0_2 = (s32) (temp_s0 + (temp_s0 >> 0x1F)) >> 1;
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x3C);
    temp_fv1f = M2C_FIELD(temp_v0_2, f32 *, 0xB0);
    temp_ft0_3 = (s32) (temp_fs0f + ((D_80299AE8((temp_fs1 - (M2C_FIELD(arg0, f32 *, 0x34) * M2C_FIELD(arg0, f32 *, 0x38))) * M2C_FIELD(&D_800BC458, f32 *, 0)) + temp_fs1) * M2C_FIELD(&D_800BC458, f32 *, 4) * (temp_fs0 - temp_fs0f)));
    temp_fs0_2 = (f32) temp_ft0_3;
    func_8026798C(0x3F2, 1, (s16) (s32) ((f32) ((s32) (D_800BEE18 + ((u32) D_800BEE18 >> 0x1F)) >> 1) - (temp_fv1f * M2C_FIELD(&D_800BC460, f32 *, 0))), (s16) (s32) (temp_fs0_2 + (M2C_FIELD(temp_v0_2, f32 *, 0xB4) * M2C_FIELD(&D_800BC460, f32 *, 4))), temp_fv1f, M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), f32 *, 0xB4), 0);
    func_8026798C(0x3F2, 0, (s16) temp_s0_2, (s16) temp_ft0_3, M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), f32 *, 0xB0), M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), f32 *, 0xB4), 0);
    sp21 = 0;
    sp20 = *(&D_800BF100 + D_800BF0D8);
    func_8026624C();
    temp_v0_3 = M2C_FIELD(arg0, void **, 0x3C);
    D_800F1508 = 1;
    D_800F150C = 4;
    func_80269010(M2C_FIELD(temp_v0_3, f32 *, 0xB0) * D_800BC468, M2C_FIELD(temp_v0_3, f32 *, 0xB4) * D_800BC468);
    func_80266B34(&sp20, (s32) (D_800BEE18 + ((u32) D_800BEE18 >> 0x1F)) >> 1, (s32) (temp_fs0_2 + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), f32 *, 0xB4) * D_800BC46C)), 0xFF);
    if (arg1 != 0) {
        func_80404728(arg0);
    }
}
