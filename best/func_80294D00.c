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

M2C_UNK func_8029D580(M2C_UNK *, M2C_UNK *, M2C_UNK, void **); /* extern */
extern M2C_UNK D_800AAC28;
extern M2C_UNK D_800AAC2C;

void *func_80294D00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
int __repair_literal;

    s16 var_s0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_v0_2;
    u32 temp_a1;
    u32 temp_a2;
    void **temp_a3;
    void *temp_a3_2;
    void *temp_s2;
    void *temp_v1;
    void *var_v0;

    temp_a3 = ((arg3 & 0xFF) * 0x10) + M2C_FIELD(arg0, s32 *, 0x60);
    temp_s2 = *temp_a3;
    var_s0 = M2C_FIELD(temp_s2, s16 *, 0xE);
    var_s1 = 1;
    if (temp_s2 == NULL) {
        func_8029D580(&D_800AAC28, &D_800AAC2C, 0x376, temp_a3);
    }
    var_v0 = NULL;
    if (var_s0 > 0) {
        temp_a1 = arg1 & 0xFF;
        temp_a2 = arg2 & 0xFF;
        var_v0_2 = var_s0 + 1;
loop_4:
        temp_a0 = var_v0_2 / 2;
__repair_literal = 4;

        temp_a3_2 = M2C_FIELD((temp_s2 + ((temp_a0 - 1) * __repair_literal)), void **, 0x10);
        temp_v1 = M2C_FIELD(temp_a3_2, void **, 4);
        if (temp_a1 >= (u8) M2C_FIELD(temp_v1, u8 *, 2)) {
            if (((u8) M2C_FIELD(temp_v1, u8 *, 3) < temp_a1) || (temp_a2 < (u8) M2C_FIELD(temp_v1, u8 *, 0)) || (var_v0 = temp_a3_2, (((u8) M2C_FIELD(temp_v1, u8 *, 1) < temp_a2) != 0))) {
                if (temp_a1 >= (u8) M2C_FIELD(temp_v1, u8 *, 2)) {
                    if (temp_a2 >= (u8) M2C_FIELD(temp_v1, u8 *, 0)) {
                        var_s1 = temp_a0 + 1;
                    } else if ((u8) M2C_FIELD(temp_v1, u8 *, 3) < temp_a1) {
                        var_s1 = temp_a0 + 1;
                    } else {
                        goto block_15;
                    }
                } else {
                    goto block_15;
                }
                goto block_16;
            }
        } else {
block_15:
            var_s0 = temp_a0 - 1;
block_16:
            var_v0_2 = var_s1 + var_s0;
            if (var_s0 < var_s1) {
                var_v0 = NULL;
            } else {
                goto loop_4;
            }
        }
    }
    return var_v0;
}
