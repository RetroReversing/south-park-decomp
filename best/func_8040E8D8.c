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

M2C_UNK D_8023D274(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK D_8023D4C8(s32, M2C_UNK, M2C_UNK);          /* extern */
extern s32 D_800CB5B8;
extern M2C_UNK D_800CCA80;
extern void *D_8010E7EC;

s32 func_8040E8D8(void) {
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    if (D_800CB5B8 == 0) {
        if ((D_8010E7EC == NULL) || (temp_v0 = M2C_FIELD(D_8010E7EC, void **, 0x334), (temp_v0 == NULL)) || (M2C_FIELD(temp_v0, u16 *, 8) != 1)) {
            D_800CB5B8 = 1;
            if (D_8010E7EC != NULL) {
                D_8023D274(D_8010E7EC, 0x88, -1, 1);
                var_s0 = 0;
                if (M2C_FIELD(&D_800CCA80, s32 *, 0xF4) > 0) {
                    var_s1 = 0;
                    do {
                        temp_v1 = M2C_FIELD(&D_800CCA80, s32 *, 0xEC) + var_s1;
                        if ((temp_v1 != NULL) && (temp_v1 != D_8010E7EC) && ((u32) (M2C_FIELD(temp_v1, u16 *, 0xD8) - 0x65) < 4U)) {
                            D_8023D4C8(M2C_FIELD(temp_v1, s32 *, 0x334), 5, 0x466A2400);
                        }
                        var_s0 += 1;
                        var_s1 += 0x368;
                    } while (var_s0 < M2C_FIELD(&D_800CCA80, s32 *, 0xF4));
                }
            }
        }
    }
    return 0;
}
