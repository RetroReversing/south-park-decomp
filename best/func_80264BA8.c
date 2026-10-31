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

void func_80264BA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a3;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;

    var_t4 = arg2;
    temp_a3 = D_800D7F68;
    temp_t1 = D_800D7F68 + 8;
    D_800D7F68 = temp_t1;
    M2C_FIELD(temp_a3, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a3, s32 *, 4) = 0;
    temp_a3_2 = temp_t1 + 8;
    D_800D7F68 = temp_a3_2;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xFA00FFFF;
    temp_t0 = temp_t1 + 0x10;
    M2C_FIELD(temp_t1, s32 *, 4) = (s32) ((arg5 << 0x18) | ((arg6 & 0xFF) << 0x10) | ((arg7 & 0xFF) << 8) | (arg8 & 0xFF));
    D_800D7F68 = temp_t0;
    if (arg2 < 0) {
        var_t4 = 0;
    }
    var_v1 = arg1 + arg4;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    M2C_FIELD(temp_t1, s32 *, 8) = (s32) (((var_t4 & 0x3FF) << 0xE) | (((var_v1 & 0x3FF) * 4) | 0xF6000000));
    var_v0 = arg0;
    if (arg0 < 0) {
        var_v0 = 0;
    }
    var_v1_2 = arg1;
    if (arg1 < 0) {
        var_v1_2 = 0;
    }
    var_a1 = arg2;
    M2C_FIELD(temp_a3_2, s32 *, 4) = (s32) (((var_v0 & 0x3FF) << 0xE) | ((var_v1_2 & 0x3FF) * 4));
    temp_a3_3 = temp_t1 + 0x18;
    D_800D7F68 = temp_a3_3;
    if (arg2 < 0) {
        var_a1 = 0;
    }
    var_v1_3 = arg3;
    if (arg3 < 0) {
        var_v1_3 = 0;
    }
    M2C_FIELD(temp_t1, s32 *, 0x10) = (s32) (((var_a1 & 0x3FF) << 0xE) | (((var_v1_3 & 0x3FF) * 4) | 0xF6000000));
    var_v0_2 = arg0;
    if (arg0 < 0) {
        var_v0_2 = 0;
    }
    var_v1_4 = arg3 - arg4;
    if (var_v1_4 < 0) {
        var_v1_4 = 0;
    }
    var_a0 = arg0 + arg4;
    M2C_FIELD(temp_t0, s32 *, 4) = (s32) (((var_v0_2 & 0x3FF) << 0xE) | ((var_v1_4 & 0x3FF) * 4));
    temp_t0_2 = temp_t1 + 0x20;
    D_800D7F68 = temp_t0_2;
    if (var_a0 < 0) {
        var_a0 = 0;
    }
    var_v1_5 = arg3 - arg4;
    if (var_v1_5 < 0) {
        var_v1_5 = 0;
    }
    var_a0_2 = arg0;
    M2C_FIELD(temp_t1, s32 *, 0x18) = (s32) (((var_a0 & 0x3FF) << 0xE) | (((var_v1_5 & 0x3FF) * 4) | 0xF6000000));
    if (var_a0_2 < 0) {
        var_a0_2 = 0;
    }
    var_v1_6 = arg1 + arg4;
    if (var_v1_6 < 0) {
        var_v1_6 = 0;
    }
    var_a1_2 = arg2;
    M2C_FIELD(temp_a3_3, s32 *, 4) = (s32) (((var_a0_2 & 0x3FF) << 0xE) | ((var_v1_6 & 0x3FF) * 4));
    D_800D7F68 = temp_t1 + 0x28;
    if (arg2 < 0) {
        var_a1_2 = 0;
    }
    var_a3 = arg3 - arg4;
    if (var_a3 < 0) {
        var_a3 = 0;
    }
    M2C_FIELD(temp_t1, s32 *, 0x20) = (s32) (((var_a1_2 & 0x3FF) << 0xE) | (((var_a3 & 0x3FF) * 4) | 0xF6000000));
    var_v0_3 = arg2 - arg4;
    if (var_v0_3 < 0) {
        var_v0_3 = 0;
    }
    var_a1_3 = arg1 + arg4;
    if (var_a1_3 < 0) {
        var_a1_3 = 0;
    }
    M2C_FIELD(temp_t0_2, s32 *, 4) = (s32) (((var_v0_3 & 0x3FF) << 0xE) | ((var_a1_3 & 0x3FF) * 4));
}
