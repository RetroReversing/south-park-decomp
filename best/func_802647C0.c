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

void func_802647C0(void *arg0, void *arg1, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_a0;

    temp_a0 = arg1 + 0x168;
    if (!(*M2C_FIELD(arg0, s32 **, 0x10) & 9)) {
        M2C_FIELD(temp_a0, s32 *, 0x188) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x188) | 0x10);
        M2C_FIELD(arg1, s32 *, 0x24C) = arg3;
        M2C_FIELD(arg1, s32 *, 0x250) = arg4;
        M2C_FIELD(arg1, s32 *, 0x254) = arg5;
        if (M2C_FIELD(arg1, u16 *, 0xD8) == 0x3FA) {
            M2C_FIELD(temp_a0, s32 *, 0x198) = 1;
            M2C_FIELD(arg1, s32 *, 0x24C) = (s32) M2C_FIELD(arg1, s32 *, 4);
            M2C_FIELD(arg1, s32 *, 0x250) = (s32) M2C_FIELD(arg1, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 0x254) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        }
    }
}
