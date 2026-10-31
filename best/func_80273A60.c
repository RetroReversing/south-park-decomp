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

extern M2C_UNK D_800A9FC8;
extern f32 D_800A9FD0;

void func_80273A60(void *arg0) {
    f32 var_fv1;

    var_fv1 = M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(&D_800A9FC8, f32 *, 0));
    if (!(M2C_FIELD(&D_800A9FC8, f32 *, 4) <= var_fv1)) {
        var_fv1 = M2C_FIELD(&D_800A9FC8, f32 *, 4);
    }
    M2C_FIELD(arg0, f32 *, 0x30) = var_fv1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x20) / (var_fv1 * D_800A9FD0));
}
