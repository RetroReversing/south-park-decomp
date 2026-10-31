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

M2C_UNK D_802A0520(s32);                            /* extern */
void *func_8025FB20(M2C_UNK *, s32 *);              /* extern */
M2C_UNK func_8026F7BC(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80272A1C(void *);                      /* extern */
M2C_UNK func_80273400(void *);                      /* extern */
M2C_UNK func_802738BC(void *);                      /* extern */
M2C_UNK func_80274A28(void *);                      /* extern */
M2C_UNK func_802750F0(void *);                      /* extern */
M2C_UNK func_8029DC78(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_8029DDA0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_802A0500();                                /* extern */
extern f32 D_800A9EE8;
extern s32 D_800B1E80;
extern M2C_UNK D_800D64F8;
extern M2C_UNK D_800D77DE;
extern s32 D_800D78F0;

void func_8026FFF8(void *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v1_3;

    M2C_FIELD(arg0, f32 *, 0x27A0) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, 0) * D_800A9EE8);
    M2C_FIELD(arg0, f32 *, 0x27A4) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, -2) * D_800A9EE8);
    M2C_FIELD(arg0, f32 *, 0x27A8) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, 2) * D_800A9EE8);
    temp_s0 = arg0 + 0x110;
    M2C_FIELD(arg0, s32 *, 0x27B0) = (s32) M2C_FIELD(&D_800D77DE, u8 *, 4);
    temp_a0 = func_802A0500();
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) + 1;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
    if (temp_v1 != 1) {
        D_802A0520(temp_a0);
        func_8029DC78(temp_s0, 0, 1);
    } else {
        D_802A0520(temp_a0);
    }
    func_80272A1C(arg0 + 0x1B10);
    temp_s0_2 = arg0 + 0x110;
    temp_v0 = func_802A0500();
    temp_v1_2 = M2C_FIELD(temp_s0_2, s32 *, 0x1C) - 1;
    M2C_FIELD(temp_s0_2, s32 *, 0x1C) = temp_v1_2;
    if (temp_v1_2 != 0) {
        D_802A0520(temp_v0);
        func_8029DDA0(temp_s0_2, 0, 1);
    } else {
        D_802A0520(temp_v0);
    }
    func_80274A28(arg0 + 0x138);
    func_802750F0(arg0 + 0x27B8);
    temp_s0_3 = arg0 + 0x1ABC;
    func_802738BC(temp_s0_3);
    func_80273400(temp_s0_3);
    if ((D_800B1E80 != 0) && (M2C_FIELD(arg0, s32 *, 0x27B4) != 0) && (D_800D78F0 == 0xD) && (M2C_FIELD(arg0, s32 *, 0x134) > 0)) {
        sp28 = 0;
        sp24 = 0;
        sp20 = 0;
        temp_v1_3 = func_8025FB20(&D_800D64F8, &sp20);
        temp_a0_2 = temp_v1_3 + 0x134;
        if (!(M2C_FIELD(arg0, s32 *, 0x104) & 3)) {
            func_8026F7BC(arg0, M2C_FIELD(arg0, s32 *, 0x134), M2C_FIELD(temp_v1_3, s32 *, 0x134), M2C_FIELD(temp_a0_2, s32 *, 4), M2C_FIELD(temp_a0_2, s32 *, 8), 0, 0, -1);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) (M2C_FIELD(arg0, s32 *, 0x104) + 1);
}
