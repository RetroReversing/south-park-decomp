/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

extern M2C_UNK D_800D6538;

void func_8025D55C(void) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 var_fv0;
    f32 var_fv0f;
    u32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1;
    void *var_a0;

    temp_a1 = &D_800D6538 - 0x20;
    if (&D_800D6538 != NULL) {
        M2C_FIELD(&D_800D6538, f32 *, 0x2A8) = (f32) D_800BEE18;
        M2C_FIELD(&D_800D6538, s32 *, 0x2B0) = 0;
        M2C_FIELD(&D_800D6538, s32 *, 0x2B4) = 0;
        M2C_FIELD(&D_800D6538, f32 *, 0x2AC) = (f32) D_800BEE1C;
    }
    temp_v1 = M2C_FIELD(temp_a1, u32 *, 0x10);
    switch (temp_v1) {                              /* irregular */
    case 1:
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2A8) = (f32) D_800BEE18;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B0) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B4) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2AC) = (f32) D_800BEE1C;
        return;
    case 2:
        if (M2C_FIELD(temp_a1, u8 *, 0x12D2) == 0) {
            var_fv0f = (f32) D_800BEE18;
            M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B0) = 0;
            M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B4) = 0;
            M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2A8) = var_fv0f;
            var_fv0 = (f32) ((s32) D_800BEE1C / 2);
            M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2AC) = var_fv0;
            var_a0 = M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), void **, 4);
            M2C_FIELD(var_a0, f32 *, 0x2B0) = 0.0f;
            M2C_FIELD(var_a0, f32 *, 0x2B4) = var_fv0;
            M2C_FIELD(var_a0, f32 *, 0x2A8) = var_fv0f;
            M2C_FIELD(var_a0, f32 *, 0x2AC) = var_fv0;
            return;
        }
        temp_fv0f = (f32) D_800BEE1C;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B0) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B4) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2AC) = temp_fv0f;
        temp_fv0 = (f32) ((s32) D_800BEE18 / 2);
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2A8) = temp_fv0;
        temp_a0 = M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), void **, 4);
        M2C_FIELD(temp_a0, f32 *, 0x2B0) = temp_fv0;
        M2C_FIELD(temp_a0, s32 *, 0x2B4) = 0;
        M2C_FIELD(temp_a0, f64 *, 0x2A8) = temp_fv0;
        M2C_FIELD(temp_a0, f32 *, 0x2AC) = temp_fv0f;
        return;
    case 3:
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B0) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B4) = 0;
        var_fv0f = (f32) ((s32) D_800BEE18 / 2);
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2A8) = var_fv0f;
        var_fv0 = (f32) ((s32) D_800BEE1C / 2);
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2AC) = var_fv0;
        temp_a0_2 = M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), void **, 4);
        M2C_FIELD(temp_a0_2, f32 *, 0x2B0) = var_fv0f;
        M2C_FIELD(temp_a0_2, s32 *, 0x2B4) = 0;
        M2C_FIELD(temp_a0_2, f64 *, 0x2A8) = M2C_BITWISE(f64, var_fv0);
        var_a0 = M2C_FIELD(temp_a0_2, void **, 4);
        M2C_FIELD(var_a0, s32 *, 0x2B0) = 0;
        /* Duplicate return node #15. Try simplifying control flow for better match */
        M2C_FIELD(var_a0, f32 *, 0x2B4) = var_fv0;
        M2C_FIELD(var_a0, f32 *, 0x2A8) = var_fv0f;
        M2C_FIELD(var_a0, f32 *, 0x2AC) = var_fv0;
        return;
    case 4:
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B0) = 0;
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), s32 *, 0x2B4) = 0;
        var_fv0f = (f32) ((s32) D_800BEE18 / 2);
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2A8) = var_fv0f;
        var_fv0 = (f32) ((s32) D_800BEE1C / 2);
        M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), f32 *, 0x2AC) = var_fv0;
        temp_a0_3 = M2C_FIELD(M2C_FIELD(&D_800D6538, void **, -0x20), void **, 4);
        M2C_FIELD(temp_a0_3, f32 *, 0x2B0) = var_fv0f;
        M2C_FIELD(temp_a0_3, s32 *, 0x2B4) = 0;
        M2C_FIELD(temp_a0_3, f64 *, 0x2A8) = M2C_BITWISE(f64, var_fv0);
        temp_a0_4 = M2C_FIELD(temp_a0_3, void **, 4);
        M2C_FIELD(temp_a0_4, s32 *, 0x2B0) = 0;
        M2C_FIELD(temp_a0_4, f32 *, 0x2B4) = var_fv0;
        M2C_FIELD(temp_a0_4, f64 *, 0x2A8) = M2C_BITWISE(f64, var_fv0);
        var_a0 = M2C_FIELD(temp_a0_4, void **, 4);
        M2C_FIELD(var_a0, f32 *, 0x2B0) = var_fv0f;
        /* Duplicate return node #15. Try simplifying control flow for better match */
        M2C_FIELD(var_a0, f32 *, 0x2B4) = var_fv0;
        M2C_FIELD(var_a0, f32 *, 0x2A8) = var_fv0f;
        M2C_FIELD(var_a0, f32 *, 0x2AC) = var_fv0;
        return;
    }
}
