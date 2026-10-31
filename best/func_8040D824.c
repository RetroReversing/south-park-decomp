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

s32 D_8022E914(s32);                            /* extern */
s32 D_80237180(s32);                            /* extern */
s32 D_8023C9EC(s32);                            /* extern */
s32 func_8025F874();

s32 func_8040D824(s32 arg0, void *arg1) {
    func_8025F874(M2C_FIELD(arg1, s32 *, 0x3C));
    D_8022E914(M2C_FIELD(arg1, s32 *, 0x20));
    D_80237180(M2C_FIELD(arg1, s32 *, 0x20));
    D_8023C9EC(M2C_FIELD(arg1, s32 *, 0x20));
    return 1;
}
