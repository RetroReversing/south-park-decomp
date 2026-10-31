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

M2C_UNK *func_80262D5C(void *arg0) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *temp_v1;
    void *temp_a1_3;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (temp_v1 != NULL) {
        temp_a1 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
        if (temp_a1 != NULL) {
            *temp_a1 = M2C_FIELD(temp_v1, M2C_UNK **, 0);
        }
        temp_a1_2 = M2C_FIELD(temp_v1, M2C_UNK **, 0);
        if (temp_a1_2 != NULL) {
            M2C_FIELD(temp_a1_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_v1, M2C_UNK **, 4);
        }
        if (M2C_FIELD(arg0, M2C_UNK **, 0) == temp_v1) {
            M2C_FIELD(arg0, M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(temp_v1, M2C_UNK **, 4);
        }
        if (M2C_FIELD(arg0, M2C_UNK **, 4) == temp_v1) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_v1, M2C_UNK **, 0);
        }
        temp_a1_3 = arg0 + 0xC;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
        if (M2C_FIELD(temp_a1_3, s32 *, 8) == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0xC) = temp_v1;
            M2C_FIELD(temp_a1_3, M2C_UNK **, 4) = temp_v1;
            M2C_FIELD(temp_v1, M2C_UNK **, 0) = NULL;
            M2C_FIELD(temp_v1, M2C_UNK **, 4) = NULL;
        } else {
            M2C_FIELD(temp_v1, M2C_UNK **, 4) = NULL;
            M2C_FIELD(temp_v1, M2C_UNK **, 0) = M2C_FIELD(temp_a1_3, M2C_UNK **, 4);
            M2C_FIELD(M2C_FIELD(temp_a1_3, M2C_UNK **, 4), M2C_UNK **, 4) = temp_v1;
            M2C_FIELD(temp_a1_3, M2C_UNK **, 4) = temp_v1;
        }
        M2C_FIELD(temp_a1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_a1_3, s32 *, 8) + 1);
    }
    return temp_v1;
}
