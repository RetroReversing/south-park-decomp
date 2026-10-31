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

extern f32 D_800BEE04;
extern M2C_UNK D_800CB5C0;
extern s8 D_800D77EE;
extern s8 D_8010E814;

s32 func_8040F234(void) {
    if ((D_8010E814 == D_800D77EE) && (M2C_FIELD(&D_800CB5C0, s32 *, 0) == 0)) {
        M2C_FIELD(&D_800CB5C0, s32 *, 0) = 1;
        M2C_FIELD(&D_800CB5C0, f32 *, 4) = (f32) D_800BEE04;
    }
    return 0;
}
