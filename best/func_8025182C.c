/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_80213190(void *, void *, s32 *);          /* extern */
M2C_UNK D_802131F8(s32 *, s32 *, M2C_UNK);          /* extern */
M2C_UNK D_802132D8(s32 *);                          /* extern */
s32 D_802422D4(void *);                             /* extern */
M2C_UNK func_8024E8E0(void *, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802569D0(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_802630B0(void *, void *, u16, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80273DCC(s16, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_800B120C;
extern M2C_UNK D_800CE0FC;
extern M2C_UNK D_800F4AC8;
extern M2C_UNK D_800F4AD0;

void func_8025182C(void *arg0, M2C_UNK arg1) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a2;
    u16 temp_s1;
    u16 temp_s4;
    void *temp_a0;
    void *temp_s2;
    void *temp_s6;
    void *temp_v0_3;
    void *temp_v1;
    void *var_a0;

    temp_s6 = M2C_FIELD(&D_800F4AC8, void **, 0);
    temp_s2 = M2C_FIELD(arg0, void **, 0xF8);
    temp_v0 = D_802422D4(temp_s6);
    sp30 = M2C_FIELD(&D_800F4AC8, s32 *, 0xE0);
    sp34 = M2C_FIELD(&D_800F4AC8, s32 *, 0xE4);
    sp38 = M2C_FIELD(&D_800F4AC8, s32 *, 0xE8);
    D_802132D8(&sp30);
    D_802131F8(&sp30, &sp30, 0x3F83126F);
    temp_a0 = arg0 + 4;
    D_80213190(temp_a0, temp_a0, &sp30);
    temp_a0_2 = temp_v0 * 2;
    temp_v0_2 = M2C_FIELD(temp_s2, s32 *, 0x14);
    temp_v1 = temp_v0_2 + temp_a0_2;
    temp_s4 = M2C_FIELD(temp_v1, u16 *, 0x70);
    temp_a2 = M2C_FIELD(temp_v1, u16 *, 0x8C);
    temp_v0_3 = temp_v0_2 + (temp_v0 * 8);
    sp28 = M2C_FIELD(temp_v0_3, s32 *, 0);
    sp2C = M2C_FIELD(temp_v0_3, s32 *, 4);
    temp_s1 = M2C_FIELD((M2C_FIELD(temp_s2, s32 *, 0x14) + temp_a0_2), u16 *, 0xA8);
    if (temp_a2 != 0xFFFF) {
        var_a0 = temp_s6;
        if (*(&D_800B120C + (temp_a2 * 8)) & 2) {
            var_a0 = arg0;
        }
        func_802630B0(var_a0, arg0, temp_a2, -1, M2C_FIELD(&D_800F4AC8, s32 *, 8), M2C_FIELD(&D_800F4AC8, s32 *, 0xC), M2C_FIELD(&D_800F4AC8, s32 *, 0x10), sp28, sp2C);
    }
    if (temp_s4 != 0xFFFF) {
        func_8024E8E0(arg0, temp_s4, -8, 1);
    }
    if (temp_s1 != 0xFFFF) {
        func_80273DCC((s16) temp_s1, M2C_FIELD(&D_800F4AD0, s32 *, 0), M2C_FIELD(&D_800F4AD0, s32 *, 4), M2C_FIELD(&D_800F4AD0, s32 *, 8), 0, 0);
    }
    if (M2C_FIELD(arg0, s8 *, 0x191) == 1) {
        func_802569D0(&D_800CE0FC, arg0, arg1);
    }
}
