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

M2C_UNK func_8026798C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, s32); /* extern */
M2C_UNK func_80269028(M2C_UNK);                     /* extern */
M2C_UNK func_80402948(void *, M2C_UNK);             /* extern */

void func_80407EC0(void *arg0, M2C_UNK arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    func_80269028(0xFF);
    func_8026798C(0x3FC, 0, 0, 0, M2C_FIELD(temp_s0, f32 *, 0xB0), M2C_FIELD(temp_s0, f32 *, 0xB4), 0);
    func_80402948(arg0, arg1);
}
