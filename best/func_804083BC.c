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

s32 D_8022D1F4(s32);                        /* extern */
s32 D_8022D220();                               /* extern */
s32 D_8022D248();                               /* extern */
s32 func_8026AC4C();
s32 func_802A08B8();
s32 func_802A0998();
s32 func_80408EF4();
s32 func_80410218();
extern char D_800BC6B8[];
extern char D_800BC6C8[];
extern char D_800BC6D0[];
extern char D_800BF309[];
extern char D_8010DEA8[];
extern s32 D_8010DF10;

s32 func_804083BC(void *arg0, s32 arg1) {
    u32 sp10;
    char *var_fp;
    char *var_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_s6;
    s32 var_s7;
    char *var_a1;
    char *var_s0;
    char *var_s5;
    u8 temp_v0_2;
    void *temp_v1;
    void *var_s1;
    void *var_s3;

    var_s1 = arg0;
    var_s2 = &D_8010DF10;
    var_fp = (char *)(D_8010DF10); var_fp += (s32)(0x200);
    sp10 = var_s1 + arg1;
    func_8026AC4C(arg0, NULL, 0x1C0);
    func_8026AC4C(&D_8010DF10, 0, 0x200);
    var_s7 = 0;
    D_8022D1F4(1);
    var_s6 = 0;
    D_8022D248();
    var_s5 = D_8010DF10 + 0xA;
    var_s3 = var_s1 + 4;
loop_1:
    temp_v0 = func_80410218(&D_8010DEA8, var_s6, var_s2);
    if (temp_v0 == 0) {
        var_a1 = var_s1 + 4;
        if (sp10 < (u32) (var_s1 + 0x1C)) {
            goto block_19;
        }
        var_s0 = var_s1 + 0x16;
        var_a2 = 0;
        var_a0 = 0;
        M2C_FIELD(var_s1, s32 *, 0) = (s32) *(s32 *)var_s2;
loop_6:
        temp_v1 = var_s2 + (var_a0 & 0xFFFF);
        temp_v0_2 = M2C_FIELD(temp_v1, u8 *, 0xE);
        if (temp_v0_2 != 0) {
            var_a0 += 1;
            if ((u32) (temp_v0_2 - 0xF) < 0x33U) {
                *(u8 *)var_a1 = *(D_800BF309 + M2C_FIELD(temp_v1, u8 *, 0xE));
                var_a1 += 1;
                if ((u32) (var_a0 & 0xFFFF) < 0x10U) {
                    goto loop_6;
                }
            } else {
                func_802A08B8(var_s3, &D_800BC6B8, 0, sp10);
                var_a1 = var_s1 + (func_802A0998(var_s3) + 4);
                var_a2 = 1;
                M2C_FIELD(var_s1, u8 *, 0x16) = (u8) *(D_800BF309 + *(u8 *)var_s5);
                var_s0 += 1;
            }
        }
        if (((u32) (*(u8 *)var_s5 - 0xF) < 0x33U) && (var_a2 == 0)) {
            *(u8 *)var_s0 = *(D_800BF309 + *(u8 *)var_s5);
            var_s0 += 1;
        }
        *(u8 *)var_a1 = 0;
        *(u8 *)var_s0 = 0;
        goto block_14;
    }
    func_802A08B8(var_s3, &D_800BC6C8);
    func_802A08B8(var_s1 + 0x16, &D_800BC6D0);
block_14:
    *(s32 *)var_fp = var_s6;
    var_fp += 4;
    var_s3 += 0x1C;
    var_s1 += 0x1C;
    var_s7 += 1;
    var_s5 += 0x20;
    var_s2 += 0x20;
    if (temp_v0 != 0) {
        var_s6 += 1;
        if (temp_v0 != 5) {
            D_8022D220();
            return func_80408EF4(temp_v0);
        }
        goto block_18;
    }
    var_s6 += 1;
block_18:
    if (var_s6 >= 0x10) {
block_19:
        D_8022D220();
        return var_s7;
    }
    goto loop_1;
}
