extern volatile struct { u8 a; u8 b; } *DUMMY;
extern volatile u8 D_800D77E8[];
extern u8 D_800D7801[];
extern u8 D_00415C88[];
extern s32 func_80403D34(s32, void *, s32);
s32 func_80406B14(s32 x, s32 y, s32 z) {
    volatile struct Pair { u8 a; u8 b; } *p = (volatile struct Pair *)D_800D77E8;
    s32 t = 3;
    s32 a3 = 0x36;
    p->a = 1;
    p->b = 4;
    do { D_800D7801[a3] = 0; t--; a3 -= 0x12; } while (t >= 0);
    func_80403D34(z, D_00415C88, a3);
    return 1;
}
