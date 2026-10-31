/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

s32 D_802098B8();                                   /* extern */
s32 D_8022D1C8(s32);                                /* extern */
s32 func_80403D34();
extern s32 D_800D78F0;
extern s32 D_8010E4E8;
extern s32 D_8010E518;

s32 func_8040C0BC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((D_8022D1C8(D_8010E4E8) == 0) || (D_800D78F0 == 1)) {
        D_8010E518 = 2;
        if (D_800D78F0 == 1) {
            temp_v0 = D_802098B8();
            if (temp_v0 != 0) {
                func_80403D34(arg2, arg1, temp_v0);
            }
        }
    }
    return 1;
}
