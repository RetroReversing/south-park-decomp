/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

void func_8026DDC8(void *arg0, u16 arg1) {
    u16 temp_s0;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0);
    if (temp_s0 == (arg1 & 0xFFFF)) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 2);
        if (!(temp_v1 & 4)) {
            temp_a0 = M2C_FIELD(arg0, void **, 0x10);
            M2C_FIELD(arg0, u16 *, 2) = (u16) (temp_v1 | 4);
            if (temp_a0 != NULL) {
                func_8026DDC8(temp_a0, temp_s0);
            }
            temp_a0_2 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_a0_2 != NULL) {
                func_8026DDC8(temp_a0_2, temp_s0);
            }
            temp_a0_3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_a0_3 != NULL) {
                func_8026DDC8(temp_a0_3, temp_s0);
            }
        }
    }
}
