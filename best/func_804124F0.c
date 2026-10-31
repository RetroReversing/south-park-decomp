typedef struct {
    s32 unk00;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    s32 unk8C;
    s32 unk90;
    s32 unk94;
} S804124F0;

/* system accessors (unprototyped in the original: only declared, never defined) */
extern s32 D_80205584();
extern s32 D_80235754();
extern s32 D_80221A18();
extern s32 D_80222204();
extern s32 D_80210B50();
extern s32 D_8022237C();
extern s32 D_80210B64();
extern s32 D_80210ADC();
extern s32 D_80203A94();
extern s32 D_80204858();
extern s32 D_8021FCD8();
extern s32 D_80221948();
extern s32 D_8023D5D4();

extern void func_80256980(s32);
extern void func_8025A5C0(s32);
extern void func_80414688(S804124F0 *, s32);
extern void func_80284D98(void);
extern void func_804130A0(S804124F0 *, s32, s32);

extern u8 D_800D6338;
extern u8 D_800F11C0;
extern u8 D_800A7684;
extern u8 D_800A7694;
extern u8 D_800A76A4;
extern u8 D_800A76B8;
extern u8 D_800A76C8;
extern u8 D_800A76D8;
extern u8 D_800A76E8;
extern u8 D_800A76FC;
extern u8 D_800A770C;
extern u8 D_800A7718;
extern u8 D_800A772C;
extern u8 D_800A773C;
extern u8 D_800A774C;
extern u8 D_800A7754;
extern u8 D_800A775C;
extern u8 D_800A776C;
extern u8 D_800A777C;
extern u8 D_800A7790;
extern u8 D_800A77A0;
extern f32 D_800A77B4;
extern u8 D_800A7668;
extern u8 D_800A7678;
extern u8 D_20D6F0;
extern u8 D_222F80;
extern u8 D_414ADC;
extern u8 D_414C0C;

#define Q(x) ((s32)&(x))
#define S32P(x) ((s32 *)((u8 *)arg0 + (x)))

