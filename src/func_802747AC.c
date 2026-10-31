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

M2C_UNK D_8021E76C(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
M2C_UNK func_80274198(s32);                         /* extern */

void func_802747AC(void *arg0) {
    void *temp_s0;
    void *var_s1;

    var_s1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_s1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_s1, void **, 4);
            func_80274198(M2C_FIELD(var_s1, s32 *, 8));
            M2C_FIELD(var_s1, s32 *, 0xC) = -1;
            M2C_FIELD(var_s1, s32 *, 8) = -1;
            D_8021E930(arg0 + 0x14, var_s1);
            D_8021E76C(arg0, var_s1);
            var_s1 = temp_s0;
        } while (var_s1 != NULL);
    }
}
