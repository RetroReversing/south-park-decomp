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

M2C_UNK func_80293598(s32, s16);                    /* extern */
extern f32 D_800A9FDC;

void func_80273BC8(void *arg0, f32 arg1) {
    func_80293598(M2C_FIELD(arg0, s32 *, 0x14), (s16) (s32) (arg1 * D_800A9FDC));
    M2C_FIELD(arg0, f32 *, 0x2C) = arg1;
}
