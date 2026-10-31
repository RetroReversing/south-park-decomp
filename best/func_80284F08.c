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

s32 D_80200528(M2C_UNK *, void *);                  /* extern */
f32 D_80215BE0(f32, f32);                           /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
M2C_UNK D_80246A58(void *, void *, M2C_UNK);        /* extern */
M2C_UNK D_80246A84(void *, void *, M2C_UNK, u8);    /* extern */
s32 D_80246A90(void *, void *, M2C_UNK);            /* extern */
M2C_UNK D_80246B50(void *, void *, void *, M2C_UNK); /* extern */
extern M2C_UNK D_243FC0;
extern M2C_UNK D_244D44;
extern M2C_UNK D_246ADC;
extern M2C_UNK D_2471AC;
extern M2C_UNK D_247478;
extern M2C_UNK D_2475C4;
extern M2C_UNK D_2475CC;
extern f32 D_800AA3E0;
extern f32 D_800AA3E4;
extern f32 D_800AA3E8;
extern f32 D_800AA3EC;
extern f32 D_800AA3F0;
extern f32 D_800AA3F4;
extern M2C_UNK D_800AA3F8;
extern M2C_UNK D_800AA400;
extern M2C_UNK D_800AFA4C;
extern M2C_UNK D_800CCA80;
extern f32 D_800F4EC0;
extern M2C_UNK D_800F4ED8;
extern s32 D_800F5258;
extern M2C_UNK D_800F5260;
extern M2C_UNK D_800F5278;
extern f32 D_800F5280;

void func_80284F08(void *arg0, void *arg1) {
int __repair_literal;

    M2C_UNK var_a2;
    f32 temp_fv0;
    f32 temp_fv1;
    s16 temp_a0;
    s32 var_a0;
    void *temp_s1;
    void *temp_v1;
    void *var_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(arg1, s8 *, 0xF) = -1;
    M2C_FIELD(arg1, s8 *, 0x10) = -1;
    M2C_FIELD(arg1, s8 *, 0x11) = -1;
    M2C_FIELD(arg1, s8 *, 0x12) = -1;
    M2C_FIELD(arg1, s8 *, 0xD) = 0;
    M2C_FIELD(arg1, s8 *, 0xE) = 0x14;
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    temp_s1 = temp_v1 + 0x14;
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) D_800AA3E0;
    temp_a0 = M2C_FIELD(temp_s1, s16 *, 0x80);
    temp_fv1 = (f32) M2C_FIELD(temp_s1, s16 *, 0x6E) / (f32) (temp_a0 + M2C_FIELD(temp_s1, s16 *, 0x82));
    M2C_FIELD(temp_s1, s8 *, 0xA4) = (s8) (s32) (temp_fv1 * (f32) temp_a0);
    M2C_FIELD(temp_s1, s8 *, 0xA5) = (s8) (s32) (temp_fv1 * (f32) M2C_FIELD(temp_s1, s16 *, 0x82));
