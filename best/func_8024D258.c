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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 D_8023E95C(s32);                        /* extern */

void func_8024D258(void *arg0, void *arg1, void *arg2) {
    s32 var_a2;
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v1_2;
    u16 var_v0_2;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14);
    var_v0 = temp_v1 & 2;
    if (((temp_v1 & 1) || (var_v0 = temp_v1 & 2, (((((u32) M2C_FIELD(arg2, u32 *, 0xC) >> 0x15) ^ 1) & 1) == 0))) && ((var_v0 != 0) || !(M2C_FIELD(arg2, u32 *, 0xC) & 0x200000))) {
        temp_v1_2 = M2C_FIELD(arg1, u16 *, 4);
        if ((temp_v1_2 - M2C_FIELD(arg2, s32 *, 4)) >= 0) {
            var_v0_2 = temp_v1_2 - M2C_FIELD(arg2, u16 *, 6);
        } else {
            var_v0_2 = 0;
        }
        M2C_FIELD(arg1, u16 *, 4) = var_v0_2;
        if (!(var_v0_2 & 0xFFFF)) {
            var_a2 = 1;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14) & 0x40) {
                var_a2 = 2;
            }
            D_8023E95C(var_a2);
        }
    }
}
