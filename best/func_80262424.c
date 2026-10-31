/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_80213A84(M2C_UNK *);                      /* extern */
M2C_UNK D_80214218(M2C_UNK *, s32);                 /* extern */
M2C_UNK D_802145E4(M2C_UNK *, f32, f32, f32);       /* extern */
M2C_UNK func_802608E0(void *, void *, M2C_UNK *);   /* extern */
extern f32 D_800A9AF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x58, 0x5c, 0x60, 0x70, 0x74], gap at: 0x64. */
void func_80262424(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp10;
    f32 temp_fs0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x7520);
    if (var_s0 != NULL) {
        temp_fs0 = D_800A9AF8;
        do {
            if ((M2C_FIELD(var_s0, s32 *, 0x1C) == arg1) && (M2C_FIELD(var_s0, f32 *, 0x24) > 0.0f)) {
                D_80214218(&sp10, arg2 + (M2C_FIELD(M2C_FIELD(var_s0, void **, 8), s32 *, 0xC) << 6));
                D_802145E4(&sp10, temp_fs0, temp_fs0, temp_fs0);
                D_80213A84(&sp10);
                func_802608E0(arg0, var_s0, &sp10);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}