__repair_literal = 0;

    if ((M2C_FIELD(temp_s1, s8 *, 0xA4) <= 0) && (temp_a0 > __repair_literal)) {
        M2C_FIELD(temp_s1, s8 *, 0xA4) = 1;
    }
    if ((M2C_FIELD(temp_s1, s8 *, 0xA5) <= 0) && (M2C_FIELD(temp_s1, s16 *, 0x82) > 0)) {
        M2C_FIELD(temp_s1, s8 *, 0xA5) = 1;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0x28) = &D_800AFA4C;
    M2C_FIELD(arg1, M2C_UNK **, 0xC4) = &D_244D44;
    M2C_FIELD(arg1, M2C_UNK **, 0xD8) = &D_2475CC;
    M2C_FIELD(arg1, M2C_UNK **, 0xD4) = &D_2475C4;
    M2C_FIELD(arg1, M2C_UNK **, 0xD0) = &D_247478;
    M2C_FIELD(arg1, M2C_UNK **, 0xCC) = &D_243FC0;
    M2C_FIELD(arg1, s32 *, 0x154) = 0;
    M2C_FIELD(arg1, s32 *, 0x158) = 0;
    D_80246A84(arg0, arg1, 0, M2C_FIELD(temp_s1, u8 *, 0x40));
    D_80246A84(arg0, arg1, 1, M2C_FIELD(temp_s1, u8 *, 0x41));
    D_80246A84(arg0, arg1, 2, M2C_FIELD(temp_s1, u8 *, 0x42));
    if (D_80246A90(arg0, arg1, 0) != 0) {
block_11:
        var_a2 = 0;
    } else {
        if (D_80246A90(arg0, arg1, 1) != 0) {
            var_a2 = 1;
        } else if (D_80246A90(arg0, arg1, 2) != 0) {
            var_a2 = 2;
        } else {
            goto block_11;
        }
    }
    D_80246A58(arg0, arg1, var_a2);
    temp_fv0 = D_80215BE0(D_800AA3E4, D_800AA3E8);
    M2C_FIELD(arg1, M2C_UNK **, 0xDC) = &D_246ADC;
    M2C_FIELD(arg1, s32 *, 0x198) = 3;
    M2C_FIELD(arg1, s32 *, 0x1A0) = 0xFF;
    M2C_FIELD(arg1, f32 *, 0x170) = temp_fv0;
    M2C_FIELD(arg1, s32 *, 0x168) = 0;
    M2C_FIELD(arg1, s32 *, 0x188) = 0;
    M2C_FIELD(arg1, s32 *, 0x18C) = 0;
    M2C_FIELD(arg1, s32 *, 0x19C) = 0;
    M2C_FIELD(arg1, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg1, s32 *, 0x1A8) = -1;
    M2C_FIELD(arg1, s32 *, 0x1AC) = -1;
    M2C_FIELD(arg1, s16 *, 0x1C0) = 0;
    M2C_FIELD(arg1, s32 *, 0x17C) = 0;
    M2C_FIELD(arg1, f32 *, 0x184) = (f32) M2C_FIELD(temp_s1, f32 *, 0x70);
    M2C_FIELD(arg1, s32 *, 0x180) = (s32) M2C_FIELD(temp_s1, s16 *, 0x6C);
    if (M2C_FIELD(arg0, u16 *, 0xD8) == 0x7D0) {
        M2C_FIELD(temp_s1, f32 *, 0x10) = (f32) D_800AA3EC;
        M2C_FIELD(temp_s1, f32 *, 0x14) = (f32) D_800AA3F0;
    }
    if (M2C_FIELD(temp_v1, s32 *, 0x14) & 0x1000) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFEFFFFF & 0xFFFF7FFF);
    }
    if (M2C_FIELD(temp_v1, s32 *, 0x14) & 0x800) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFFF7FFF);
    }
    D_8023E95C(arg0, arg1, 0);
    M2C_FIELD(arg1, s8 *, 0x33) = 0;
    if (D_80200528(&D_800CCA80, arg0) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFFF7FFF);
    }
    if (!(M2C_FIELD(temp_s1, u16 *, 0x4A) & 0x1F)) {
        M2C_FIELD(temp_v1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x14) | 0x40);
    }
    if (!(M2C_FIELD(temp_v1, s32 *, 0x14) & 0x8000)) {
        M2C_FIELD(arg1, s8 *, 0x33) = 1;
        D_80246B50(arg0, arg1, arg0 + 4, 3);
    }
    var_a0 = 0;
    var_v1 = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 0xC8) = &D_2471AC;
    do {
        M2C_FIELD(var_v1, f32 *, 0x118) = (f32) D_800AA3F4;
        M2C_FIELD(var_v1, f32 *, 0x11C) = (f32) D_800AA3F4;
        M2C_FIELD(var_v1, f32 *, 0x120) = (f32) D_800AA3F4;
        var_a0 += 1;
        var_v1 += 0xC;
    } while (var_a0 < 5);
    if (M2C_FIELD(arg1, s8 *, 0x174) == 0xC) {
        M2C_FIELD(&D_800F5278, s32 *, 0) = 0;
        D_800F5258 = 0;
        M2C_FIELD(&D_800F5260, s32 *, 0) = 0;
        M2C_FIELD(&D_800F5260, s32 *, 4) = 0;
        M2C_FIELD(&D_800F5260, s32 *, 8) = 0;
        M2C_FIELD(&D_800F4ED8, f32 *, 4) = (f32) M2C_FIELD(&D_800AA3F8, f32 *, 0);
        M2C_FIELD(&D_800F5278, f32 *, 4) = (f32) M2C_FIELD(&D_800AA3F8, f32 *, 4);
        D_800F4EC0 = M2C_FIELD(&D_800AA400, f32 *, 0);
        D_800F5280 = M2C_FIELD(&D_800AA400, f32 *, 4);
    }
}
