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

M2C_UNK *func_80294B3C(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
    if (temp_v1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x6C) = (M2C_UNK *) M2C_FIELD(temp_v1, M2C_UNK **, 0);
        M2C_FIELD(temp_v1, M2C_UNK **, 0) = NULL;
        if (M2C_FIELD(arg0, M2C_UNK **, 0x64) == NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = temp_v1;
        } else {
            *M2C_FIELD(arg0, M2C_UNK **, 0x68) = temp_v1;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = temp_v1;
        M2C_FIELD(temp_v1, s8 *, 0x31) = arg3;
        M2C_FIELD(temp_v1, s8 *, 0x32) = arg1;
        M2C_FIELD(temp_v1, s8 *, 0x33) = arg2;
        M2C_FIELD(temp_v1, M2C_UNK **, 0x14) = temp_v1;
    }
    return temp_v1;
}
