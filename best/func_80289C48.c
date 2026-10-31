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

s32 D_80200C94(M2C_UNK *, f32 *);                   /* extern */
s32 D_80203A94(M2C_UNK *, M2C_UNK);                 /* extern */
s32 D_80205468(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
f32 D_80215BE0(f32, f32);                           /* extern */
void *func_8025A688(void *, s32, M2C_UNK, s32, s32, f32, s32, f32, f32, s32, s32, s32, M2C_UNK32, M2C_UNK32, M2C_UNK32, s32 *); /* extern */
extern M2C_UNK D_289F9C;
extern M2C_UNK D_28A710;
extern M2C_UNK D_800AA7E8;
extern M2C_UNK32 D_800AA7F0;
extern f32 D_800AA7F4;
extern M2C_UNK D_800CCA80;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x88, 0x8c], gap at: 0x80. */
s32 func_80289C48(void *arg0) {
    f32 sp40;
    s32 sp44;
    f32 sp48;
    M2C_UNK32 sp50;
    M2C_UNK32 sp54;
    M2C_UNK32 sp58;
    s32 sp60;
    f32 temp_fs0;
    f32 temp_fs0f;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s3;
    void *temp_v0_2;
    void *var_v1;

    var_a1 = 0;
    sp60 = 1;
    if (arg0 != NULL) {
        var_s3 = 0;
        var_v1 = arg0;
loop_2:
        if (M2C_FIELD(var_v1, s32 *, 0x15AC) != 0) {
            var_s3 += 1;
            var_v1 += 4;
            if (var_s3 <= 0) {
                goto loop_2;
            }
        }
        if (var_s3 <= 0) {
            temp_s1 = D_80203A94(&D_800CCA80, 0x4B0);
            temp_fs0 = M2C_FIELD(&D_800AA7E8, f32 *, 0);
            temp_fs0f = M2C_FIELD(&D_800AA7E8, f32 *, 4);
            temp_s2 = D_80205468(&D_800CCA80, 1, 0x2BC);
            sp40 = M2C_FIELD(arg0, f32 *, 4);
            sp44 = M2C_FIELD(arg0, s32 *, 8);
            sp48 = M2C_FIELD(arg0, f32 *, 0xC);
            sp40 += D_80215BE0(temp_fs0, temp_fs0f);
            sp48 += D_80215BE0(temp_fs0, temp_fs0f);
            temp_v0 = D_80200C94(&D_800CCA80, &sp40);
            sp50 = D_800AA7F0;
            sp54 = D_800AA7F0;
            sp58 = D_800AA7F0;
            temp_v0_2 = func_8025A688(&D_800CCA80 + 0x171C, temp_s1, 0x4B0, temp_s2, temp_v0, sp40, sp44, sp48, M2C_FIELD(arg0, f32 *, 0x70), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), sp50, sp54, sp58, &sp60);
            var_a1 = 1;
            M2C_FIELD(temp_v0_2, M2C_UNK **, 0x238) = &D_289F9C;
            M2C_FIELD(temp_v0_2, M2C_UNK **, 0x234) = &D_28A710;
            M2C_FIELD(temp_v0_2, void **, 0x1CC) = arg0;
            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0x14), f32 *, 0x34) = (f32) D_800AA7F4;
            M2C_FIELD((arg0 + (var_s3 * 4)), void **, 0x15AC) = temp_v0_2;
        }
    }
    return var_a1;
}
