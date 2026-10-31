/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_8021E76C(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *);                         /* extern */
s32 func_80273E60(s16, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 D_800B2158;

void *func_8027450C(void **arg0, s16 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        D_8021E930(temp_s0);
        D_8021E76C(arg0 + 0x14, temp_s0);
        M2C_FIELD(temp_s0, s32 *, 0xC) = -1;
        M2C_FIELD(temp_s0, s32 *, 8) = -1;
        temp_v0 = func_80273E60(arg1, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8), arg3, 0, arg4);
        M2C_FIELD(temp_s0, s32 *, 8) = temp_v0;
        D_800B2158 = temp_v0;
        M2C_FIELD(temp_s0, s32 *, 0x10) = arg4;
        M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) arg1;
        M2C_FIELD(temp_s0, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 8);
        M2C_FIELD(temp_s0, s32 *, 0x20) = arg3;
    }
    return temp_s0;
}
