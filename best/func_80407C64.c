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
M2C_UNK func_802A08B8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern s32 D_800B3624;
extern M2C_UNK D_800BC6B0;
extern s32 D_800BF2D8;
extern s32 D_800BF2DC;
extern M2C_UNK D_800C9C50;
extern M2C_UNK D_800C9C5C;
extern M2C_UNK D_800C9C68;
extern M2C_UNK D_800C9C80;
extern M2C_UNK D_800CC760;
extern M2C_UNK D_800CCA80;
extern M2C_UNK D_800F52C0;
extern M2C_UNK D_8010DD38;
extern M2C_UNK D_8010DD78;
extern s32 D_8010DDB8;
extern s32 D_8010DDBC;
extern s32 D_8010DDC0;
extern void *D_8010DDC4;
extern s32 D_8010DDC8;
extern s32 D_8010DDCC;
extern s32 D_8010DDD0;
extern M2C_UNK D_8010DDD8;
extern s32 D_8010DE18;
extern s32 D_8010DE1C;
extern s32 D_8010DE20;
extern M2C_UNK D_8010DE28;
extern s32 D_8010DE68;
extern s32 D_8010DE6C;
extern s32 D_8010DE70;

void func_80407C64(void *arg0) {
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    s32 var_v1;

    D_8010DDC4 = arg0;
    D_8010DDC8 = (s32) M2C_FIELD(arg0, u8 *, 0x1584);
    D_8010DDD0 = (s32) M2C_FIELD(arg0, u8 *, 0x1585);
    D_8010DE68 = (s32) M2C_FIELD(arg0, u8 *, 0x1586);
    D_8010DE6C = 0;
    D_8010DE70 = 0;
    D_8010DDC0 = 0;
    D_8010DE18 = 0;
    D_8010DDBC = (s32) M2C_FIELD(arg0, u8 *, 0x1587);
    func_802A08B8(&D_8010DD38, &D_800BC6B0, *(&D_800C9C50 + (D_800D77E6 * 4)));
    func_802A08B8(&D_8010DD78, &D_800BC6B0, *(&D_800C9C5C + (D_800D77E6 * 4)));
    func_802A08B8(&D_8010DDD8, &D_800BC6B0, *(&D_800C9C68 + (D_800D77E6 * 4)));
    func_802A08B8(&D_8010DE28, &D_800BC6B0, *(&D_800C9C80 + (D_800D77E6 * 4)));
    D_800BF2DC = 0;
    D_8010DE1C = 0;
    D_800BF2D8 = 0;
    D_8010DDB8 = M2C_FIELD(&D_800CCA80, s32 *, 0x187C);
    D_8010DDCC = M2C_FIELD(&D_800CCA80, s32 *, 0x1780);
    if (M2C_FIELD(&D_800CCA80, s32 *, 0x1780) == 1) {
        var_t2 = 0;
        if (M2C_FIELD(&D_800CCA80, s32 *, 0x1784) == 3) {
            D_800B3624 = 0;
            var_t0 = 0;
            do {
                if (*(&D_800F52C0 + var_t0) >= 0) {
                    var_a3 = 0;
                    var_a2 = 0;
loop_5:
                    var_a0 = 0;
                    var_v1 = var_a2;
loop_6:
                    if (D_800F529C[var_v1] != -1) {
                        var_a0 += 1;
                        var_v1 += 4;
                        if (var_a0 < 2) {
                            goto loop_6;
                        }
                    } else {
                        D_800F529C[var_v1] = (s32) *(&D_800F52C0 + var_t0);
                        *(&D_800F52C0 + var_t0) = -1;
                    }
                    if (*(&D_800F52C0 + var_t0) != -1) {
                        var_a3 += 1;
                        var_a2 += 0xC;
                        if (var_a3 < 3) {
                            goto loop_5;
                        }
                    }
                }
                var_t2 += 1;
                var_t0 += 4;
            } while (var_t2 < 2);
        }
    }
    if (D_8010DDB8 != 0x1F4) {
        D_8010DE20 = D_8010DDB8;
    }
    D_80209C78(&D_800CC760, 0xE);
}
