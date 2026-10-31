extern s32 func_80403914();

extern u8 D_800ADDBA;
extern s8 D_800D77EE;
extern s8 D_800D77ED;
extern s32 D_800C9A58;
extern s32 D_800C9A64;
extern s32 D_800C9A70;

typedef struct {
    u8 pad[0x14];
    u8 *p14;
} Obj674C;

s32 func_8040674C(Obj674C *arg0) {
    if ((s32)D_800ADDBA < D_800D77EE) {
        D_800D77EE = D_800ADDBA;
    }
    switch (D_800D77EE) {
    case 3:
        *(s32 **)(arg0->p14 + 8) = &D_800C9A64;
        break;
    case 4:
        *(s32 **)(arg0->p14 + 8) = &D_800C9A70;
        break;
    default:
        D_800D77EE = 2;
    case 2:
        *(s32 **)(arg0->p14 + 8) = &D_800C9A58;
        break;
    }
    return 0;
}

s32 func_804067F0(void *arg0, s32 arg1) {
    D_800D77ED = func_80403914(arg1, D_800D77ED, 1, -1, 0x10, 1);
    return 0;
}

extern s32 func_802A08B8();
extern s32 func_80403D34();
extern s32 D_800BF134;
extern s32 D_800BC5C0;
extern s32 D_8010DB08;
extern s32 D_00415908;

typedef struct {
    u16 f00;
    u16 f02;
    u16 f04;
    u16 f06;
    u16 f08;
    u16 f0A;
    u16 f0C;
    u16 f0E;
    u16 f10;
    u8 f12;
} S77D4;

extern S77D4 D_800D77D4;

void func_8040588C(s32 arg0, s32 arg1, s32 arg2) {
    S77D4 *p = &D_800D77D4;
    u32 hi;

    hi = *(u32 *)p;
    hi = hi | ((hi & 0x07FFF800) >> 7);
    *(u32 *)p = hi;
    func_802A08B8(&D_8010DB08, &D_800BC5C0,
                  *(s32 *)(*(s32 *)((u8 *)&D_800BF134 + arg2 * 12) + p->f12 * 4));
    func_80403D34(arg0, arg1, &D_00415908);
}
