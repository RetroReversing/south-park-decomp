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

void *func_8029968C(void *, s32, s32, s32, s32);    /* extern */
f32 func_802998A0(void *, s32);                     /* extern */
s32 func_8029E4E0(s32);                             /* extern */
extern M2C_UNK D_800AAF70;
extern f32 D_800AAF78;
extern f32 D_800AAF7C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x40, 0x44], gap at: 0x38. */
void *func_80299310(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_fv1;
    s32 temp_s0;
    s32 temp_s0_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s2;

    if (M2C_FIELD(arg1, void **, 0x24) != NULL) {
        temp_s0 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0);
        temp_fs0f = M2C_FIELD(&D_800AAF70, f32 *, 4);
        temp_fs0 = D_800AAF7C - ((f32) (s32) ((func_802998A0(arg1, arg3) / (f32) temp_s0) * temp_fs0f) * D_800AAF78);
        temp_v0 = M2C_FIELD(arg1, void **, 0x24);
        temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x20) + (temp_fs0 * (f32) arg3);
        temp_fv1 = (s32) temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) (temp_fv0 - (f32) temp_fv1);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg1, s32 *, 0x18) - M2C_FIELD(arg1, s32 *, 4)) * 2);
        temp_a3 = (s32) (temp_a1 & 7) >> 1;
        temp_s0_2 = temp_a3 * 2;
        temp_v0_2 = func_8029968C(arg0, temp_a1 - temp_s0_2, 0x280, temp_fv1 + temp_a3, arg4);
        temp_s2 = temp_v0_2 + 8;
        M2C_FIELD(temp_v0_2, s32 *, 0) = (s32) (temp_s0_2 | 0x08000280);
        M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) ((arg2 << 0x10) | ((arg3 * 2) & 0xFFFF));
        M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) ((M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), u8 *, 0x27) << 0x10) | (((s32) (temp_fs0 * temp_fs0f) & 0xFFFF) | 0x05000000));
        var_s2 = temp_s2 + 8;
        M2C_FIELD(temp_s2, s32 *, 4) = func_8029E4E0(M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), s32 *, 0x14));
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), s32 *, 0x24) = 0;
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) + (temp_fv1 - arg3));
    } else {
        var_s2 = func_8029968C(arg0, M2C_FIELD(arg0, s32 *, 0x18) - (M2C_FIELD(arg1, s32 *, 4) * 2), arg2, arg3, arg4);
    }
    return var_s2;
}
