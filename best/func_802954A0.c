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

s32 func_8029597C();
u8 func_802959D0();

void func_802954A0(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_8029597C();
    M2C_FIELD(arg0, s32 *, 0xC) += temp_v0;
    temp_v0_2 = func_802959D0(arg0);
    if ((temp_v0_2 & 0xFF) == 0xFF) {
        temp_v0_3 = func_802959D0(arg0);
        temp_v1 = temp_v0_3 & 0xFF;
        if (temp_v1 == 0x51) {
            M2C_FIELD(arg1, s16 *, 0) = 3;
            M2C_FIELD(arg1, s32 *, 4) = temp_v0;
            M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
            M2C_FIELD(arg1, u8 *, 9) = temp_v0_3;
            M2C_FIELD(arg1, u8 *, 0xA) = func_802959D0(arg0);
            M2C_FIELD(arg1, u8 *, 0xB) = func_802959D0(arg0);
            M2C_FIELD(arg1, u8 *, 0xC) = func_802959D0(arg0);
            M2C_FIELD(arg1, u8 *, 0xD) = func_802959D0(arg0);
            goto block_7;
        }
        if (temp_v1 != 0x2F) {
            M2C_FIELD(arg0, s16 *, 0x1A) = 0;
            return;
        }
        M2C_FIELD(arg1, s16 *, 0) = 4;
        M2C_FIELD(arg1, s32 *, 4) = temp_v0;
        M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 9) = temp_v0_3;
        M2C_FIELD(arg1, u8 *, 0xA) = func_802959D0(arg0, temp_v0_3);
block_7:
        M2C_FIELD(arg0, s16 *, 0x1A) = 0;
        return;
    }
    M2C_FIELD(arg1, s16 *, 0) = 1;
    M2C_FIELD(arg1, s32 *, 4) = temp_v0;
    if (temp_v0_2 & 0x80) {
        M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 9) = func_802959D0(arg0);
        M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (temp_v0_2 & 0xFF);
    } else {
        M2C_FIELD(arg1, u8 *, 9) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0x1B);
    }
    temp_v1_2 = M2C_FIELD(arg1, u8 *, 8) & 0xF0;
    if ((temp_v1_2 != 0xC0) && (temp_v1_2 != 0xD0)) {
        M2C_FIELD(arg1, u8 *, 0xA) = func_802959D0(arg0);
        return;
    }
    M2C_FIELD(arg1, u8 *, 0xA) = 0U;
}
