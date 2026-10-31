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

void *__allocParam();                              /* extern */
s32 func_80297288(void *, M2C_UNK, s32);            /* extern */

void func_80296A50(void *arg0, void *arg1, s16 arg2, M2C_UNK arg3) {
    s32 temp_a2;
    void *temp_a0;
    void *temp_v0;

    if (M2C_FIELD(arg1, void **, 8) != NULL) {
        temp_v0 = __allocParam();
        if (temp_v0 != NULL) {
            temp_a2 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0xD8);
            M2C_FIELD(temp_v0, s16 *, 8) = 0xB;
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) arg2;
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a2);
            M2C_FIELD(temp_v0, s32 *, 0x10) = func_80297288(arg0, arg3, temp_a2);
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            temp_a0 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC);
            M2C_FIELD(temp_a0, M2C_UNK (**)(void *, M2C_UNK, void *), 8)(temp_a0, 3, temp_v0);
        }
    }
}
