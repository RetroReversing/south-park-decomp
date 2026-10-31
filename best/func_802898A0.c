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

s32 D_80200C94(M2C_UNK *, void *);                  /* extern */
f32 D_80215BE0(f32, f32);                           /* extern */
f32 D_80299AE8(f32);                                /* extern */
f32 func_8026D63C(s32, f32, s32);                   /* extern */
f32 func_8029A900(f32);                             /* extern */
extern M2C_UNK D_800AA798;
extern f32 D_800AA7A0;
extern f32 D_800AA7A4;
extern M2C_UNK D_800AA7A8;
extern M2C_UNK D_800AA7B0;
extern f32 D_800AA7B8;
extern f32 D_800AA7BC;
extern f32 D_800AA7C0;
extern M2C_UNK D_800CCA80;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x28, 0x2c], gap at: 0x20. */
void func_802898A0(void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 var_fs0;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg1, void **, 0x78);
    if (temp_s2 != NULL) {
        temp_s0 = arg1 + 0x98;
        temp_fs0f = D_80215BE0(M2C_FIELD(&D_800AA798, f32 *, 4), D_800AA7A0) + M2C_FIELD(&D_800AA7A8, f32 *, 0);
        temp_fs0 = M2C_FIELD(temp_s2, f32 *, 0x70) + M2C_FIELD(&D_800AA7B0, f32 *, 0) + D_80215BE0(D_800AA7A4, M2C_FIELD(&D_800AA7A8, f32 *, 4));
        M2C_FIELD(arg1, f32 *, 0x98) = (f32) (M2C_FIELD(temp_s2, f32 *, 4) + (temp_fs0f * func_8029A900(temp_fs0)));
        var_fs0 = M2C_FIELD(&D_800AA7B0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 0xA0) = (f32) (M2C_FIELD(temp_s2, f32 *, 0xC) + (temp_fs0f * D_80299AE8(temp_fs0)));
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
        temp_v0 = D_80200C94(&D_800CCA80, temp_s0);
        if (temp_v0 != 0) {
            temp_fv0 = func_8026D63C(temp_v0, M2C_FIELD(arg1, f32 *, 0x98), M2C_FIELD(temp_s0, s32 *, 8));
            var_fs0 = D_80215BE0(temp_fv0, temp_fv0 + D_800AA7B8);
        }
        M2C_FIELD(arg1, f32 *, 0x9C) = var_fs0;
        M2C_FIELD(arg1, f32 *, 0x8C) = var_fs0;
        M2C_FIELD(arg1, void **, 0x180) = temp_s2;
    }
    M2C_FIELD(arg1, f32 *, 0x17C) = D_80215BE0(D_800AA7BC, D_800AA7C0);
}
