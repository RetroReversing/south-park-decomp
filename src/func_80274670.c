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

M2C_UNK func_80274198(s32);                         /* extern */
extern s32 D_800B2160;

void func_80274670(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x14);
    if (var_s0 != NULL) {
        do {
            func_80274198(M2C_FIELD(var_s0, s32 *, 8));
            temp_v0 = M2C_FIELD(var_s0, s32 *, 8);
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            D_800B2160 = temp_v0;
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}
