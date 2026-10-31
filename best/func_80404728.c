/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_80264DE8(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_8026624C();                            /* extern */
s32 func_802665C4(void *);                          /* extern */
M2C_UNK func_80266B34(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80268EB0(s32);                         /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
extern f32 D_800ABA00;
extern M2C_UNK D_800BC440;
extern M2C_UNK D_800BC448;
extern f32 D_800BC450;
extern M2C_UNK D_800BF0E0;
extern M2C_UNK D_800BF0EC;
extern M2C_UNK D_800CE611;
extern s32 D_800F1508;
extern s32 D_800F150C;

void func_80404728(void *arg0) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v0;
    u32 temp_v1;
    void *temp_v0_2;

    temp_fv0 = M2C_FIELD(&D_800BF0E0, f32 *, 0) + D_800ABA00;
    M2C_FIELD(&D_800BF0E0, f32 *, 0) = temp_fv0;
    if (M2C_FIELD(&D_800BC440, f32 *, 0) <= temp_fv0) {
        M2C_FIELD(&D_800BF0E0, f32 *, 0) = (f32) (temp_fv0 - M2C_FIELD(&D_800BC440, f32 *, 0));
    }
    D_800F150C = 1;
    temp_v1 = D_800BEE18 - func_802665C4(&D_800BF0E0 + 0xC);
    temp_s2 = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), f32 *, 0xB4) * M2C_FIELD(&D_800BC448, f32 *, 0));
    temp_a0 = (s32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1;
    if (M2C_FIELD(&D_800BF0E0, f32 *, 0) <= M2C_FIELD(&D_800BC440, f32 *, 4)) {
        var_s0 = temp_a0;
        var_v1 = 0;
        if (M2C_FIELD(&D_800BF0E0, s32 *, -4) != 0) {
            do {
                temp_v0 = *(&D_800CE611 + (*(&D_800BF0EC + var_v1) * 2));
                var_v1 += 1;
                var_s0 += temp_v0;
            } while (var_v1 != M2C_FIELD(&D_800BF0E0, s32 *, -4));
        }
        temp_fs0 = M2C_FIELD(arg0, f32 *, 0x34) * (M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(&D_800BC448, f32 *, 4));
        func_80268EB0(M2C_FIELD(&D_800BF0E0, s32 *, -4));
        if (!(D_800BC450 <= temp_fs0)) {
            var_v0 = (s32) temp_fs0 & 0xFF;
        } else {
            var_v0 = ((s32) (temp_fs0 - D_800BC450) | 0x80000000) & 0xFF;
        }
        func_80264DE8(var_s0, temp_s2 + 0x10, var_s0 + 0xC, temp_s2 + 0x12, var_v0);
    }
    func_8026624C();
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x3C);
    D_800F1508 = 1;
    D_800F150C = 1;
    func_80269010(M2C_FIELD(temp_v0_2, f32 *, 0xB0), M2C_FIELD(temp_v0_2, f32 *, 0xB4));
    func_80266B34(&D_800BF0EC, (s32) (D_800BEE18 + ((u32) D_800BEE18 >> 0x1F)) >> 1, temp_s2, 0xFF);
}
