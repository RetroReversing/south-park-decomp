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

M2C_UNK func_8026AC4C(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80290CCC();                            /* extern */
M2C_UNK func_8029D9A8(M2C_UNK, s32 *);              /* extern */
s32 func_8029DA40(s32, s32 *);                      /* extern */
s32 func_8029DAD0(s32, s32);                        /* extern */
s32 func_802A04F0();                                /* extern */
M2C_UNK func_802A05D8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802A0718(M2C_UNK);                     /* extern */
M2C_UNK func_802A07D0(s32);                         /* extern */
M2C_UNK func_802A0828(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_29E540;
extern s32 D_80000000;
extern s32 D_80000300;
extern s32 D_8000030C;
extern M2C_UNK D_8000031C;
extern s32 D_800B4920;
extern M2C_UNK D_800F75F0;
extern s32 D_800F75F4;
extern s32 D_800F75F8;

void func_8029D788(void) {
char *__repair_addr;

    s32 sp10;
    s32 sp14;
    s32 temp_a0;
    s32 temp_a3;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v0;
    u32 temp_v1;

    sp14 = 0;
    D_800F75F8 = 1;
    func_802A07D0(func_802A04F0() | 0x20000000);
    func_802A0718(0x01000800);
    do {

    } while (func_8029DA40(0x1FC007FC, &sp10) != 0);
    do {

    } while (func_8029DAD0(0x1FC007FC, sp10 | 8) != 0);
    D_80000000 = M2C_FIELD(&D_29E540, s32 *, 0);
    D_80000000 = M2C_FIELD(&D_29E540, s32 *, 4);
    D_80000000 = M2C_FIELD(&D_29E540, s32 *, 8);
    D_80000000 = M2C_FIELD(&D_29E540, s32 *, 0xC);
    M2C_FIELD((void *)0x80000080, s32 *, 0) = (s32) M2C_FIELD(&D_29E540, s32 *, 0);
__repair_addr = (char *)((void *)0x80000080);

    M2C_FIELD(__repair_addr, s32 *, 4) = (s32) M2C_FIELD(&D_29E540, s32 *, 4);
    M2C_FIELD((void *)0x80000080, s32 *, 8) = (s32) M2C_FIELD(&D_29E540, s32 *, 8);
    M2C_FIELD((void *)0x80000080, s32 *, 0xC) = (s32) M2C_FIELD(&D_29E540, s32 *, 0xC);
    M2C_FIELD((void *)0x80000100, s32 *, 0) = (s32) M2C_FIELD(&D_29E540, s32 *, 0);
    M2C_FIELD((void *)0x80000100, s32 *, 4) = (s32) M2C_FIELD(&D_29E540, s32 *, 4);
    M2C_FIELD((void *)0x80000100, s32 *, 8) = (s32) M2C_FIELD(&D_29E540, s32 *, 8);
    M2C_FIELD((void *)0x80000100, s32 *, 0xC) = (s32) M2C_FIELD(&D_29E540, s32 *, 0xC);
    M2C_FIELD((void *)0x80000180, s32 *, 0) = (s32) M2C_FIELD(&D_29E540, s32 *, 0);
    M2C_FIELD((void *)0x80000180, s32 *, 4) = (s32) M2C_FIELD(&D_29E540, s32 *, 4);
    M2C_FIELD((void *)0x80000180, s32 *, 8) = (s32) M2C_FIELD(&D_29E540, s32 *, 8);
    M2C_FIELD((void *)0x80000180, s32 *, 0xC) = (s32) M2C_FIELD(&D_29E540, s32 *, 0xC);
    func_802A0828(0x80000000, 0x190);
    func_802A05D8(0x80000000, 0x190);
    func_80290CCC();
    func_8029D9A8(4, &sp14);
    temp_a0 = sp14 & ~0xF;
    sp14 = temp_a0;
    if (temp_a0 == 0) {
        var_v1 = 0x03B9ACA0;
    } else {
        var_v1 = temp_a0;
    }
    M2C_FIELD(&D_800F75F0, u32 *, 0) = 0U;
    D_800F75F4 = var_v1;
    temp_v1 = M2C_FIELD(&D_800F75F0, u32 *, 4) * 3;
    temp_a3 = temp_v1 < (u32) M2C_FIELD(&D_800F75F0, u32 *, 4);
    temp_v0 = ((M2C_FIELD(&D_800F75F0, u32 *, 0) * 2) | ((u32) M2C_FIELD(&D_800F75F0, u32 *, 4) >> 0x1F)) + M2C_FIELD(&D_800F75F0, u32 *, 0) + temp_a3;
    M2C_FIELD(&D_800F75F0, u32 *, 0) = (u32) (temp_v0 >> 2);
    M2C_FIELD(&D_800F75F0, u32 *, 4) = (u32) ((temp_v1 >> 2) | (temp_v0 << 0x1E));
    if (D_8000030C == 0) {
        func_8026AC4C(&D_8000031C, 0, 0x40, temp_a3);
    }
    switch (D_80000300) {                           /* irregular */
    case 0:
        var_v0 = 0x02F5B2D2;
        break;
    case 2:
        var_v0 = 0x02E6025C;
        break;
    default:
        var_v0 = 0x02E6D354;
        break;
    }
    D_800B4920 = var_v0;
}
