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

M2C_UNK D_80212AB8(s32 *, s32 *);                   /* extern */
M2C_UNK D_80253EB0(M2C_UNK *, void *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_802569D0(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_802630B0(void *, u16, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80273DCC(s16, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800CE0FC;
extern M2C_UNK D_800F4B8C;
extern M2C_UNK D_800F4B9C;

void func_80250D00(void *arg0, M2C_UNK arg1) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    u16 temp_a2;
    u16 temp_s2;
    u16 temp_s3;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) ^ 2);
    temp_v0 = M2C_FIELD(temp_v1, void **, 0x14);
    temp_s2 = M2C_FIELD(temp_v0, u16 *, 0x74);
    temp_a2 = M2C_FIELD(temp_v0, u16 *, 0x90);
    sp50 = M2C_FIELD(temp_v0, s32 *, 0x10);
    sp54 = M2C_FIELD(temp_v0, s32 *, 0x14);
    temp_s3 = M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x14), u16 *, 0xAC);
    if (temp_a2 != 0xFFFF) {
        func_802630B0(arg0, temp_a2, -1, M2C_FIELD(&D_800F4B8C, s32 *, 0), M2C_FIELD(&D_800F4B8C, s32 *, 4), M2C_FIELD(&D_800F4B8C, s32 *, 8), sp50, sp54);
    }
    if (temp_s2 != 0xFFFF) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0) & 0x10) {
            sp68 = M2C_FIELD(&D_800F4B9C, s32 *, 0);
            sp6C = M2C_FIELD(&D_800F4B9C, s32 *, 4);
            sp70 = M2C_FIELD(&D_800F4B9C, s32 *, 8);
        } else {
            sp68 = M2C_FIELD(arg0, s32 *, 0x18);
            sp6C = M2C_FIELD(arg0, s32 *, 0x1C);
            sp70 = M2C_FIELD(arg0, s32 *, 0x20);
        }
        D_80212AB8(&sp58, &sp68);
        if (M2C_FIELD(arg0, s32 *, 0x18C) & 0x200000) {

        }
        D_80253EB0(&D_800CE0FC, arg0, M2C_FIELD(arg0, s32 *, 0x108), M2C_FIELD(arg0, s32 *, 0x10C), -5, (M2C_FIELD(arg0, s32 *, 0x40) & 0x100002) | 1, 0);
    }
    if (temp_s3 != 0xFFFF) {
        func_80273DCC((s16) temp_s3, M2C_FIELD(&D_800F4B8C, s32 *, 0), M2C_FIELD(&D_800F4B8C, s32 *, 4), M2C_FIELD(&D_800F4B8C, s32 *, 8), 0, 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0) & 0x20000) {
        func_802569D0(&D_800CE0FC, arg0, arg1);
    }
}
