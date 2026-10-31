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

M2C_UNK D_8023E95C(s32, void *, s32);               /* extern */
M2C_UNK D_802417F0(M2C_UNK *, s32, s32, M2C_UNK, s32, s32); /* extern */
s32 D_802485E8(s32, void *, M2C_UNK *);             /* extern */

s32 func_8028A538(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp18;
    s32 temp_a1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_s5;
    u16 temp_v1;
    u16 var_v0_2;
    void *temp_s0;
    void *var_s3;

    var_s2 = arg2;
    if (arg0 != NULL) {
        var_s4 = 0;
        var_s3 = arg0;
loop_2:
        var_v0 = var_s2;
        if (var_s2 > 0) {
            temp_a1 = M2C_FIELD(var_s3, s32 *, 0x15AC);
            if (temp_a1 != 0) {
                temp_s0 = temp_a1 + 0x168;
                temp_s5 = M2C_FIELD(temp_s0, u16 *, 4);
                D_802417F0(&sp18, temp_a1, var_s2, 0, 0x80000, 0);
                if (arg1 != 0) {
                    M2C_FIELD(temp_s0, s32 *, 0x108) = arg1;
                } else {
                    M2C_FIELD(temp_s0, s32 *, 0x108) = temp_a1;
                }
                temp_a0 = M2C_FIELD(temp_s0, u16 *, 4);
                if ((temp_a0 - M2C_FIELD(&sp18, s32 *, 4)) >= 0) {
                    var_v0_2 = temp_a0 - M2C_FIELD(&sp18, u16 *, 6);
                } else {
                    var_v0_2 = 0;
                }
                M2C_FIELD(temp_s0, u16 *, 4) = var_v0_2;
                var_v1 = 0;
                if (!(var_v0_2 & 0xFFFF)) {
                    var_v1 = temp_a0 > 0U;
                }
                if (var_v1 != 0) {
                    D_8023E95C(temp_a1, temp_s0, D_802485E8(temp_a1, temp_s0, &sp18));
                }
                temp_v1 = M2C_FIELD(temp_s0, u16 *, 4);
                var_s2 -= temp_s5 - temp_v1;
                if ((temp_v1 == 0) && (M2C_FIELD(temp_s0, s32 *, 0x64) != 0)) {
                    M2C_FIELD(var_s3, s32 *, 0x15AC) = 0;
                    M2C_FIELD(temp_s0, s32 *, 0x64) = 0;
                }
            }
            var_s4 += 1;
            var_s3 += 4;
            if (var_s4 > 0) {
                goto block_20;
            }
            goto loop_2;
        }
    } else {
block_20:
        var_v0 = var_s2;
    }
    return var_v0;
}
