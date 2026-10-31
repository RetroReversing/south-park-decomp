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

M2C_UNK D_80209C78(void *, M2C_UNK);                /* extern */
M2C_UNK D_80237180(s32);                            /* extern */
M2C_UNK func_8028C3E0();                            /* extern */
M2C_UNK func_8028C480(s8);                          /* extern */
M2C_UNK func_8040F470(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_80412EB4(M2C_UNK *, s16);              /* extern */
M2C_UNK func_804148CC(M2C_UNK *);                   /* extern */
s16 func_80414904(M2C_UNK *);                       /* extern */
extern s32 D_800AB89C;
extern s32 D_800BF2DC;
extern M2C_UNK D_800BF2EC;
extern M2C_UNK D_800CCA80;
extern s32 D_800D6358;
extern s8 D_800D77F2;
extern s32 D_8010DDB8;
extern void *D_8010DDC4;
extern s32 D_8010DDCC;
extern s32 D_8010DDD0;
extern u8 D_8010DDD3;
extern s32 D_8010DE1C;
extern s32 D_8010DE20;

s32 func_80407758(M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a2;
    s32 var_v0;

    if (D_8010DE1C == 0) {
        M2C_FIELD(D_8010DDC4, s8 *, 0x1584) = 0;
        M2C_FIELD(D_8010DDC4, u8 *, 0x1585) = 0U;
        M2C_FIELD(D_8010DDC4, s8 *, 0x1586) = 0;
        M2C_FIELD(D_8010DDC4, s8 *, 0x1587) = 0;
        temp_s1 = D_800BF2DC;
        M2C_FIELD(&D_800CCA80, s32 *, 0x187C) = (s32) D_8010DDB8;
        M2C_FIELD(&D_800CCA80, s32 *, 0x1780) = (s32) D_8010DDCC;
        if (temp_s1 == 1) {
            temp_s2 = D_8010DE20;
            if (D_8010DDD0 != 0) {
                M2C_FIELD(D_8010DDC4, u8 *, 0x1585) = (u8) D_8010DDD3;
                M2C_FIELD(&D_800CCA80, s32 *, 0x187C) = 0x1F4;
                D_80209C78(&D_800CCA80 - 0x320, 0xD);
                D_800AB89C = temp_s1;
                return 0;
            }
            D_800AB89C = 0;
            func_804148CC(&D_800CCA80);
            func_80412EB4(&D_800CCA80, func_80414904(&D_800CCA80));
            var_a2 = 0;
            if (M2C_FIELD(&D_800CCA80, s32 *, 0x177C) != M2C_FIELD(&D_800CCA80, s32 *, 0x1780)) {
                temp_s0 = D_800D6358;
                func_8028C3E0();
                func_8028C480(D_800D77F2);
                D_80237180(temp_s0);
                var_a2 = 0;
            }
            var_v0 = 0 * 2;
loop_7:
            if (temp_s2 != *(&D_800BF2EC + var_v0)) {
                var_a2 += 1;
                var_v0 = var_a2 * 2;
                if (var_a2 < 0x11) {
                    goto loop_7;
                }
            }
            func_8040F470(arg2, arg1, var_a2);
            D_8010DE1C = 1;
            goto block_10;
        }
    }
block_10:
    return 0;
}
