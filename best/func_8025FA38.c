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

M2C_UNK D_8021E710(void *, void *);                 /* extern */
M2C_UNK D_8021E930(void *, void *);                 /* extern */
extern M2C_UNK D_800A9A20;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c], gap at: 0x50. */
void func_8025FA38(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x12B0);
    if (var_s0 != NULL) {
        D_8021E930(arg0 + 0x12B0, var_s0);
        D_8021E710(arg0 + 0x12C4, var_s0);
    } else {
        var_s0 = M2C_FIELD(arg0, void **, 0x12C8);
    }
    sp28 = arg6;
    sp2C = arg7;
    sp30 = arg8;
    M2C_FIELD(var_s0, s32 *, 8) = arg6;
    M2C_FIELD(var_s0, s32 *, 0xC) = arg7;
    M2C_FIELD(var_s0, s32 *, 0x10) = arg8;
    M2C_FIELD(var_s0, s32 *, 0x18) = arg5;
    M2C_FIELD(var_s0, s32 *, 0x2C) = arg5;
    M2C_FIELD(var_s0, s32 *, 0x40) = arg5;
    M2C_FIELD(var_s0, f32 *, 0x14) = arg4;
    M2C_FIELD(var_s0, f32 *, 0x1C) = (f32) (arg1 * M2C_FIELD(&D_800A9A20, f32 *, 4));
    M2C_FIELD(var_s0, f32 *, 0x30) = (f32) (arg2 * M2C_FIELD(&D_800A9A20, f32 *, 4));
    M2C_FIELD(var_s0, f32 *, 0x44) = (f32) (arg3 * M2C_FIELD(&D_800A9A20, f32 *, 4));
}
