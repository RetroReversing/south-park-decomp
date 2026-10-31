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

s32 func_8029E4E0(s32);                             /* extern */
extern M2C_UNK D_800AAEF0;
extern f32 D_800AAEF8;

s32 func_80298B0C(void *arg0, u16 *arg1, s32 arg2, s32 arg4) {
    s16 sp18;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 temp_fv1f;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    var_s1 = arg4;
    sp18 = 0x140;
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (arg2 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            temp_v0 = M2C_FIELD(temp_a0, void *(**)(void *, s16 *, s32, s32), 4)(temp_a0, &sp18, arg2, var_s1);
            temp_a0_2 = temp_v0;
            var_s1 = temp_v0 + 8;
            M2C_FIELD(temp_a0_2, s32 *, 0) = (s32) ((sp18 & 0xFFFFFF) | 0x0A000000);
            M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) ((*arg1 << 0x10) | ((arg2 * 2) & 0xFFFF));
        } else {
            if (M2C_FIELD(&D_800AAEF0, f32 *, 0) < M2C_FIELD(arg0, f32 *, 0x18)) {
                M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(&D_800AAEF0, f32 *, 0);
            }
            temp_fs0 = M2C_FIELD(&D_800AAEF0, f32 *, 4);
            temp_fv1 = (f32) (s32) (M2C_FIELD(arg0, f32 *, 0x18) * temp_fs0) * D_800AAEF8;
            temp_fv0f = M2C_FIELD(arg0, f32 *, 0x20) + (temp_fv1 * (f32) arg2);
            temp_fv1f = (s32) temp_fv0f;
            M2C_FIELD(arg0, f32 *, 0x18) = temp_fv1;
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_fv0f - (f32) temp_fv1f);
            temp_v0_2 = M2C_FIELD(temp_a0, void *(**)(void *, s16 *, s32, s32), 4)(temp_a0, &sp18, temp_fv1f, var_s1);
            temp_s1 = temp_v0_2 + 8;
            M2C_FIELD(temp_v0_2, s32 *, 0) = (s32) ((u16) sp18 | 0x08000000);
            M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) ((*arg1 << 0x10) | ((arg2 * 2) & 0xFFFF));
            M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x27) << 0x10) | (((s32) (M2C_FIELD(arg0, f32 *, 0x18) * temp_fs0) & 0xFFFF) | 0x05000000));
            var_s1 = temp_s1 + 8;
            M2C_FIELD(temp_s1, s32 *, 4) = func_8029E4E0(M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
        }
    }
    return var_s1;
}
