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

s32 D_8021563C();                                   /* extern */
extern f32 D_800AA63C;
extern f32 D_800AA640;

void func_802884B0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0x198) = (f32) ((f32) (D_8021563C() % 30) + D_800AA640 + ((f32) (M2C_FIELD(arg0, u16 *, 0xD8) - 0x65) * D_800AA63C));
}
