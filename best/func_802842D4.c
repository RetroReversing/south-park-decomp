/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

void **D_8022154C(M2C_UNK, s32, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_802845B8(void *, f32, f32, M2C_UNK32, f32, f32, M2C_UNK32, s32); /* extern */
extern M2C_UNK D_800AA394;
extern f32 D_800AA3A8;
extern f32 D_800AA3AC;
extern M2C_UNK D_800AA3B0;
extern void *D_800F4E98;
extern s32 D_800F4E9C;
extern s32 D_800F4EA0;
extern s32 D_800F4EA4;
extern void **D_800F4EB4;

void func_802842D4(void) {
    f32 sp20;
    f32 sp24;
    M2C_UNK32 sp28;
    f32 sp30;
    f32 sp34;
    M2C_UNK32 sp38;
    f32 temp_fs0;
    f32 temp_fv1f;
    s32 temp_lo;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    void **temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_s1;

    if (D_800F4EA4 != 0) {
        temp_v0 = D_8022154C(0, ((D_800F4E9C * D_800F4EA0) << 8) | 0x40, 3, &D_800AA394);
        temp_fs0 = D_800AA3A8;
        var_s1 = *temp_v0;
        var_s3 = 0;
        D_800F4EB4 = temp_v0;
        temp_fv1f = (f32) (0x64 / (s32) D_800F4E9C);
        D_800F4E98 = var_s1;
        sp38 = M2C_FIELD(&D_800AA3B0, M2C_UNK32 *, 0);
        sp28 = M2C_FIELD(&D_800AA3B0, M2C_UNK32 *, 4);
        sp30 = temp_fv1f;
        sp34 = -(temp_fv1f * D_800AA3AC);
        do {
            var_s2 = 0;
            sp24 = (f32) D_800F4EA0 * -sp34;
            if (D_800F4EA0 > 0) {
                do {
                    var_s0 = 0;
                    sp20 = temp_fs0;
                    if (D_800F4E9C > 0) {
                        do {
                            func_802845B8(var_s1, sp20, sp24, sp28, sp30, sp34, sp38, var_s3);
                            var_s1 += 0x40;
                            var_s0 += 1;
                            sp20 += sp30;
                        } while (var_s0 < D_800F4E9C);
                    }
                    var_s2 += 1;
                    sp24 += sp34;
                } while (var_s2 < D_800F4EA0);
            }
            var_s3 += 1;
        } while (var_s3 < 4);
        temp_lo = D_800F4E9C * D_800F4EA0;
        M2C_FIELD(var_s1, s32 *, 0) = (s32) M2C_FIELD(D_800F4E98, s32 *, 0);
        M2C_FIELD(var_s1, s32 *, 4) = (s32) M2C_FIELD(D_800F4E98, s32 *, 4);
        M2C_FIELD(var_s1, s32 *, 8) = (s32) M2C_FIELD(D_800F4E98, s32 *, 8);
        M2C_FIELD(var_s1, s32 *, 0xC) = (s32) M2C_FIELD(D_800F4E98, s32 *, 0xC);
        temp_v0_2 = (temp_lo << 6) + D_800F4E98;
        M2C_FIELD(var_s1, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0_2, s32 *, 0);
        M2C_FIELD(var_s1, s32 *, 0x14) = (s32) M2C_FIELD(temp_v0_2, s32 *, 4);
        M2C_FIELD(var_s1, s32 *, 0x18) = (s32) M2C_FIELD(temp_v0_2, s32 *, 8);
        M2C_FIELD(var_s1, s32 *, 0x1C) = (s32) M2C_FIELD(temp_v0_2, s32 *, 0xC);
        temp_v0_3 = (temp_lo << 7) + D_800F4E98;
        M2C_FIELD(var_s1, s32 *, 0x20) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0);
        M2C_FIELD(var_s1, s32 *, 0x24) = (s32) M2C_FIELD(temp_v0_3, s32 *, 4);
        M2C_FIELD(var_s1, s32 *, 0x28) = (s32) M2C_FIELD(temp_v0_3, s32 *, 8);
        M2C_FIELD(var_s1, s32 *, 0x2C) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0xC);
        temp_v1 = (temp_lo * 0xC * 0x10) + D_800F4E98;
        M2C_FIELD(var_s1, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0);
        M2C_FIELD(var_s1, s32 *, 0x34) = (s32) M2C_FIELD(temp_v1, s32 *, 4);
        M2C_FIELD(var_s1, s32 *, 0x38) = (s32) M2C_FIELD(temp_v1, s32 *, 8);
        M2C_FIELD(var_s1, s32 *, 0x3C) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
        M2C_FIELD(var_s1, s32 *, 0xC) = 0;
        M2C_FIELD(var_s1, s8 *, 0xD) = -0x80;
        M2C_FIELD(var_s1, s8 *, 0xE) = 0;
        M2C_FIELD(var_s1, s32 *, 0x1C) = 0;
        M2C_FIELD(var_s1, s8 *, 0x1D) = -0x80;
        M2C_FIELD(var_s1, s8 *, 0x1E) = 0;
        M2C_FIELD(var_s1, s32 *, 0x2C) = 0;
        M2C_FIELD(var_s1, s8 *, 0x2D) = -0x80;
        M2C_FIELD(var_s1, s8 *, 0x2E) = 0;
        M2C_FIELD(var_s1, s32 *, 0x3C) = 0;
        M2C_FIELD(var_s1, s8 *, 0x3D) = -0x80;
        M2C_FIELD(var_s1, s8 *, 0x3E) = 0;
    }
}
