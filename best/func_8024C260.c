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

M2C_UNK D_80213224(void *, f32, void *, M2C_UNK *); /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
M2C_UNK func_8024BF80(M2C_UNK *);                   /* extern */
extern M2C_UNK D_800A92A0;
extern M2C_UNK D_800A92A8;
extern M2C_UNK D_800A92B0;
extern f32 D_800ABA00;
extern s8 D_800F4D5C;

void func_8024C260(void *arg0, void *arg1) {
    M2C_UNK sp10;
    f32 temp_fv0;
    f32 var_fv0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0x154);
    D_800F4D5C = 0;
    if (temp_s0 != NULL) {
        if ((M2C_FIELD(temp_s0, s16 *, 0x218) == 0x2710) && (((f32) M2C_FIELD(temp_s0, s16 *, 0x100) * M2C_FIELD(&D_800A92A0, f32 *, 0)) <= M2C_FIELD(temp_s0, f32 *, 0xF8))) {
            func_8024BF80(&sp10);
            temp_fv0 = M2C_FIELD(arg1, f32 *, 0x60) + (D_800ABA00 * M2C_FIELD(&D_800A92A0, f32 *, 4));
            M2C_FIELD(arg1, f32 *, 0x15C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x70) - M2C_FIELD(arg0, f32 *, 0x70));
            M2C_FIELD(arg1, f32 *, 0x60) = temp_fv0;
            if (M2C_FIELD(&D_800A92A8, f32 *, 0) < temp_fv0) {
                M2C_FIELD(arg1, f32 *, 0x60) = (f32) M2C_FIELD(&D_800A92A8, f32 *, 0);
            }
            D_80213224(arg1 + 0x50, M2C_FIELD(arg1, f32 *, 0x60), arg0 + 4, &sp10);
            if (M2C_FIELD(temp_s0, f32 *, 0xF8) < ((f32) M2C_FIELD(temp_s0, s16 *, 0x100) * M2C_FIELD(&D_800A92A8, f32 *, 4))) {
                var_fv0 = M2C_FIELD(arg1, f32 *, 0x158) + M2C_FIELD(&D_800A92B0, f32 *, 0);
            } else {
                var_fv0 = M2C_FIELD(arg1, f32 *, 0x158) - M2C_FIELD(&D_800A92B0, f32 *, 4);
            }
            M2C_FIELD(arg1, f32 *, 0x158) = var_fv0;
        }
        if ((temp_s0 != NULL) && (M2C_FIELD(temp_s0, s8 *, 0x198) != 0x16)) {
            D_8023E95C(arg0, arg1, 2);
        }
    }
}
