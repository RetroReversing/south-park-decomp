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
s16 func_80403F84(s32);                             /* extern */
M2C_UNK func_8040B870();                            /* extern */
extern f32 D_800BC8B0;
extern s32 D_800BF354;
extern M2C_UNK D_800CC760;
extern M2C_UNK D_8010E2F0;
extern s32 D_8010E4F0;
extern s32 D_8010E50C;

void func_8040BDE8(void *arg0) {
    s16 temp_v0;

    func_8040B870();
    D_800BF354 = 0;
    D_8010E50C = 0;
    M2C_FIELD(&D_8010E2F0, f32 *, 4) = (f32) D_800BC8B0;
    temp_v0 = func_80403F84(D_8020982C(&D_800CC760) + 0x528);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) D_8010E4F0;
    M2C_FIELD(&D_8010E2F0, s16 *, 0) = temp_v0;
}
