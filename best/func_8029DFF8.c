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

M2C_UNK __osSetTimerIntr(u64, u32);                    /* extern */
u64 func_8029E3D4(void *, s32);                     /* extern */
extern s32 *D_800B4948;

s32 func_8029DFF8(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_a2;
    u32 temp_v1;
    u64 temp_a0;
    u64 temp_ret;

    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    temp_a2 = arg3 | arg2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
    if (temp_a2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg4;
        M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg7;
    temp_ret = func_8029E3D4(arg0, temp_a2);
    temp_v1 = (u32) temp_ret;
    temp_a0 = temp_ret;
    if (*D_800B4948 == arg0) {
        __osSetTimerIntr(temp_a0, temp_v1);
    }
    return 0;
}
