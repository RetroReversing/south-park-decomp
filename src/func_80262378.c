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

M2C_UNK func_80262C28(s32, s32);                    /* extern */
M2C_UNK func_80262C70(void *, s32);                 /* extern */

s32 func_80262378(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x6A88);
    if (temp_s0 != 0) {
        func_80262C70(arg0 + 0x6A88, temp_s0);
        func_80262C28(arg1 + 0x40, temp_s0);
    }
    return temp_s0;
}
