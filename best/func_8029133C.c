/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8029DDA0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK *D_800F5FF0;

void func_8029133C(void *arg0) {
    M2C_UNK *temp_t0;
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s16 var_a1;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_a2_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    var_v1 = temp_v0 + 0xFFF;
    var_a1 = 0;
    if (var_v1 < 0) {
        var_v1 = temp_v0 + 0x1FFE;
    }
    var_a2 = &D_800F5FF0;
    var_a3 = NULL;
    temp_t1 = var_v1 >> 0xC;
    temp_t0 = M2C_FIELD(arg0, M2C_UNK **, 8);
    M2C_FIELD(temp_t0, s8 **, 0x10) = (s8 *) (temp_t0 + 0x18);
    temp_t2 = (temp_t1 + 1) & ~1;
    if (&D_800F5FF0 != NULL) {
        do {
            var_a3 = var_a2;
            var_a2 = M2C_FIELD(var_a3, M2C_UNK **, 0);
            var_a1 = M2C_FIELD(var_a3, u16 *, 4) + M2C_FIELD(var_a3, u16 *, 6);
        } while (var_a2 != NULL);
    }
    if (var_a1 & 1) {
        var_a1 += 1;
    }
    var_v1_2 = temp_t2 - 1;
    M2C_FIELD(temp_t0, s16 *, 4) = var_a1;
    M2C_FIELD(temp_t0, s16 *, 6) = (s16) temp_t1;
    M2C_FIELD(temp_t0, M2C_UNK **, 0) = NULL;
    *var_a3 = temp_t0;
    var_a2_2 = M2C_FIELD(temp_t0, s8 **, 0x10);
    if (temp_t2 != 0) {
        do {
            *var_a2_2 = 0xFF;
            var_a2_2 += 1;
            var_v1_2 -= 1;
        } while (var_v1_2 != 0);
    }
    func_8029DDA0(M2C_FIELD(arg0, s32 *, 0xC), var_a1 << 0xC, 1, 0xFF);
}
