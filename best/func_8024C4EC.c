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

f32 D_80228328(void *);                             /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
f32 D_802422A0(s32, s32, s32);                      /* extern */
M2C_UNK D_80246AAC(void *, void *, M2C_UNK);        /* extern */
f32 func_8029AA80(f32);                             /* extern */
extern M2C_UNK D_800A92D8;
extern s8 D_800F4D5C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x20. */
void func_8024C4EC(void *arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0x154);
    if (temp_s0 != NULL) {
        D_800F4D5C = 0;
        temp_fs1f = D_802422A0(M2C_FIELD(temp_s0, s32 *, 4), M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(temp_s0, s32 *, 0xC));
        temp_fs0f = D_80228328(arg0);
        temp_fs1 = D_80228328(temp_s0);
        temp_fs0 = D_80228328(arg0);
        if (((temp_fs0f + temp_fs1) * (temp_fs0 + D_80228328(temp_s0))) < temp_fs1f) {
            M2C_FIELD(arg1, void **, 0x154) = NULL;
            D_80246AAC(temp_s0, temp_s0 + 0x168, 0);
        }
    } else {
        D_800F4D5C = 2;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x18) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x1C) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x20) == 0.0f)) {
        D_8023E95C(arg0, arg1, 0);
    }
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x18);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_fa0 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 0x158) = (f32) (M2C_FIELD(arg1, f32 *, 0x158) + (func_8029AA80((temp_fv0f * temp_fv0f) + (temp_fv0 * temp_fv0) + (temp_fa0 * temp_fa0)) * M2C_FIELD(&D_800A92D8, f32 *, 4)));
}
