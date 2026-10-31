typedef struct Sprite {
    u8 pad0[8];
} Sprite;

typedef struct Actor {
    s32 unk00;            /* 0x0 */
    s32 unk04;            /* 0x4 */
    char pad08[0x1C];
    s32 unk24;            /* 0x24 */
    char pad28[0x28];
    s32 unk50;            /* 0x50 */
    s32 unk54;            /* 0x54 */
    s32 unk58;            /* 0x58 */
    s32 unk5C;            /* 0x5C */
    char pad60[0x38];
    s32 unk98;            /* 0x98 */
    s32 unk9C;            /* 0x9C */
    s32 unkA0;            /* 0xA0 */
    s32 unkA4;            /* 0xA4 */
    s32 unkA8;            /* 0xA8 */
    s32 unkAC;            /* 0xAC */
    s32 unkB0;            /* 0xB0 */
    s32 unkB4;            /* 0xB4 */
    char padB8[0x10];
    Sprite *unkC8;        /* 0xC8 */
    char padCC[4];
    s32 unkD0;            /* 0xD0 */
    char padD4[0x18];
    u8 *unkEC;            /* 0xEC */
    s32 unkF0;            /* 0xF0 */
    s32 unkF4;            /* 0xF4 */
    void *unkF8[0x20];    /* 0xF8 */
    void *unk178;         /* 0x178 */
    char pad17C[0x15D0];
    s32 unk174C;          /* 0x174C */
    char pad1750[8];
    s32 unk1758;          /* 0x1758 */
    s32 unk175C;          /* 0x175C */
    char pad1760[0x14];
    s32 unk1774;          /* 0x1774 */
    char pad1778[0xEC];
    s32 unk1864;          /* 0x1864 */
    char pad1868[0x14];
    s32 unk187C;          /* 0x187C */
    char pad1880[0x30];
    s32 unk18B0;          /* 0x18B0 */
    u8 unk18B3;           /* 0x18B3 */
} Actor;

typedef struct Ent {
    char pad0[0x14];
    s32 *unk14;
    char pad18[0x180];
    u8 unk198;
    char pad199[0x143];
    s16 unk2DC;
} Ent;

extern void D_80205F94(void);
extern void D_8021F30C(void *);
extern void D_80221A18(s32);
extern void D_802226D8(s32);
extern void D_80205C30(Actor *);
extern void func_80253B90(void *, s32);
extern void func_80259A24(void *);
extern void func_8025A610(void *);
extern void func_8027D640(void *);
extern void func_80412D50(Actor *);
extern void func_80412EB4(Actor *, s32);
extern void D_8022154C(s32, s32, s32, void *);
extern void func_802597C8(void *, s32, s32);
extern void *D_80210B50(void *, s32, s32);
extern s32 D_80222204(s32, void *, s32, void *);
extern s32 D_8022237C(s32, s32, s32, s32, Actor *, s32, void *);
extern void func_80412C0C(Actor *);
extern void D_80284190(void);
extern void func_804149E0(Actor *, s32);
extern void D_80200E54(Actor *);
extern void D_8023E95C(void *, void *, s8);
extern void func_8028833C(void *, void *, s32);
extern void D_802012E0(Actor *);
extern void func_80274488(void *, void *, s32);
extern void D_80235754(void *);
extern void func_8025F92C(void *);
extern void func_8025D920(void *);
extern void func_80414424(Actor *);

extern u8 D_800D77E8;
extern s32 D_800AB9F8;
extern s32 D_800AB8A0;
extern s32 D_800CE2FC;
extern s32 D_800D633C;
extern s32 D_800D6340;
extern u8 *D_800D6358;
extern s32 D_800B3618;
extern s32 D_800B361C;
extern s32 D_800B3620;
extern s32 D_800B3624;
extern u8 D_800EC060;
extern u8 D_800A7810;
extern u8 D_800A781C;
extern u8 D_800A7828;
extern u8 D_800A7834;
extern u8 D_800A7840;
extern u8 D_800A7854;
extern u8 D_800A7860;
extern u8 D_800A786C;
extern u8 D_800A7878;
extern u8 D_800A788C;
extern u8 D_800CC000;
extern u8 D_800CC238;
extern u8 D_800D6338;
extern u8 D_41377C;
extern u8 D_222F80;
extern u8 D_414C80;
extern u8 D_413A58;

