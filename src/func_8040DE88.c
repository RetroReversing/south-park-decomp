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

s32 func_80403338();
extern f32 D_800BE350;
extern s32 D_800BF2C4;
extern f32 D_8010E7BC;

s32 func_8040DE88(s32 arg0, s32 arg1, s32 arg2) {
    D_8010E7BC = D_800BE350;
    func_80403338(arg2);
    D_800BF2C4 = 0;
    return 1;
}