void func_804124F0(S804124F0 *arg0, s32 arg1) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 *r;
    s32 *r2;
    s32 *t;
    s32 v;
    u8 *p;

    arg0->unk00 = 0;
    D_80205584();
    arg0->unk04 = 0;
    arg0->unk08 = 0;
    arg0->unk74 = -1;
    arg0->unk0C = 0;
    S32P(0x1778)[0] = 0;
    S32P(0x177C)[0] = 0;
    S32P(0x1780)[0] = 0;
    S32P(0x1784)[0] = 0;
    S32P(0x1788)[0] = 0;
    D_80235754(&D_800D6338);
    S32P(0x1760)[0] = 0;
    D_80221A18(0);
    ((f32 *)((u8 *)arg0 + 0x1764))[0] = 0.0f;
    ((f32 *)((u8 *)arg0 + 0x1768))[0] = 0.0f;
    ((f32 *)((u8 *)arg0 + 0x176C))[0] = 0.0f;
    ((f32 *)((u8 *)arg0 + 0x1770))[0] = D_800A77B4;
    D_80222204(0, &sp20, arg1, Q(D_800A7684));
    v = D_80210B50(sp20, arg1, 5);
    D_80222204(0, &arg0->unk38, v, Q(D_800A7694));
    arg0->unk10 = v;
    v = D_80210B50(sp20, arg1, 3);
    D_80222204(0, &arg0->unk3C, v, Q(D_800A76A4));
    arg0->unk14 = v;
    r = (s32 *)D_8022237C(0, sp20, 2, arg1, arg0, 0, Q(D_800A76B8));
    v = D_80210B50(sp20, arg1, 0);
    arg0->unk78 = *r;
    D_80222204(0, &arg0->unk40, v, Q(D_800A76C8));
    arg0->unk18 = v;
    r = (s32 *)D_8022237C(0, sp20, 1, arg1, arg0, Q(D_414C0C), Q(D_800A76D8));
    arg0->unk44 = *r;
    r = (s32 *)D_8022237C(0, sp20, 4, arg1, arg0, Q(D_414ADC), Q(D_800A76E8));
    arg0->unk94 = *r;
    r = (s32 *)D_8022237C(0, sp20, 9, arg1, arg0, 0, Q(D_800A76B8));
    v = D_80210B50(sp20, arg1, 8);
    arg0->unk7C = *r;
    D_80222204(0, &arg0->unk48, v, Q(D_800A76FC));
    arg0->unk1C = v;
    r = (s32 *)D_8022237C(0, sp20, 7, arg1, arg0, 0, Q(D_800A770C));
    arg0->unk60 = *r;
    r = (s32 *)D_8022237C(0, sp20, 10, arg1, arg0, 0, Q(D_800A7718));
    arg0->unk64 = *r;
    r = (s32 *)D_8022237C(0, sp20, 11, arg1, arg0, 0, Q(D_800A772C));
    arg0->unk84 = *r;
    r = (s32 *)D_8022237C(0, sp20, 6, arg1, arg0, 0, Q(D_800A773C));
    S32P(0xD4)[0] = *r;
    v = D_80210B64(sp20, arg1, 6, &arg0->unk34);
    arg0->unk74 = *r;
    arg0->unk30 = v;
    r = (s32 *)D_8022237C(0, sp20, 12, arg1, arg0, Q(D_222F80), Q(D_800A774C));
    arg0->unk88 = *r;
    r = (s32 *)D_8022237C(0, sp20, 13, arg1, arg0, Q(D_222F80), Q(D_800A7754));
    arg0->unk90 = *r;
    r = (s32 *)D_8022237C(0, sp20, 14, arg1, arg0, Q(D_222F80), Q(D_800A775C));
    arg0->unk8C = *r;
    r = (s32 *)D_8022237C(0, sp20, 16, arg1, arg0, 0, Q(D_800A776C));
    v = D_80210B50(sp20, arg1, 15);
    arg0->unk80 = *r;
    D_80222204(0, &arg0->unk4C, v, Q(D_800A777C));
    arg0->unk20 = v;
    v = D_80210B50(sp20, arg1, 17);
    D_80222204(0, &arg0->unk68, v, Q(D_800A7790));
    arg0->unk28 = v;
    v = D_80210B50(sp20, arg1, 18);
    D_80222204(0, &arg0->unk70, v, Q(D_800A77A0));
    arg0->unk2C = v;
    func_80256980((s32)((u8 *)arg0 + 0x167C));
    D_802598B4();
    func_8025A5C0((s32)((u8 *)arg0 + 0x16EC));
    func_8025A5C0((s32)((u8 *)arg0 + 0x171C));
    D_8023D5D4(Q(D_800F11C0));
    func_80414688(arg0, arg1);

    v = D_80203A94(arg0, 0x1838);
    p = (u8 *)arg0 + 0x18B4;
    if (v == -1) {
        ((s32 *)(p + 8))[0] = 0;
    } else {
        r = (s32 *)D_80204858(arg0, v);
        r = (s32 *)D_8021FCD8(0, r, 0x18, 0, 0, 0, Q(D_800A7668), 1);
        if (r != 0) {
            v = D_80210B64(*r, 21, 1, &sp24);
            r2 = (s32 *)D_8021FCD8(0, v, sp24, 0, 0, Q(D_20D6F0), Q(D_800A7678), 1);
            if (r2 != 0) {
                t = (s32 *)D_80210ADC(D_80210ADC(D_80210ADC(D_80210ADC(*r2, 2), 0), 0), 0);
                ((s32 *)(p + 0))[0] = t[0];
                ((s32 *)(p + 4))[0] = t[1];
                ((s32 *)(p + 8))[0] = t[2];
                ((s32 *)(p + 12))[0] = t[3];
                ((s32 *)(p + 16))[0] = t[4];
                ((s32 *)(p + 20))[0] = t[5];
                ((s32 *)(p + 24))[0] = t[6];
                D_80221948(0, r2);
            }
            D_80221948(0, r);
        }
    }

    v = D_80203A94(arg0, 0x183A);
    p = (u8 *)arg0 + 0x18D0;
    if (v == -1) {
        ((s32 *)(p + 8))[0] = 0;
    } else {
        r = (s32 *)D_80204858(arg0, v);
        r = (s32 *)D_8021FCD8(0, r, 0x18, 0, 0, 0, Q(D_800A7668), 1);
        if (r != 0) {
            v = D_80210B64(*r, 22, 1, &sp28);
            r2 = (s32 *)D_8021FCD8(0, v, sp28, 0, 0, Q(D_20D6F0), Q(D_800A7678), 1);
            if (r2 != 0) {
                t = (s32 *)D_80210ADC(D_80210ADC(D_80210ADC(D_80210ADC(*r2, 2), 0), 0), 0);
                ((s32 *)(p + 0))[0] = t[0];
                ((s32 *)(p + 4))[0] = t[1];
                ((s32 *)(p + 8))[0] = t[2];
                ((s32 *)(p + 12))[0] = t[3];
                ((s32 *)(p + 16))[0] = t[4];
                ((s32 *)(p + 20))[0] = t[5];
                ((s32 *)(p + 24))[0] = t[6];
                D_80221948(0, r2);
            }
            D_80221948(0, r);
        }
    }

    func_80284D98();
    func_804130A0(arg0, 0, 0);
}
