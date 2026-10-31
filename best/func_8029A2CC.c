/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern f32 D_800AB028;

void func_8029A2CC(f64 *arg0, s32 *arg1) {
    f32 temp_fv0;
    char *var_a2;
    char *var_t2;
    char *var_t0;
    s32 var_a3;
    s32 var_t3;
    char *var_t1;
    u32 temp_a1;

    var_t0 = arg1;
    var_t1 = var_t0 + 0x20;
    var_t3 = 0;
    var_t2 = arg0;
    do {
        var_a3 = 0;
        var_a2 = var_t2;
loop_2:
        temp_a1 = *(u32 *)var_t1;
        var_t1 += 4;
        temp_fv0 = (f32) (((*(s32 *)var_t0 << 0x10) & 0xFFFF0000) | (temp_a1 & 0xFFFF)) * D_800AB028;
        var_t0 += 4;
        var_a3 += 1;
        *(f64 *)var_a2 = M2C_BITWISE(f64, temp_fv0);
        var_a2 += 8;
        if (var_a3 < 2) {
            goto loop_2;
        }
        var_t3 += 1;
        var_t2 += 0x10;
    } while (var_t3 < 4);
}
