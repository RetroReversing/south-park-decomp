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

M2C_UNK D_80209C78(M2C_UNK *, M2C_UNK);             /* extern */
M2C_UNK func_80403D34(M2C_UNK, s32, M2C_UNK *);     /* extern */
s32 func_80403FBC(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK D_415D90;
extern M2C_UNK D_416EE0;
extern f32 D_800ABA00;
extern f32 D_800BC650;
extern s32 D_800BF2C0;
extern s32 D_800BF2C4;
extern M2C_UNK D_800CC760;
extern f32 D_8010DB50;

s32 func_804072B8(s32 arg0, M2C_UNK arg1) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 0;
    if (func_80403FBC(arg1, &D_415D90) == 0) {
        temp_fv0 = D_8010DB50 - D_800ABA00;
        D_8010DB50 = temp_fv0;
        if (temp_fv0 < 0.0f) {
            temp_s0 = D_800BF2C0 + 1;
            D_8010DB50 = D_800BC650;
            D_800BF2C0 = temp_s0;
            if (temp_s0 == 1) {
                func_80403D34(arg1, arg0, &D_416EE0);
                D_800BF2C4 = temp_s0;
                return 1;
            }
            var_v0 = 1;
            if (temp_s0 == 2) {
                D_800BF2C0 = 0;
                D_80209C78(&D_800CC760, 4);
                var_v0 = 1;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
