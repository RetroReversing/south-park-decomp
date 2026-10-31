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

extern char D_800B2370[];

void func_80276AC8(void *arg0) {
int __repair_literal;

    char *var_a3_2;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v1;
    s8 var_a2;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0;
    void *var_v0_2;
    void *var_v1_2;

    var_a2 = 0;
    var_a3 = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    M2C_FIELD(arg0, s16 *, 0xC) = 0x80;
    M2C_FIELD(arg0, s16 *, 0xE) = 0x100;
    M2C_FIELD(arg0, s16 *, 0x10) = 0x100;
    M2C_FIELD(arg0, s32 *, 8) = 0xF;
    M2C_FIELD(arg0, s8 *, 0x1B) = 5;
    M2C_FIELD(arg0, s8 *, 0x1D) = -1;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 2;
    do {
        temp_v1 = var_a3 + arg0;
        temp_v1_2 = temp_v1 + 0x31;
        var_a1 = 0;
        M2C_FIELD(temp_v1, s8 *, 0x31) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 1) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 2) = var_a2;
        M2C_FIELD(temp_v1_2, s8 *, 3) = var_a2;
        var_v0 = temp_v1_2;
loop_2:
        var_a1 += 1;
        M2C_FIELD(var_v0, s8 *, 8) = 0;
        M2C_FIELD(var_v0, s8 *, 0xC) = 0;
        var_v0 = temp_v1_2 + var_a1;
__repair_literal = 4;

        if (var_a1 < __repair_literal) {
            goto loop_2;
        }
        var_a3 += 0x12;
        var_a2 += 1;
        M2C_FIELD(temp_v1_2, s8 *, 4) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 5) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 6) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 0x10) = 0;
    } while (var_a2 < 4);
    var_v1 = 0;
    temp_a1 = arg0 + 0x1F;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(temp_a1, s8 *, 1) = 0;
    M2C_FIELD(temp_a1, s8 *, 2) = 0;
    M2C_FIELD(temp_a1, s8 *, 3) = 0;
    var_v0_2 = temp_a1;
    do {
        var_v1 += 1;
        M2C_FIELD(var_v0_2, s8 *, 8) = 0;
        M2C_FIELD(var_v0_2, s8 *, 0xC) = 0;
        var_v0_2 = temp_a1 + var_v1;
    } while (var_v1 < 4);
    var_a2_2 = 0;
    var_a3_2 = &D_800B2370;
    var_v1_2 = arg0;
    M2C_FIELD(temp_a1, s8 *, 4) = 0;
    M2C_FIELD(temp_a1, s8 *, 5) = 0;
    M2C_FIELD(temp_a1, s8 *, 6) = 0;
    M2C_FIELD(temp_a1, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F) = 1;
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x19) = 1;
    do {
        M2C_FIELD(var_v1_2, s32 *, 0x7C) = (s32) M2C_FIELD(var_a3_2, s32 *, 0);
        M2C_FIELD(var_v1_2, s32 *, 0x80) = (s32) M2C_FIELD(var_a3_2, s32 *, 4);
        M2C_FIELD(var_v1_2, s32 *, 0x84) = (s32) M2C_FIELD(var_a3_2, s32 *, 8);
        M2C_FIELD(var_v1_2, s32 *, 0x88) = (s32) M2C_FIELD(var_a3_2, s32 *, 0xC);
        var_a3_2 += 0x10;
        var_a2_2 += 1;
        var_v1_2 += 0x10;
    } while (var_a2_2 < 0xA);
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
}
