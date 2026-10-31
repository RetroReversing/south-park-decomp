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

void *D_80203B70(M2C_UNK *, void *);                /* extern */
extern M2C_UNK D_800CCA80;

s32 func_802576E0(void *arg0) {
    s32 var_v0;
    void *temp_a1;
    void *temp_v0;

    temp_a1 = M2C_FIELD(arg0, void **, 0x10);
    var_v0 = 0;
    if ((temp_a1 != NULL) && (!(M2C_FIELD(temp_a1, u16 *, 2) & 1) || ((temp_v0 = D_80203B70(&D_800CCA80, temp_a1), var_v0 = 0, (temp_v0 != NULL)) && (var_v0 = 0, ((M2C_FIELD(temp_v0, s32 *, 0x44) & 0x01000000) != 0)) && (var_v0 = 1, !(M2C_FIELD(arg0, f32 *, 8) <= M2C_FIELD(temp_v0, f32 *, 0x20)))))) {
        var_v0 = 0;
    }
    return var_v0;
}
