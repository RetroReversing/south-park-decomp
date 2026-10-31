/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_8024E8E0(void *, u16, s8, M2C_UNK);    /* extern */
s32 func_8025764C();                                /* extern */
M2C_UNK func_802630B0(void *, void *, u16, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80273DCC(s16, s32, s32, s32, s32, s32); /* extern */

void func_8025743C(void *arg0) {
    s32 sp28;
    s32 sp2C;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    u16 temp_a2;
    u16 temp_s2;
    u16 temp_s3;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xF8);
    var_a0 = 0xB;
    if (func_8025764C() != 0) {
        var_a0 = 0xD;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = M2C_FIELD(temp_s1, s32 *, 0x14);
    temp_v1 = temp_v0 + temp_a1;
    temp_s2 = M2C_FIELD(temp_v1, u16 *, 0x70);
    temp_a2 = M2C_FIELD(temp_v1, u16 *, 0x8C);
    temp_v0_2 = temp_v0 + (var_a0 * 8);
    sp28 = M2C_FIELD(temp_v0_2, s32 *, 0);
    sp2C = M2C_FIELD(temp_v0_2, s32 *, 4);
    temp_s3 = M2C_FIELD((M2C_FIELD(temp_s1, s32 *, 0x14) + temp_a1), u16 *, 0xA8);
    if (temp_a2 != 0xFFFF) {
        func_802630B0(arg0, arg0, temp_a2, -1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), sp28, sp2C);
    }
    if (temp_s2 != 0xFFFF) {
        func_8024E8E0(arg0, temp_s2, M2C_FIELD(arg0, s8 *, 0x1A8), 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_80273DCC((s16) temp_s3, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    }
}
