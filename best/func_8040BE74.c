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

s32 D_8020982C(M2C_UNK *);                          /* extern */
M2C_UNK D_80209C78(M2C_UNK *, s32);                 /* extern */
M2C_UNK func_8025F874(s32, M2C_UNK);                /* extern */
M2C_UNK func_80403338(M2C_UNK, s32);                /* extern */
extern f32 D_800ABA00;
extern M2C_UNK D_800BC8B0;
extern s32 D_800BF350;
extern s32 D_800BF354;
extern M2C_UNK D_800CC760;
extern s32 D_800D7910;
extern M2C_UNK D_8010E2F0;
extern s32 D_8010E4DC;
extern s32 D_8010E4E0;
extern s32 D_8010E4F8;
extern s32 D_8010E50C;

s32 func_8040BE74(s32 arg0, M2C_UNK arg1) {
    f32 temp_fv0f;
    s32 var_a1;

    if (D_800BF350 == 0) {
        temp_fv0f = M2C_FIELD(&D_8010E2F0, f32 *, 4) - (D_800ABA00 * M2C_FIELD(&D_800BC8B0, f32 *, 4));
        M2C_FIELD(&D_8010E2F0, f32 *, 4) = temp_fv0f;
        if (temp_fv0f <= 0.0f) {
            M2C_FIELD(&D_8010E2F0, f32 *, 4) = 0.0f;
            D_800D7910 = 0;
            if (D_8010E4E0 != 0) {
                func_8025F874(D_8020982C(&D_800CC760), 0x3E99999A);
            }
            if (D_800BF354 != 0) {
                var_a1 = D_8010E4DC;
                goto block_10;
            }
            var_a1 = D_8010E4F8;
            if (var_a1 == -1) {
                if (D_8010E50C == 0) {
                    func_80403338(arg1, arg0);
                }
                D_8010E50C = 1;
                return 1;
            }
block_10:
            D_80209C78(&D_800CC760, var_a1);
            return 1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
