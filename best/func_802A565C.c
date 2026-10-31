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

extern M2C_UNK func_80000464;

void func_802A565C(void) {
    void *temp_t1;
    void *var_t0;

    var_t0 = &func_80000464 + 0x1B8C;
    temp_t1 = var_t0;
    do {
        M2C_ERROR(/* unknown instruction: cache 0x1, ($t0) */);
        var_t0 += 0x10;
    } while (var_t0 != temp_t1);
}
