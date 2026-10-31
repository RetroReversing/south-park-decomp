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

extern M2C_UNK D_800AAD58;

s32 func_80297370(void *arg0, s32 arg1) {
    return (s32) (((f32) arg1 * (f32) M2C_FIELD(arg0, s32 *, 0x44) * M2C_FIELD(&D_800AAD58, f32 *, 0)) + M2C_FIELD(&D_800AAD58, f32 *, 4));
}
