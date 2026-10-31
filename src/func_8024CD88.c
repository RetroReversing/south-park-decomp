/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void func_8024CD88(s32 arg0, void *arg1, f32 arg2) {
    if ((arg2 == 0.0f) || (M2C_FIELD(arg1, f32 *, 0x60) < arg2)) {
        if (M2C_FIELD(arg1, f32 *, 0x60) == 0.0f) {
            M2C_FIELD(arg1, f32 *, 0x3C) = 0.0f;
        }
        M2C_FIELD(arg1, f32 *, 0x60) = arg2;
    }
}
