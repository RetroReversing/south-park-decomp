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

void func_80404178(void *arg0, void *arg1, void **arg2, s32 arg3, s32 arg4) {
    s16 temp_a1;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0) = arg3;
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 4) | 0xC0000);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) M2C_FIELD(arg1, u8 *, 0xF);
    M2C_FIELD(arg0, void **, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    temp_v1 = (s16) M2C_FIELD(arg1, u16 *, 0);
    if (temp_v1 != 4) {
        var_v0 = 0;
        if (temp_v1 != 5) {

        } else {
            var_v0 = 0x1B8;
        }
    } else {
        var_v0 = 0x430;
    }
    if (var_v0 != 0) {
        M2C_FIELD(arg0, void **, 0x20) = (void *) *arg2;
        temp_v1_2 = (s16) M2C_FIELD(arg1, u16 *, 0);
        temp_a0 = *arg2;
        switch (temp_v1_2) {                        /* irregular */
        case 4:
            M2C_FIELD(temp_a0, s32 *, 0x424) = 1;
            break;
        case 5:
            M2C_FIELD(temp_a0, s32 *, 0x1B0) = 1;
            break;
        }
        temp_a1 = (s16) M2C_FIELD(arg1, u16 *, 0);
        if (temp_a1 != 4) {
            var_v1 = 0;
            if (temp_a1 != 5) {

            } else {
                var_v1 = 0x1B8;
            }
        } else {
            var_v1 = 0x430;
        }
        *arg2 += var_v1;
    }
}
