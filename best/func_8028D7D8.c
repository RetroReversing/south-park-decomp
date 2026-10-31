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

M2C_UNK D_8020B858(M2C_UNK);                        /* extern */
M2C_UNK D_8020BDE4(M2C_UNK, void *, s32);           /* extern */
extern M2C_UNK D_800AA9F0;
extern f32 D_800AA9F8;
extern f32 D_800AA9FC;
extern f32 D_800AAA00;
extern f32 D_800AAA04;
extern f32 D_800AAA08;
extern void *D_800B3628;
extern void *D_800D7F68;

void func_8028D7D8(void) {
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 var_fv0;
    f32 var_fv1f;
    f32 var_fv1f_2;
    f32 var_fv1f_3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    var_fv1f = M2C_FIELD(&D_800AA9F0, f32 *, 4);
    temp_ft0 = M2C_FIELD(D_800B3628, f32 *, 0x10);
    temp_fv0f = M2C_FIELD(D_800B3628, f32 *, 0x20);
    if (temp_ft0 < temp_fv0f) {
        var_fv1f_2 = (temp_fv0f - temp_ft0) / D_800AA9FC;
        if (D_800AAA00 < var_fv1f_2) {
            var_fv1f_2 = D_800AAA00;
        }
        var_fv1f = D_800AAA00 - var_fv1f_2;
    }
    temp_fv0f_2 = M2C_FIELD(D_800B3628, f32 *, 0x10);
    temp_fv0 = M2C_FIELD(D_800B3628, f32 *, 0x24);
    if (temp_fv0 < temp_fv0f_2) {
        var_fv1f_3 = (temp_fv0f_2 - temp_fv0) / D_800AA9FC;
        if (D_800AAA04 < var_fv1f_3) {
            var_fv1f_3 = D_800AAA04;
        }
        var_fv1f = D_800AAA04 - var_fv1f_3;
    }
    temp_fs0 = ((f32) D_800BEE1C - ((f32) D_800BEE18 / M2C_FIELD(D_800B3628, f32 *, 0x34))) * D_800AA9F8 * var_fv1f;
    temp_a1 = D_800D7F68;
    temp_v0 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    D_800D7F68 = temp_v0 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    D_8020BDE4(0x13, temp_a1, 0xE3000A01);
    D_8020B858(0x19);
    var_a1 = D_800BEE18;
    temp_v1 = D_800D7F68;
    temp_a0 = D_800D7F68 + 8;
    D_800D7F68 = temp_a0;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFA00FFFF;
    temp_a3 = temp_a0 + 8;
    M2C_FIELD(temp_v1, s32 *, 4) = 0xFF;
    D_800D7F68 = temp_a3;
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    var_v1 = (s32) temp_fs0;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    M2C_FIELD(D_800D7F68, s32 *, 8) = (s32) (((var_a1 & 0x3FF) << 0xE) | (((var_v1 & 0x3FF) * 4) | 0xF6000000));
    var_a1_2 = D_800BEE18;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    D_800D7F68 = temp_a0 + 0x10;
    if (var_a1_2 < 0) {
        var_a1_2 = 0;
    }
    var_v1_2 = D_800BEE1C;
    if (var_v1_2 < 0) {
        var_v1_2 = 0;
    }
    var_fv0 = (f32) D_800BEE1C - temp_fs0;
    M2C_FIELD(temp_a0, s32 *, 8) = (s32) (((var_a1_2 & 0x3FF) << 0xE) | (((var_v1_2 & 0x3FF) * 4) | 0xF6000000));
    if (!(var_fv0 >= 0.0f)) {
        var_fv0 = 0.0f;
    }
    if (D_800AAA08 <= var_fv0) {
        var_v0 = ((s32) (var_fv0 - D_800AAA08) | 0x80000000) & 0x3FF;
    } else {
        var_v0 = (s32) var_fv0 & 0x3FF;
    }
    M2C_FIELD(temp_a3, s32 *, 4) = (s32) (var_v0 * 4);
}
