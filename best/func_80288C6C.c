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

f32 D_80215BE0(f32, f32);                           /* extern */
f32 D_80299AE8(f32);                                /* extern */
f32 func_8029A900(f32);                             /* extern */
extern f32 D_800AA6AC;
extern f32 D_800AA6B0;
extern f32 D_800AA6B4;
extern M2C_UNK D_800AA6B8;
extern M2C_UNK D_800AA6C0;
extern f32 D_800AA6C8;
extern f32 D_800AA6CC;
extern f32 D_800AA6D0;
extern f32 D_800AA6D4;
extern f32 D_800AA6D8;
extern f32 D_800AA6DC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x28, 0x2c], gap at: 0x20. */
void func_80288C6C(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 var_fa0;
    f32 var_fa1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0x78);
    if (temp_s0 != NULL) {
        temp_fs0f = D_80215BE0(D_800AA6AC, D_800AA6B0) + M2C_FIELD(&D_800AA6B8, f32 *, 0);
        temp_fs0 = M2C_FIELD(temp_s0, f32 *, 0x70) + M2C_FIELD(&D_800AA6C0, f32 *, 0) + D_80215BE0(D_800AA6B4, M2C_FIELD(&D_800AA6B8, f32 *, 4));
        M2C_FIELD(arg1, f32 *, 0x98) = (f32) (M2C_FIELD(temp_s0, f32 *, 4) + (temp_fs0f * func_8029A900(temp_fs0)));
        M2C_FIELD(arg1, f32 *, 0x8C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x9C) + M2C_FIELD(temp_s0, f32 *, 8)) * D_800AA6CC) + D_80215BE0(M2C_FIELD(&D_800AA6C0, f32 *, 4), D_800AA6C8));
        temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0xC) + (temp_fs0f * D_80299AE8(temp_fs0));
        M2C_FIELD(arg1, void **, 0x180) = temp_s0;
        M2C_FIELD(arg1, f32 *, 0xA0) = temp_fv0;
    }
    if (M2C_FIELD(arg0, u16 *, 0xD8) == 0x3E8) {
        var_fa0 = D_800AA6D0;
        var_fa1 = D_800AA6D4;
    } else {
        var_fa0 = D_800AA6D8;
        var_fa1 = D_800AA6DC;
    }
    M2C_FIELD(arg1, f32 *, 0x17C) = D_80215BE0(var_fa0, var_fa1);
}
