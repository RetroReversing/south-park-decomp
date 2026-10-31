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
extern u8 D_414F00[];
extern s32 D_800D77D4;
extern s32 D_800D77D0;
extern u8 D_800D77E6;
extern u8 D_800BC470[];
extern s32 D_800CE200;
void func_80403D34();
void func_802A08B8();
s32 func_8040348C();

s32 func_80405230(s32 arg0, s32 arg1, s32 arg2) {
    func_80403D34(arg2, D_414F00);
    return 1;
}

typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; s32 unk10; s32 unk14; } S804;

s32 func_80405288(S804 *arg0) {
    if (!(D_800D77D4 & 0xF80007FF)) {
        arg0->unk8 &= 0xFFFBFFFF;
    }
    return 0;
}

s32 func_80405170(S804 *arg0) {
    s32 t = *(s32 *)(arg0->unk14 + D_800D77E6 * 4);
    func_802A08B8(t + (func_8040348C() - 3), D_800BC470);
    return 0;
}

s32 func_80405314(S804 *arg0) {
    s32 v;
    if (!(D_800D77D0 & 0x80)) {
        v = arg0->unk8 & 0xFFFBFFFF;
    } else if (*(u8 *)((u8 *)D_800D77D0 + 0x18) == 0) {
        v = arg0->unk8 | 0x80000;
    } else {
        v = arg0->unk8 & 0xFFFBFFFF;
    }
    arg0->unk8 = v;
    return 0;
}
