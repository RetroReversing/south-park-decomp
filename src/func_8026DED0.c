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

void func_8026DED0(void *arg0, f32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (M2C_FIELD(arg0, u16 *, 0) == (arg2 & 0xFFFF)) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 4) == arg1) {
            if ((M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 4) != arg1) || (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 4) != arg1)) {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 4) = arg1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 4) = arg1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 4) = arg1;
            temp_a0 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_a0 != NULL) {
                func_8026DED0(temp_a0, arg1, arg2 & 0xFFFF);
            }
            temp_a0_2 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_a0_2 != NULL) {
                func_8026DED0(temp_a0_2, arg1, arg2 & 0xFFFF);
            }
            temp_a0_3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_a0_3 != NULL) {
                func_8026DED0(temp_a0_3, arg1, arg2 & 0xFFFF);
            }
        }
    }
}
