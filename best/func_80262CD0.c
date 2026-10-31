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

void func_80262CD0(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_v1;
    s32 *var_a1;
    s32 var_t0;
    void *temp_v0;

    var_v1 = arg1;
    var_t0 = arg3 - 1;
    temp_v0 = arg0 + 0xC;
    M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    if (arg3 != 0) {
        var_a1 = arg1 + 4;
        do {
            if (M2C_FIELD(arg0, s32 *, 8) == 0) {
                M2C_FIELD(arg0, M2C_UNK **, 0) = var_v1;
                M2C_FIELD(arg0, M2C_UNK **, 4) = var_v1;
                *var_v1 = NULL;
                *var_a1 = 0;
            } else {
                *var_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
                *var_a1 = 0;
                M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 4), M2C_UNK **, 4) = var_v1;
                M2C_FIELD(arg0, M2C_UNK **, 4) = var_v1;
            }
            var_a1 += arg2;
            var_v1 += arg2;
            var_t0 -= 1;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        } while (var_t0 != -1);
    }
}
