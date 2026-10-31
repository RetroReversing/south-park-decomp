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

M2C_UNK func_80262C28(s32, void *);                 /* extern */
M2C_UNK func_80262C70(void *, void *);              /* extern */

void func_802623C4(s32 arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) (M2C_FIELD(arg1, f32 *, 0x4C) - M2C_FIELD(arg2, f32 *, 0xAC));
    func_80262C70(arg1 + 0x40, arg2);
    func_80262C28(arg0 + 0x6A88, arg2);
}
