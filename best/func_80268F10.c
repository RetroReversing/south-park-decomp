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

extern void *D_800D7F68;

void func_80268F10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_t4;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t3;

    var_a3 = arg3;
    var_t4 = arg2;
    temp_t1 = D_800D7F68;
    temp_t3 = D_800D7F68 + 8;
    D_800D7F68 = temp_t3;
    M2C_FIELD(temp_t1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_t1, s32 *, 4) = 0;
    temp_t1_2 = temp_t3 + 8;
    D_800D7F68 = temp_t1_2;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xFA00FFFF;
    M2C_FIELD(temp_t3, s32 *, 4) = (s32) ((arg4 << 0x18) | ((arg5 & 0xFF) << 0x10) | ((arg6 & 0xFF) << 8) | (arg7 & 0xFF));
    D_800D7F68 = temp_t3 + 0x10;
    if (var_t4 < 0) {
        var_t4 = 0;
    }
    if (var_a3 < 0) {
        var_a3 = 0;
    }
    var_a0 = arg0;
    M2C_FIELD(temp_t3, s32 *, 8) = (s32) (((var_t4 & 0x3FF) << 0xE) | (((var_a3 & 0x3FF) * 4) | 0xF6000000));
    if (var_a0 < 0) {
        var_a0 = 0;
    }
    var_a1 = arg1;
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    M2C_FIELD(temp_t1_2, s32 *, 4) = (s32) (((var_a0 & 0x3FF) << 0xE) | ((var_a1 & 0x3FF) * 4));
}
