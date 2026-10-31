extern f32 D_800ABA00;
extern f32 D_8010E51C;

s32 func_8040C010(void) {
    f32 t;

    t = D_8010E51C - D_800ABA00;
    D_8010E51C = t;
    if (t < 0.0f) {
        return 1;
    }
    return 0;
}

extern s32 D_800D78F0;
extern s32 D_8010E4E8;
extern s32 D_8010E518;
extern u8 D_4164C0[];
s32 D_8022D1C8(s32);
void func_80403D34(s32, s32, void *);

s32 func_8040C048(s32 a0, s32 a1, s32 a2) {
    if (D_8022D1C8(D_8010E4E8) != 0 && D_800D78F0 != 1) {
        return 1;
    }
    D_8010E518 = 1;
    func_80403D34(a2, a1, D_4164C0);
    return 1;
}

void *D_802098B8(void);

s32 func_8040C0BC(s32 a0, s32 a1, s32 a2) {
    if (D_8022D1C8(D_8010E4E8) != 0 && D_800D78F0 != 1) {
        return 1;
    }
    D_8010E518 = 2;
    if (D_800D78F0 == 1) {
        void *p = D_802098B8();
        if (p != NULL) {
            func_80403D34(a2, a1, p);
        }
    }
    return 1;
}

s32 func_8040C14C(void) {
    if (D_8022D1C8(D_8010E4E8) != 0 && D_800D78F0 != 1) {
        return 1;
    }
    D_8010E518 = 0;
    return 1;
}
