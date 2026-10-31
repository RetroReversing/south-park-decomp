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

M2C_UNK D_8021B7EC(M2C_UNK, void *, M2C_UNK);       /* extern */
M2C_UNK D_80242160(void *, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK D_8024249C(void *, s32, s32, s32, s32);     /* extern */
M2C_UNK func_80273DCC(s16, s32, s32, s32, s32, s32); /* extern */
extern s32 D_800CCA84;

void func_8024D07C(void *arg0, M2C_UNK arg1) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x14) + 0x14;
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFF7FFFFF);
    D_8021B7EC(0x40000, arg0, 0xFF7FFFFF);
    if (M2C_FIELD(temp_s1, s32 *, 0x28) == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFEFFFFF & 0xFFFF7FFF);
    }
    if (D_800CCA84 != 0) {
        if (M2C_FIELD(temp_s1, s32 *, 0x30) != -1) {
            func_80273DCC(M2C_FIELD(temp_s1, s16 *, 0x32), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
        }
        if (M2C_FIELD(temp_s1, s32 *, 0x2C) != -1) {
            D_8024249C(arg0, M2C_FIELD(temp_s1, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
        }
        D_80242160(arg0, arg1, 8, M2C_FIELD(temp_s1, s32 *, 0x34));
    }
}
