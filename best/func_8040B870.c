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

void *D_8020982C(M2C_UNK *);                        /* extern */
M2C_UNK func_8025F884(void *, M2C_UNK);             /* extern */
M2C_UNK func_8026AC4C(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80408B3C();                            /* extern */
M2C_UNK func_80408CD0(s32);                         /* extern */
extern s32 D_800BF350;
extern s16 D_800BF358;
extern M2C_UNK D_800CC760;
extern s32 D_800D78F0;
extern s32 D_800D7910;
extern M2C_UNK D_8010E2F8;
extern s32 D_8010E4E0;
extern s32 D_8010E4E4;
extern s32 D_8010E4E8;
extern s16 D_8010E4EC;
extern s32 D_8010E500;
extern s32 D_8010E504;
extern s32 D_8010E510;

void func_8040B870(void) {
    D_800BF350 = 1;
    D_8010E4E4 = 0;
    D_800BF358 = 0;
    D_8010E510 = 0;
    D_8010E4EC = 0;
    func_80408B3C();
    func_80408CD0(D_8010E4E8);
    D_8010E504 = -1;
    func_8026AC4C(&D_8010E2F8, 0, 0x1E0);
    M2C_FIELD(&D_8010E2F8, s32 *, 0x1C4) = 0;
    M2C_FIELD(&D_8010E2F8, s32 *, 0x1C8) = 0;
    D_8010E500 = 0;
    D_8010E4E0 = (s32) M2C_FIELD(D_8020982C(&D_800CC760), s8 *, 0x510);
    if (D_800D78F0 == 0) {
        D_8010E4E0 = 0;
    }
    func_8025F884(D_8020982C(&D_800CC760), 0x3F800000);
    D_800D7910 = 1;
}
