extern s32 D_8010E4D8;
extern u8 D_4161A0[];
s32 func_80403D34(s32, s32, void *);

s32 func_8040C398(s32 a0, s32 a1, s32 a2) {
    D_8010E4D8 = func_80403D34(a2, a1, D_4161A0);
    return 1;
}

extern s32 D_800D78F0;
extern s32 D_8010E4F8;
extern u8 D_800CC760[];
void D_80209C78(void *, s32);

s32 func_8040C3CC(void) {
    if (D_800D78F0 != D_8010E4F8) {
        D_80209C78(D_800CC760, D_8010E4F8);
    }
    return 0;
}

extern u8 D_800EE468[];
extern u8 *D_8010E4F0;
s32 D_8022D09C(void *);

s32 func_8040C26C(void) {
    s32 i;
    u8 *p;

    i = 0;
    p = D_800EE468;
    D_8010E4F0 = NULL;
    while (D_8022D09C(p) == 0) {
        p += 0x230;
        if (++i >= 4) {
            break;
        }
        continue;
    }
    D_80209C78(D_800CC760, 0);
    return 0;
}

extern s32 D_8010E4E8;
extern s32 D_8010E504;
extern u8 D_416568[];
s32 D_8022D1C8(s32);
s32 func_80408C5C(void);
void *D_802098B8(void);

s32 func_8040C19C(s32 a0, s32 a1, s32 a2) {
    if (D_8022D1C8(D_8010E4E8) != 0 && D_800D78F0 != 1) {
        return 1;
    }
    if (func_80408C5C() != 0) {
        D_8010E504 = -0xC;
        func_80403D34(a2, a1, D_416568);
    } else if (D_800D78F0 == 1) {
        void *p = D_802098B8();
        if (p != NULL) {
            func_80403D34(a2, a1, p);
        }
    }
    return 1;
}
