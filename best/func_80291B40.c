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

u8 func_80291B40(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v1_2;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 var_a0;
    void *temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v1;

    temp_t0 = arg0 + arg1;
    if (M2C_FIELD(temp_t0, u8 *, 0x98) != 0) {
        temp_v1 = arg0 + (arg1 * 4);
        temp_v0 = M2C_FIELD(temp_v1, u8 **, 0x58);
        var_a0 = *temp_v0;
        M2C_FIELD(temp_v1, u8 **, 0x58) = (u8 *) (temp_v0 + 1);
        goto block_5;
    }
    temp_a3 = arg0 + (arg1 * 4);
    temp_a2 = M2C_FIELD(temp_a3, void **, 0x18);
    var_a0 = M2C_FIELD(temp_a2, u8 *, 0);
    M2C_FIELD(temp_a3, void **, 0x18) = (void *) (temp_a2 + 1);
    temp_a1 = var_a0 & 0xFF;
    if (temp_a1 == 0xFE) {
        temp_v1_2 = M2C_FIELD(temp_a2, u8 *, 1) & 0xFF;
        M2C_FIELD(temp_a3, void **, 0x18) = (void *) (temp_a2 + 2);
        if (temp_v1_2 != temp_a1) {
            M2C_FIELD(temp_a3, void **, 0x18) = (void *) (temp_a2 + 3);
            temp_v0_2 = temp_a2 + 4;
            M2C_FIELD(temp_a3, void **, 0x18) = temp_v0_2;
            M2C_FIELD(temp_a3, u8 **, 0x58) = (u8 *) (temp_v0_2 - ((temp_v1_2 << 8) + (M2C_FIELD(temp_a2, u8 *, 2) & 0xFF) + 4));
            M2C_FIELD(temp_t0, u8 *, 0x98) = (u8) M2C_FIELD(temp_a2, u8 *, 3);
            temp_v0_3 = M2C_FIELD(temp_a3, u8 **, 0x58);
            var_a0 = *temp_v0_3;
            M2C_FIELD(temp_a3, u8 **, 0x58) = (u8 *) (temp_v0_3 + 1);
block_5:
            M2C_FIELD(temp_t0, u8 *, 0x98) = (u8) (M2C_FIELD(temp_t0, u8 *, 0x98) - 1);
        }
    }
    return var_a0;
}
