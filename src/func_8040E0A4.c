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

M2C_UNK func_80403338(M2C_UNK, s32, s32);           /* extern */
extern f32 D_800ABA00;
extern M2C_UNK D_800BE358;
extern s32 D_800BF2C4;
extern s32 D_800D78F0;
extern f32 D_8010E7BC;

s32 func_8040E0A4(s32 arg0, M2C_UNK arg1) {
    f32 temp_fv0;

    if (D_800D78F0 == 0xA) {
        temp_fv0 = D_8010E7BC - D_800ABA00;
        D_8010E7BC = temp_fv0;
        if (temp_fv0 < 0.0f) {
            D_8010E7BC = M2C_FIELD(&D_800BE358, f32 *, 4);
            func_80403338(arg1, arg0, arg0);
            D_800BF2C4 = 0;
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
