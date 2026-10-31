/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

void func_8026D308(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;
    u16 temp_v0;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    M2C_FIELD(var_a0, u16 *, 0) = (u16) M2C_FIELD(var_a1, u16 *, 0);
    var_v1 = 0;
    M2C_FIELD(var_a0, u16 *, 2) = (u16) M2C_FIELD(var_a1, u16 *, 2);
    M2C_FIELD(var_a0, s32 *, 0x1C) = (s32) M2C_FIELD(var_a1, s32 *, 0x10);
    do {
        M2C_FIELD(var_a0, s32 *, 4) = (s32) (arg2 + (M2C_FIELD(var_a1, u16 *, 4) * 0x10));
        temp_v0 = M2C_FIELD(var_a1, u16 *, 0xA);
        if (temp_v0 == 0xFFFF) {
            M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        } else {
            M2C_FIELD(var_a0, s32 *, 0x10) = (s32) (arg4 + (temp_v0 << 5));
        }
        var_a1 += 2;
        var_v1 += 1;
        var_a0 += 4;
    } while (var_v1 < 3);
}
