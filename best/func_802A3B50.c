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

M2C_UNK func_8029DC78(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
u8 func_802A3844(s32);                              /* extern */
s8 func_802A3A3C(s32);                              /* extern */
s32 func_802A5468(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, u32, M2C_UNK *); /* extern */
extern s32 D_800B82D0;
extern M2C_UNK D_800FCD28;
extern M2C_UNK D_800FCD48;

void func_802A3B50(s32 arg0, s8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 *var_s0;
    u32 var_s1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    var_s2 = arg0;
    var_s0 = arg1;
    var_s1 = arg2;
    var_s3 = 0;
    if (D_800B82D0 == 0) {
        var_s3 = -1;
    }
    var_v0 = var_s1 < 4U;
    if (var_s1 != 0) {
loop_3:
        temp_a0 = var_s2;
        if (var_s2 & 3) {
            var_s2 += 1;
            *var_s0 = func_802A3A3C(temp_a0);
            var_s1 -= 1;
            var_s0 += 1;
            if (var_s1 != 0) {
                goto loop_3;
            }
        }
        var_v0 = var_s1 < 4U;
    }
    if (var_v0 == 0) {
        var_v0_2 = var_s1 < 0x10U;
        do {
            if ((var_v0_2 == 0) && !((s32) var_s0 & 0xF) && (var_s3 != -1)) {
                var_s3 = func_802A5468(&D_800FCD48, 1, 0, var_s2, (s32) var_s0, var_s1, &D_800FCD28);
                var_v0_3 = var_s1 < 4U;
                if (var_s3 != -1) {
                    func_8029DC78(&D_800FCD28, 0, 1);
                    var_s1 = 0;
                    goto block_14;
                }
            } else {
                temp_v0 = func_802A3844(var_s2);
                M2C_FIELD(var_s0, s8 *, 0) = (s8) (temp_v0 >> 0x18);
                temp_s0 = var_s0 + 1;
                M2C_FIELD(var_s0, s8 *, 1) = (s8) (temp_v0 >> 0x10);
                temp_s0_2 = temp_s0 + 1;
                M2C_FIELD(temp_s0, s8 *, 1) = (s8) (temp_v0 >> 8);
                M2C_FIELD(temp_s0_2, u8 *, 1) = temp_v0;
                var_s0 = (char *)(temp_s0_2); var_s0 += (s32)(1 + 1);
                var_s2 += 4;
                var_s1 -= 4;
block_14:
                var_v0_3 = var_s1 < 4U;
            }
            var_v0_2 = var_s1 < 0x10U;
        } while (var_v0_3 == 0);
    }
    if (var_s1 != 0) {
        do {
            temp_a0_2 = var_s2;
            var_s2 += 1;
            *var_s0 = func_802A3A3C(temp_a0_2);
            var_s1 -= 1;
            var_s0 += 1;
        } while (var_s1 != 0);
    }
}
