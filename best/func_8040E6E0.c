/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK D_80209C78(M2C_UNK *, M2C_UNK);             /* extern */
M2C_UNK D_8023D274(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK D_8023D4C8(void *, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
extern f32 D_800ABA00;
extern M2C_UNK D_800ADDCC;
extern s32 D_800CB5B8;
extern f32 D_800CB5BC;
extern M2C_UNK D_800CC760;
extern M2C_UNK D_800CCA80;
extern s8 D_800D77F2;
extern void *D_8010E7EC;

s32 func_8040E6E0(void *arg0) {
    M2C_UNK *var_a0;
    f32 temp_fv0;
    s16 var_v0;
    s16 var_v1;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;

    if (D_800CB5B8 != 0) {
        if ((D_8010E7EC != NULL) && (temp_a0 = M2C_FIELD(D_8010E7EC, void **, 0x334), (temp_a0 != NULL))) {
            if (M2C_FIELD(temp_a0, u16 *, 8) != 1) {
                if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, u16 *, 0x14) != 2)) {
                    D_8023D4C8(temp_a0, 2, 0x466A2400);
                }
                goto block_7;
            }
        } else {
block_7:
            temp_fv0 = D_800CB5BC - D_800ABA00;
            D_800CB5BC = temp_fv0;
            if (temp_fv0 <= 0.0f) {
                D_800D77F2 = M2C_FIELD(arg0, u8 *, 1) - 1;
                D_80209C78(&D_800CC760, 0xC);
            }
        }
    } else {
        if (D_8010E7EC != NULL) {
            temp_v0 = M2C_FIELD(D_8010E7EC, void **, 0x334);
            if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 8) != 1)) {
                temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC0);
                if (temp_v1 & 0x20202) {
                    var_v0 = M2C_FIELD(arg0, s16 *, 0) - 1;
                    if (var_v0 <= 0) {
                        var_v0 = 1;
                    }
                    M2C_FIELD(arg0, s16 *, 0) = var_v0;
                } else if (temp_v1 & 0x40101) {
                    var_v1 = M2C_FIELD(arg0, s16 *, 0) + 1;
                    if (var_v1 >= 5) {
                        var_v1 = 4;
                    }
                    M2C_FIELD(arg0, s16 *, 0) = var_v1;
                }
            }
        }
        var_a0 = &D_800CCA80;
loop_21:
        temp_s0 = M2C_FIELD(var_a0, void **, 0xC88);
        var_a0 += 4;
        if (temp_s0 != NULL) {
            if (M2C_FIELD(temp_s0, u16 *, 0xD8) == *(&D_800ADDCC + ((M2C_FIELD(arg0, s16 *, 0) - 1) * 0xC))) {
                if (temp_s0 != D_8010E7EC) {
                    if (D_8010E7EC != NULL) {
                        M2C_FIELD(D_8010E7EC, s8 *, 0x199) = -1;
                        D_8023E95C(D_8010E7EC, D_8010E7EC + 0x168, 0x3F);
                    }
                    D_8023D274(temp_s0, 0x92, -1, 1);
                    D_8010E7EC = temp_s0;
                    M2C_FIELD(temp_s0, s8 *, 0x199) = -1;
                    D_8023E95C(temp_s0, temp_s0 + 0x168, 0x40);
                }
            } else {
                goto loop_21;
            }
        }
    }
    return 0;
}
