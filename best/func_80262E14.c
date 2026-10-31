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

void func_80262E14(void *arg0, void *arg1) {
    void **temp_v1;
    void *temp_a2;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg1, void ***, 4);
    temp_a2 = arg0 + 0xC;
    if (temp_v1 != NULL) {
        *temp_v1 = M2C_FIELD(arg1, void **, 0);
    }
    temp_v1_2 = M2C_FIELD(arg1, void **, 0);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    if (M2C_FIELD(arg0, void ***, 0xC) == arg1) {
        M2C_FIELD(arg0, void ***, 0xC) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    if (M2C_FIELD(temp_a2, void **, 4) == arg1) {
        M2C_FIELD(temp_a2, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
    }
    M2C_FIELD(temp_a2, s32 *, 8) = (s32) (M2C_FIELD(temp_a2, s32 *, 8) - 1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg0, void **, 4) = arg1;
        M2C_FIELD(arg1, void **, 0) = NULL;
        M2C_FIELD(arg1, void ***, 4) = NULL;
    } else {
        M2C_FIELD(arg1, void ***, 4) = NULL;
        M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 4) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
