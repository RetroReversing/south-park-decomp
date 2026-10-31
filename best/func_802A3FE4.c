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

M2C_UNK func_8029DC78(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802A3810(s32, s32, u8);                /* extern */
M2C_UNK func_802A3E88(s32, u8);                     /* extern */
s32 func_802A5468(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, u32, M2C_UNK *); /* extern */
extern s32 D_800B82D0;
extern M2C_UNK D_800FCD28;
extern M2C_UNK D_800FCD48;

void func_802A3FE4(s32 arg0, u8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u32 var_s0;
    u8 *var_s1;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v1;
    void *var_s3;

    var_s2 = arg0;
    var_s1 = arg1;
    var_s0 = arg2;
    var_s4 = 0;
    if (D_800B82D0 == 0) {
        var_s4 = -1;
    }
    var_v0 = var_s0 < 4U;
    if (var_s0 != 0) {
        var_v0_2 = var_s2 & 3;
loop_4:
        temp_a0 = var_s2;
        if (var_v0_2 != 0) {
            var_s2 += 1;
            temp_a1 = *var_s1;
            var_s1 += 1;
            func_802A3E88(temp_a0, temp_a1);
            var_s0 -= 1;
            var_v0_2 = var_s2 & 3;
            if (var_s0 != 0) {
                goto loop_4;
            }
        }
        var_v0 = var_s0 < 4U;
    }
    if (var_v0 == 0) {
        var_s3 = var_s1 + 3;
        var_v0_3 = var_s0 < 0x10U;
        do {
            if ((var_v0_3 == 0) && !((s32) var_s1 & 0xF)) {
                if (var_s4 != -1) {
                    var_s4 = func_802A5468(&D_800FCD48, 1, 1, var_s2, (s32) var_s1, var_s0, &D_800FCD28);
                    var_v0_4 = var_s0 < 4U;
                    if (var_s4 != -1) {
                        func_8029DC78(&D_800FCD28, 0, 1);
                        var_s0 = 0;
                        goto block_16;
                    }
                } else {
                    goto block_15;
                }
            } else {
block_15:
                temp_v0 = M2C_FIELD(var_s3, u8 *, -2);
                temp_v1 = M2C_FIELD(var_s3, u8 *, -1);
                temp_a2 = M2C_FIELD(var_s3, u8 *, 0);
                var_s3 += 4;
                func_802A3810(var_s2, (*var_s1 << 0x18) | (temp_v0 << 0x10) | (temp_v1 << 8) | temp_a2, temp_a2);
                var_s2 += 4;
                var_s1 += 4;
                var_s0 -= 4;
block_16:
                var_v0_4 = var_s0 < 4U;
            }
            var_v0_3 = var_s0 < 0x10U;
        } while (var_v0_4 == 0);
    }
    var_a0 = var_s2;
    if (var_s0 != 0) {
        do {
            var_s2 += 1;
            temp_a1_2 = *var_s1;
            var_s1 += 1;
            func_802A3E88(var_a0, temp_a1_2);
            var_s0 -= 1;
            var_a0 = var_s2;
        } while (var_s0 != 0);
    }
}
