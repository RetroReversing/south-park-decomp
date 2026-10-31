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

M2C_UNK func_802920F0(s32, s32 *);                  /* extern */
s32 func_80293970(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800A9FB0;
extern f32 D_800A9FB8;

void func_802737DC(void *arg0, s32 arg1) {
    s32 sp18;
    s32 sp1C;
    s8 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    sp18 = 0x10;
    sp1C = 0xC0;
    sp20 = 0x10;
    sp28 = 0;
    sp2C = 0;
    sp30 = 0;
    sp24 = M2C_FIELD(arg0, s32 *, 0) + 0x1B00;
    temp_v0 = func_80293970(0, 0, M2C_FIELD(arg0, s32 *, 0) + 0x1B00, 1, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
    func_802920F0(temp_v0, &sp18);
    M2C_FIELD(arg0, s32 *, 0x10) = func_80293970(0, 0, M2C_FIELD(arg0, s32 *, 0) + 0x1B00, 1, 0xF8);
    M2C_FIELD(arg0, s32 *, 0x24) = 0x32;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(&D_800A9FB0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) D_800A9FB8;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(&D_800A9FB0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(&D_800A9FB0, f32 *, 4);
}
