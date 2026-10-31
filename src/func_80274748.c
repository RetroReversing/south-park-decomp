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

s32 func_80274114(s32);                             /* extern */

void func_80274748(void *arg0) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        var_s0 = M2C_FIELD(arg0, void **, 0x14);
        if (var_s0 != NULL) {
            do {
                if (func_80274114(M2C_FIELD(var_s0, s32 *, 8)) == 0) {
                    M2C_FIELD(var_s0, s32 *, 0xC) = -1;
                    M2C_FIELD(var_s0, s32 *, 8) = -1;
                }
                var_s0 = M2C_FIELD(var_s0, void **, 4);
            } while (var_s0 != NULL);
        }
    }
}
