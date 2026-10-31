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

f32 D_802158FC(f32, f32);                           /* extern */
f32 D_80215BE0(f32, f32);                           /* extern */
M2C_UNK D_8023E95C(s32, void *, s32);               /* extern */
M2C_UNK D_802417F0(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 D_80246A4C();                                   /* extern */
s32 D_802485E8(s32, void *, M2C_UNK *);             /* extern */
extern f32 D_800AA7F8;
extern f32 D_800AA7FC;
extern f32 D_800AA800;
extern f32 D_800AA804;
extern f32 D_800AA808;
extern f32 D_800ABA00;

void func_80289E24(s32 arg0, void *arg1) {
    M2C_UNK sp18;
    f32 temp_fs0;
    f32 temp_fv0;
    s32 var_a0;
    s8 temp_a0;
    u16 temp_v1_2;
    u16 var_v0;
    void *temp_s0;
    void *temp_v1;

    if (D_80246A4C() != 1) {
        temp_fs0 = D_800AA7F8;
        M2C_FIELD(arg1, f32 *, 0x158) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x158), temp_fs0);
        M2C_FIELD(arg1, f32 *, 0x154) = D_802158FC(M2C_FIELD(arg1, f32 *, 0x154), temp_fs0);
    }
    temp_v1 = M2C_FIELD(arg1, void **, 0x64);
    if ((temp_v1 != NULL) && (temp_a0 = M2C_FIELD(temp_v1, s8 *, 0x198), (temp_a0 != 0x28))) {
        if (temp_a0 != 0x2D) {
            if (M2C_FIELD(temp_v1, s32 *, 0x168) & 0x20) {
                goto block_6;
            }
        } else {
            goto block_7;
        }
    } else {
block_6:
block_7:
        D_802417F0(&sp18, arg0, 0x50, 0, 0x80000, 0);
        temp_s0 = arg0 + 0x168;
        M2C_FIELD(arg1, s32 *, 0x108) = arg0;
        temp_v1_2 = M2C_FIELD(temp_s0, u16 *, 4);
        if ((temp_v1_2 - M2C_FIELD(&sp18, s32 *, 4)) < 0) {
            var_v0 = 0;
        } else {
            var_v0 = temp_v1_2 - M2C_FIELD(&sp18, u16 *, 6);
        }
        M2C_FIELD(temp_s0, u16 *, 4) = var_v0;
        var_a0 = 0;
        if (!(var_v0 & 0xFFFF)) {
            var_a0 = temp_v1_2 > 0U;
        }
        if (var_a0 != 0) {
            D_8023E95C(arg0, temp_s0, D_802485E8(arg0, temp_s0, &sp18));
        }
    }
    temp_fv0 = M2C_FIELD(arg1, f32 *, 0x40) - D_800ABA00;
    M2C_FIELD(arg1, f32 *, 0x40) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg1, f32 *, 0x40) = D_80215BE0(D_800AA7FC, D_800AA800);
        M2C_FIELD(arg1, f32 *, 0x6C) = D_80215BE0(D_800AA804, D_800AA808);
    }
}
