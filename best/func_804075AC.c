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

M2C_UNK func_80266380();                            /* extern */
M2C_UNK func_80266D74(M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80268FF8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80269010(f32, f32);                    /* extern */
M2C_UNK func_80402948();                            /* extern */
extern f32 D_800BC684;
extern M2C_UNK D_800BC688;
extern M2C_UNK D_800BC690;
extern f32 D_800BC698;
extern f32 D_800BC69C;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800F150C;
extern M2C_UNK D_8010DB58;
extern M2C_UNK D_8010DB88;
extern M2C_UNK D_8010DBB8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x30, 0x34, 0x40, 0x44], gap at: 0x24. */
void func_804075AC(void *arg0) {
    M2C_UNK *var_s2;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 var_fs0f;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s3;

    func_80402948();
    var_s3 = 0;
    func_80266380();
    D_800F150C = 3;
    func_80268FF8(0x1E, 0x14, 0x1E);
    var_s2 = &D_8010DBB8;
    var_fs0f = M2C_FIELD(&D_800BC688, f32 *, 4);
    temp_fs1f = M2C_FIELD(&D_800BC690, f32 *, 0);
    temp_fs1 = M2C_FIELD(&D_800BC690, f32 *, 4);
    temp_fs0 = D_800BC698;
    D_800F14F0 = 0;
    D_800F1508 = 1;
    var_s0 = 0;
    temp_s1 = (s32) (M2C_FIELD(arg0, f32 *, 0x34) * (M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(&D_800BC688, f32 *, 0)));
    func_80269010(temp_fs0, D_800BC684);
    func_80266D74(&D_8010DB58, 0, 0x42, temp_s1);
    func_80266D74(&D_8010DB88, 0, 0x56, temp_s1);
    func_80269010(temp_fs0, D_800BC69C);
    do {
        func_80266D74(var_s2, 0, (s32) var_fs0f, temp_s1);
        if (*(&D_8010DBB8 + var_s0) == 0) {
            var_fs0f += temp_fs1;
        } else {
            var_fs0f += temp_fs1f;
        }
        var_s2 += 0x30;
        var_s3 += 1;
        var_s0 += 0x30;
    } while (var_s3 < 7);
}
