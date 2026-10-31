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

M2C_UNK D_80211B2C(M2C_UNK *, void *);              /* extern */
M2C_UNK D_80213A84(M2C_UNK *);                      /* extern */
M2C_UNK D_80214438(M2C_UNK *, void *);              /* extern */
M2C_UNK D_80214454(M2C_UNK *, void *);              /* extern */
M2C_UNK D_802145E4(M2C_UNK *, f32, f32, f32);       /* extern */
M2C_UNK func_8029A2CC(M2C_UNK *, s32);              /* extern */
extern f32 D_800A9B04;
extern f32 D_800A9B08;
extern s32 D_800AB9FC;

void func_80262944(void *arg0, void *arg1) {
    M2C_UNK sp10;
    f32 var_fv0;
    void *temp_s0;
    void *temp_v1;
    void *var_a0;
    void *var_v0;

    temp_s0 = M2C_FIELD(arg1, void **, 0xB0);
    if (temp_s0 != NULL) {
        if (temp_s0 == (void *)-1) {
            var_v0 = arg1 + (D_800AB9FC << 6) + 0x28;
            temp_v1 = arg1 + ((D_800AB9FC ^ 1) << 6);
            var_a0 = temp_v1 + 0x28;
            do {
                M2C_FIELD(var_v0, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
                M2C_FIELD(var_v0, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
                M2C_FIELD(var_v0, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
                M2C_FIELD(var_v0, s32 *, 0xC) = (s32) M2C_FIELD(var_a0, s32 *, 0xC);
                var_a0 += 0x10;
                var_v0 += 0x10;
            } while (var_a0 != (temp_v1 + 0x68));
            M2C_FIELD(arg1, void **, 0xB0) = NULL;
        } else {
            func_8029A2CC(&sp10, temp_s0 + ((D_800AB9FC << 6) + 0x48));
            var_fv0 = D_800A9B04;
            if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xF8), s32 *, 0x10) != 0) {
                var_fv0 = D_800A9B08;
            }
            D_802145E4(&sp10, var_fv0, var_fv0, var_fv0);
            D_80213A84(&sp10);
            D_80214438(&sp10, arg1 + 0x10);
            if (M2C_FIELD(arg0, s32 *, 0x3C) & 4) {
                D_80214454(&sp10, arg1 + 0x1C);
            } else {
                D_80211B2C(&sp10, arg1 + ((D_800AB9FC << 6) + 0x28));
            }
        }
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 8);
    }
}
