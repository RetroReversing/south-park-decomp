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

void func_80274FC0(void *arg0, s32 arg1) {
    M2C_UNK *temp_a3;
    M2C_UNK *var_a2;
    void *temp_v0;

    var_a2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_v0 = arg0 + 4;
    if (var_a2 != temp_v0) {
        do {
            temp_a3 = M2C_FIELD(var_a2, M2C_UNK **, 4);
            if (M2C_FIELD(var_a2, s32 *, 0xBC) == arg1) {
                M2C_FIELD(M2C_FIELD(var_a2, M2C_UNK **, 0), M2C_UNK **, 4) = temp_a3;
                *M2C_FIELD(var_a2, M2C_UNK **, 4) = M2C_FIELD(var_a2, M2C_UNK **, 0);
                M2C_FIELD(var_a2, M2C_UNK **, 4) = (M2C_UNK *) (arg0 + 0xC4);
                M2C_FIELD(var_a2, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 0xC4);
                M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0xC4), M2C_UNK **, 4) = var_a2;
                M2C_FIELD(arg0, M2C_UNK **, 0xC4) = var_a2;
            }
            var_a2 = temp_a3;
        } while (var_a2 != temp_v0);
    }
}
