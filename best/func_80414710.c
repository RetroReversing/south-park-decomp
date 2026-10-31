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

void *D_80210ADC(s32, M2C_UNK);                     /* extern */
s32 D_8021563C();                                   /* extern */
s32 func_8026ACD8(void *, s32, M2C_UNK, s32 *, s32 *); /* extern */

s32 func_80414710(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 sp18;
    s32 sp1C;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0_2 = D_80210ADC(M2C_FIELD(arg0, s32 *, 0x60), 0);
    temp_s1 = M2C_FIELD(temp_v0_2, s32 *, 4);
    temp_s0 = temp_v0_2 + 8;
    temp_s1_2 = D_80210ADC(M2C_FIELD(arg0, s32 *, 0x60), 1) + 8;
    temp_v0 = func_8026ACD8(temp_s0, temp_s1, arg1, &sp18, &sp1C);
    if (temp_v0 != 0) {
        temp_v0_3 = ((sp18 + (D_8021563C() % (s32) (sp1C - (sp18 - 1)))) * 0x14) + temp_s1_2;
        M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0);
        M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(temp_v0_3, s32 *, 4);
        M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(temp_v0_3, s32 *, 8);
        M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0xC);
        M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0x10);
    }
    return temp_v0;
}