void func_804130A0(Actor *arg0, s32 arg1, s32 arg2) {
    Ent *e;
    s32 i, n, k;
    s32 s1;
    u8 *p;

    arg0->unk00 = 1;
    arg0->unk04 = 0;
    D_80205F94();
    D_8021F30C(&D_800EC060);
    D_80221A18(0);
    if (arg0->unk1774 != -1) {
        func_80412D50(arg0);
    }
    D_80221A18(0);
    D_800AB9F8 = 0;
    D_802226D8(8);
    D_80205C30(arg0);
    func_80253B90((u8 *)arg0 + 0x167C, *(s32 *)arg0->unkC8);
    func_80259A24((u8 *)arg0 + 0x16EC);
    func_8025A610((u8 *)arg0 + 0x171C);
    func_8027D640((u8 *)arg0 + 0x178C);
    if (*(s32 *)arg0->unkC8 < arg1) {
        arg1 = *(s32 *)arg0->unkC8 - 1;
        arg2 = 0;
    }
    func_80412EB4(arg0, arg0->unk187C);
    arg0->unk1774 = arg1;
    if (arg2 == 0) {
        arg0->unk1864 = 0;
    }
    if (D_800D77E8 != 0) {
        n = 0x4B0;
    } else {
        n = 0x320;
    }
    D_8022154C(0, n << 6, 3, &D_800A7810);
    arg0->unkC8 = (Sprite *)0;
    func_802597C8((u8 *)arg0 + 0xDC, *(s32 *)0, n);
    s1 = (s32)D_80210B50(arg0->unkEC, arg0->unkF4, arg1);
    arg0->unk98 = D_80222204(0, &arg0->unk50, s1, &D_800A781C);
    arg0->unk9C = D_8022237C(0, arg0->unk50, 1, s1, arg0, (s32)&D_41377C, &D_800A7828);
    arg0->unk5C = *(s32 *)arg0->unk9C;
    arg0->unkA0 = D_8022237C(0, arg0->unk50, 4, s1, arg0, (s32)&D_222F80, &D_800A7834);
    arg0->unk58 = *(s32 *)arg0->unkA0;
    arg0->unk24 = (s32)D_80210B50((void *)arg0->unk50, s1, 5);
    arg0->unkA4 = D_80222204(0, &arg0->unk54, arg0->unk24, &D_800A7840);
    arg0->unkD0 = D_8022237C(0, arg0->unk50, 2, s1, arg0, (s32)&D_414C80, &D_800A7854);
    arg0->unkA8 = D_8022237C(0, arg0->unk50, 0, s1, arg0, 0, &D_800A7860);
    func_80412C0C(arg0);
    arg0->unk174C = *(s32 *)arg0->unkA8;
    arg0->unkAC = D_8022237C(0, arg0->unk50, 6, s1, arg0, (s32)&D_222F80, &D_800A786C);
    arg0->unk1758 = arg0->unkAC + 8;
    arg0->unk175C = *(s32 *)(arg0->unkAC + 4);
    D_80284190();
    arg0->unkEC = 0;
    arg0->unkF4 = 0;
    arg0->unkB0 = D_8022237C(0, arg0->unk50, 3, s1, arg0, (s32)&D_413A58, &D_800A7878);
    arg0->unkB4 = D_8022237C(0, arg0->unk50, 7, s1, arg0, (s32)&D_222F80, &D_800A788C);
    arg0->unk178 = 0;
    p = (u8 *)&arg0->unkF8[0x1F];
    for (k = 0; k < 0x20; k++) {
        *(s32 *)p = 0;
        p -= 4;
    }

    i = 0;
    if (arg0->unkF4 > 0) {
        e = (Ent *)arg0->unkEC;
        n = 0;
        while (i < arg0->unkF4 && n < 0x20) {
            if (*e->unk14 == 0xD) {
                arg0->unkF8[n] = e;
                n++;
            }
            i++;
            e = (Ent *)((u8 *)e + 0x368);
        }
    }

    for (i = 0; i < 0x20; i++) {
        void *v = arg0->unkF8[i];
        if (v != 0) {
            if (*(s16 *)(*(s32 *)((u8 *)v + 0x14) + 0xC) == 0) {
                arg0->unk178 = v;
                break;
            }
        }
    }

    arg0->unk00 = 0;
    func_804149E0(arg0, *(s32 *)arg0->unkB4);
    n = 0;
    i = arg0->unkF0;
    e = (Ent *)(arg0->unkEC + i * 0x368);
    while (i < arg0->unkF4) {
        if (*e->unk14 == 0xC) {
            n++;
        }
        i++;
        e = (Ent *)((u8 *)e + 0x368);
    }
    arg0->unk18B0 = n;
    D_800AB8A0 = 0;
    if (arg0->unk187C == 0x1F4) {
        D_80200E54(arg0);
    }
    if (D_800D77E8 == 0 && D_800CE2FC != 0x1F4) {
        i = 0;
        k = 0;
        while (i < D_800D6340) {
            *(u8 *)(D_800D633C + k + 0x1585) = arg0->unk18B3;
            i++;
            k += 0x15C0;
        }
    }
    i = arg0->unkF0;
    e = (Ent *)(arg0->unkEC + i * 0x368);
    while (i < arg0->unkF4) {
        D_8023E95C(e, (u8 *)e + 0x168, *(s8 *)((u8 *)e + 0x198));
        i++;
        e = (Ent *)((u8 *)e + 0x368);
    }
    p = D_800D6358;
    if (p != 0) {
        do {
            D_8023E95C(p, p + 0x168, *(s8 *)(p + 0x198));
            D_8023E95C(p + 0x368, p + 0x4D0, *(s8 *)(p + 0x500));
            p = *(u8 **)(p + 0x159C);
        } while (p != 0);
    }
    i = arg0->unkF0;
    e = (Ent *)(arg0->unkEC + i * 0x368);
    while (i < arg0->unkF4) {
        if (*e->unk14 == 1 && e->unk2DC == 0xA) {
            u16 v = e->unk198;
            if ((v == 0x67 && D_800B3618 != 0) || (v == 0x66 && D_800B3620 != 0) ||
                (v == 0x65 && D_800B361C != 0) || (v == 0x68 && D_800B3624 != 0)) {
                func_8028833C(e, (u8 *)e + 0x168, 0);
            }
        }
        i++;
        e = (Ent *)((u8 *)e + 0x368);
    }
    D_802012E0(arg0);
    arg0->unk04 = 1;
    func_80274488(&D_800CC238, &D_800CC000, 0xF);
    D_80235754(&D_800D6338);
    func_8025F92C(&D_800D6338 + 0x1C0);
    func_8025D920(&D_800D6338 + 0x1C0);
    if (*(u8 *)(&D_800D6338 + 0x14B0) != 0) {
        func_80414424(arg0);
    }
}
