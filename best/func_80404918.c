/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

s32 D_8022D0BC(void *);                             /* extern */
s32 D_8022D0D4(void *);                             /* extern */
extern s32 D_800BF0D8;
extern s32 D_800BF0DC;
extern s32 D_800BF0E0;
extern s32 D_800BF0E4;
extern s32 D_800BF0E8;
extern char D_800BF0EC[];
extern char D_800BF100[];

s32 func_80404918(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_v1;

    if (D_8022D0BC(M2C_FIELD(arg0, void **, 0x24)) != 0) {
        func_80273F04(0x2EF, 0);
        temp_v0 = D_800BF0D8 - 1;
        D_800BF0D8 = temp_v0;
        if (temp_v0 < 0) {
            D_800BF0D8 = 0x1B;
        }
    } else if (D_8022D0D4(M2C_FIELD(arg0, void **, 0x24)) != 0) {
        func_80273F04(0x2EF, 0);
        temp_v0_2 = D_800BF0D8 + 1;
        D_800BF0D8 = temp_v0_2;
        if ((u32) temp_v0_2 >= 0x1CU) {
            D_800BF0D8 = 0;
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC4) & 0x9000) {
        temp_v1 = *(D_800BF100 + D_800BF0D8);
        if (temp_v1 == 0x3E) {
            D_800BF0E0 = 0;
            if (D_800BF0E4 != 0) {
                var_a0 = D_800BF0DC;
                var_v0_2 = var_a0 + 1;
                if (var_a0 < 0x11) {
                    do {
                        *(D_800BF0EC + var_a0) = *(D_800BF0EC + var_v0_2);
                        var_a0 = var_v0_2;
                        var_v0_2 = var_a0 + 1;
                    } while (var_a0 < 0x11);
                }
                temp_v1_2 = D_800BF0DC - 1;
                D_800BF0DC = temp_v1_2;
                D_800BF0E4 -= 1;
                if (temp_v1_2 < 0) {
                    D_800BF0DC = 0;
                }
                *(D_800BF0EC + D_800BF0DC) = 0;
            }
            goto block_19;
        }
        var_v0 = 1;
        if (temp_v1 != 0x3C) {
            D_800BF0E0 = 0;
            if (D_800BF0E4 != D_800BF0E8) {
                var_a0_2 = 0x10;
                var_v0_3 = 0xF;
                if (D_800BF0DC < 0x10) {
                    do {
                        *(D_800BF0EC + var_a0_2) = *(D_800BF0EC + var_v0_3);
                        var_a0_2 = var_v0_3;
                        var_v0_3 = var_a0_2 - 1;
                    } while (D_800BF0DC < var_a0_2);
                }
                *(D_800BF0EC + D_800BF0DC) = *(D_800BF100 + D_800BF0D8);
                temp_v1_3 = D_800BF0E4 + 1;
                D_800BF0DC += 1;
                D_800BF0E4 = temp_v1_3;
                *(D_800BF0EC + temp_v1_3) = 0;
            }
            goto block_19;
        }
    } else {
block_19:
        var_v0 = (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC4) & 0x4000) != 0;
    }
    return var_v0;
}
