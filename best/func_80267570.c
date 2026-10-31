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

void func_80267570(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_t1;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_v1;
    void *temp_v1_2;

    var_t1 = arg1;
    temp_a1 = D_800D7F68;
    temp_v1 = D_800D7F68 + 8;
    D_800D7F68 = temp_v1;
    M2C_FIELD(temp_a1, s32 *, 4) = arg0;
    temp_a0 = temp_v1 + 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xFD900000;
    temp_a3 = temp_v1 + 0x10;
    D_800D7F68 = temp_a0;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xF5900000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x07000000;
    D_800D7F68 = temp_a3;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    D_800D7F68 = temp_v1 + 0x18;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0xF3000000;
    if (arg1 < 0) {
        var_t1 = arg1 + 0xF;
    }
    temp_a1_2 = var_t1 >> 4;
    var_v1 = 0x800;
    if (temp_a1_2 > 0) {
        var_v1 = temp_a1_2 + 0x7FF;
    }
    var_a0 = ((s32) ((arg1 * arg2) + 3) >> 2) - 1;
    if (var_a0 >= 0x800) {
        var_a0 = 0x7FF;
    }
    temp_a0_2 = ((var_a0 & 0xFFF) << 0xC) | 0x07000000;
    if (temp_a1_2 > 0) {
        M2C_FIELD(temp_a3, s32 *, 4) = (s32) (temp_a0_2 | ((var_v1 / temp_a1_2) & 0xFFF));
    } else {
        M2C_FIELD(temp_a3, s32 *, 4) = (s32) (temp_a0_2 | (var_v1 & 0xFFF));
    }
    temp_v1_2 = D_800D7F68;
    temp_a0_3 = D_800D7F68 + 8;
    temp_a2 = temp_a0_3 + 8;
    D_800D7F68 = temp_a0_3;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    D_800D7F68 = temp_a2;
    M2C_FIELD(D_800D7F68, s32 *, 8) = (s32) (((((s32) ((arg1 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000);
    M2C_FIELD(temp_a0_3, s32 *, 4) = 0;
    D_800D7F68 = temp_a0_3 + 0x10;
    M2C_FIELD(temp_a0_3, s32 *, 8) = 0xF2000000;
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) (((((arg1 - 1) * 4) & 0xFFF) << 0xC) | (((arg2 - 1) * 4) & 0xFFF));
}
