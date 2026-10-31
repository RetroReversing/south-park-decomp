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

M2C_UNK D_8021ED84(void *);                         /* extern */
M2C_UNK D_802A0520(s32);                            /* extern */
M2C_UNK func_8026E348(s32 *, s32, s32 *);           /* extern */
M2C_UNK func_8026F0CC(void *);                      /* extern */
M2C_UNK func_80272390(void *, void *);              /* extern */
M2C_UNK func_802737DC(void *, void *);              /* extern */
M2C_UNK func_80274C9C(void *, void *);              /* extern */
M2C_UNK func_802754DC(void *, void *);              /* extern */
void *func_80290D08(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK alHeapInit(s32, s32, s32);               /* extern */
M2C_UNK func_80295C50(void *, void *);              /* extern */
M2C_UNK func_8029DC78(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_8029DDA0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_802A0500();                                /* extern */
extern f32 D_800A9EE0;
extern s32 D_800B1E80;
extern M2C_UNK D_800B1E84;
extern s32 D_800B2638;
extern M2C_UNK D_800D77DE;
extern s32 D_800F1568;
extern s32 D_8010E520;
extern s32 D_8010E554;

void func_8026EDD0(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s8 sp2C;
    M2C_UNK *sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 temp_a0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s0;
    s32 var_t0;
    s32 var_v1;
    u32 temp_a0_2;
    u32 temp_v1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a1;
    void *var_t2;
    void *var_v0;

    temp_s0 = arg0 + 0x110;
    D_8021ED84(temp_s0);
    temp_a0 = func_802A0500();
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) + 1;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
    if (temp_v1 != 1) {
        D_802A0520(temp_a0);
        func_8029DC78(temp_s0, 0, 1);
        var_s0 = arg0 + 0x1B00;
    } else {
        var_s0 = arg0 + 0x1B00;
        D_802A0520(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    alHeapInit(var_s0, D_8010E520, D_8010E554);
    sp10 = 0x21;
    sp14 = 0x21;
    sp18 = 0x80;
    sp2C = 6;
    sp30 = &D_800B1E84;
    sp38 = 0x5622;
    sp3C = 1;
    sp20 = 0;
    sp24 = var_s0;
    sp40 = 0x800;
    func_8026E348(&sp10, D_800B2638, &sp38);
    D_800F1568 = 0x136DCC;
    temp_v0 = func_80290D08(0x36DCC, 0, 0x100000);
    M2C_FIELD(arg0, s32 *, 0x1AC4) = (s32) M2C_FIELD(temp_v0, s32 *, 4);
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 0xC);
    M2C_FIELD(arg0, void **, 0x80) = temp_v0_2;
    M2C_FIELD(arg0, void **, 0x7C) = (void *) M2C_FIELD(temp_v0_2, void **, 4);
    func_8026F0CC(arg0);
    func_802737DC(arg0 + 0x1ABC, arg0);
    temp_t1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0xC);
    var_t0 = 0;
    if (M2C_FIELD(temp_t1, s16 *, 0xE) > 0) {
        var_t2 = temp_t1;
        do {
            var_a2 = var_t0 + 1;
            if (var_a2 < (s16) (u16) M2C_FIELD(temp_t1, s16 *, 0xE)) {
                var_a1 = (var_a2 * 4) + temp_t1;
                do {
                    temp_v1_2 = M2C_FIELD(var_a1, u32 *, 0x10);
                    temp_a0_2 = M2C_FIELD(var_t2, u32 *, 0x10);
                    if (temp_v1_2 < temp_a0_2) {
                        M2C_FIELD(var_t2, u32 *, 0x10) = temp_v1_2;
                        M2C_FIELD(var_a1, u32 *, 0x10) = temp_a0_2;
                    }
                    var_a2 += 1;
                    var_a1 += 4;
                } while (var_a2 < M2C_FIELD(temp_t1, s16 *, 0xE));
            }
            var_t0 += 1;
            var_t2 += 4;
        } while (var_t0 < M2C_FIELD(temp_t1, s16 *, 0xE));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x28) = 0xC0;
    M2C_FIELD(arg0, void **, 0x2C) = (void *) (arg0 + 0x1B00);
    func_80295C50(arg0 + 0x84, arg0 + 0x24);
    var_v1 = 0xF;
    var_v0 = arg0 + 0x1E;
    do {
        M2C_FIELD(var_v0, s16 *, 0xDC) = -1;
        var_v1 -= 1;
        var_v0 -= 2;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s16 *, 0x102) = -1;
    M2C_FIELD(arg0, s16 *, 0x2790) = -1;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x278C) = 0;
    M2C_FIELD(arg0, s8 *, 0x2798) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x279C) = 0;
    func_80274C9C(arg0 + 0x138, arg0);
    func_80272390(arg0 + 0x1B10, arg0);
    M2C_FIELD(arg0, f32 *, 0x27A0) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, 0) * D_800A9EE0);
    M2C_FIELD(arg0, f32 *, 0x27A4) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, -2) * D_800A9EE0);
    M2C_FIELD(arg0, s32 *, 0x27AC) = 0;
    M2C_FIELD(arg0, f32 *, 0x27A8) = (f32) ((f32) M2C_FIELD(&D_800D77DE, u16 *, 2) * D_800A9EE0);
    M2C_FIELD(arg0, s32 *, 0x27B4) = 1;
    M2C_FIELD(arg0, s32 *, 0x27B0) = (s32) M2C_FIELD(&D_800D77DE, u8 *, 4);
    func_802754DC(arg0 + 0x27B8, arg0);
    D_800B1E80 = 1;
    temp_s0_2 = arg0 + 0x110;
    temp_v0_3 = func_802A0500();
    temp_v1_3 = M2C_FIELD(temp_s0_2, s32 *, 0x1C) - 1;
    M2C_FIELD(temp_s0_2, s32 *, 0x1C) = temp_v1_3;
    if (temp_v1_3 != 0) {
        D_802A0520(temp_v0_3);
        func_8029DDA0(temp_s0_2, 0, 1);
        return;
    }
    D_802A0520(temp_v0_3);
}
