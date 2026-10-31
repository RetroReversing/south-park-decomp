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
/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 D_8022D09C(s32 *);                          /* extern */
s32 func_80403D34();
extern char D_4161A0[];
extern char D_800EE468[];
extern s32 D_8010E2EC;
extern s32 D_8010E4D8;
extern s32 D_8010E4DC;
extern s32 D_8010E4E8;
extern s32 *D_8010E4F0;
extern s32 D_8010E4F8;

s32 func_80406D54(s32 arg0, s32 arg1, s32 arg2) {
    char *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_800EE468;
    D_8010E4F0 = NULL;
loop_1:
    if (D_8022D09C(var_s0) != 0) {
        D_8010E4F0 = var_s0;
    } else {
        var_s1 += 1;
        var_s0 += 0x230;
        if (var_s1 >= 4) {

        } else {
            goto loop_1;
        }
    }
    D_8010E4DC = 0xC;
    D_8010E4E8 = 0;
    D_8010E2EC = 0;
    D_8010E4F8 = -1;
    D_8010E4D8 = func_80403D34(arg2, arg1, &D_4161A0);
    return 1;
}
