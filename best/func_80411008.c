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
/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

s32 func_8029C5A4();
s32 func_8029C610();
s32 func_8029C638();
s32 func_8029DC78();
s32 func_80411184();
s32 func_80411220();
extern u8 D_800F604C;
extern char D_8010E858[];

s32 func_80411008(s32 arg0, s8 *arg1) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    char *var_v1;
    char *var_v1_2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s8 var_s2;

    var_s2 = 0;
    var_s0 = 3;
    func_8029C5A4();
    do {
        func_80411184(0);
        func_8029C638(1, &D_8010E858);
        func_8029DC78(arg0, &sp20, 1);
        temp_s6 = func_8029C638(0, &D_8010E858);
        func_8029DC78(arg0, &sp20, 1);
        func_80411220(&sp24, &sp10);
        var_a0 = 0;
        if (D_800F604C != 0) {
            var_v1 = &sp10;
loop_3:
            if (M2C_FIELD(var_v1, u8 *, 2) & 4) {
                var_a0 += 1;
                var_v1 += 4;
                if (var_a0 < (s32) D_800F604C) {
                    goto loop_3;
                }
            } else {
                var_s0 -= 1;
            }
        }
        if (var_a0 == D_800F604C) {
            var_s0 = 0;
        }
    } while (var_s0 > 0);
    var_a0_2 = 0;
    if (D_800F604C != 0) {
        var_v1_2 = &sp10;
        do {
            if ((M2C_FIELD(var_v1_2, u8 *, 3) == 0) && (M2C_FIELD(var_v1_2, u8 *, 2) & 1)) {
                var_s2 |= 1 << var_a0_2;
            }
            var_a0_2 += 1;
            var_v1_2 += 4;
        } while (var_a0_2 < (s32) D_800F604C);
    }
    func_8029C610(var_a0_2);
    *arg1 = var_s2;
    return temp_s6;
}
