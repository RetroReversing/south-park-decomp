typedef struct Actor {
    char pad0[2];
    u16 id;                 /* 0x2 */
    f32 x;                  /* 0x4 */
    f32 y;                  /* 0x8 */
    f32 z;                  /* 0xC */
    s16 f10;                /* 0x10 */
    char pad12[0x18];
    char pad10[0x18];
    u32 flags;              /* 0x40 */
    char pad44[0xB4];
    void *f8;               /* 0xF8 */
    char padFC[0x10];
    s32 *unk10C;            /* 0x10C */
    void *sub;              /* 0x114 */
    f32 unk118;             /* 0x118 */
    s16 unk124;             /* 0x124 */
    char pad126[0x82];
    u8 unk1A8;              /* 0x1A8 */
    char pad1A9[8];
    u8 unkB1;               /* 0x1B1 */
    char padBB2[4];
    s32 unkB8;              /* 0x1B8 */
    char padBC[0xC];
    s32 unk1C8;             /* 0x1C8 */
    s32 unk1CC;             /* 0x1CC */
    struct Actor *unk1E4;   /* 0x1E4 */
    f32 unk170;             /* 0x170 */
} Actor;

extern s32 D_800D7910;
extern f32 D_800ABA00;
extern f32 D_800ABA08;
extern u8 D_800F14B0[];
extern f32 D_800A967C;
extern f32 D_800A9680;
extern f32 D_800A9684;
extern u8 D_800CE20C[];
extern u8 D_800CEE08[];
extern void D_802168D8(u8 *, void *);
extern void D_8021E710(s32, void *);
extern void D_8021E930(s32, void *);
extern s32 D_8029D708();
extern void func_8024E8E0(Actor *, u16, u8, s32);
extern void func_8024F668(Actor *, Actor **);
extern void func_80255998(s32, Actor *);
extern void func_80255B14(s32, Actor **, s32);
extern s32 func_8025764C(Actor *);
extern void func_80257824(Actor *);
extern void func_80261CC0(u8 *, Actor *);
extern void func_802630B0(Actor *, Actor *, u16, s32, f32, f32, f32, s32, s32);
extern void func_80273DCC(s16, f32, f32, f32, s32, s32);
extern u64 func_802A6AF0(s32, s32, s32, s32);
extern s32 func_802A7570(u64, u32, s32, s32);
extern f32 func_802A75B8(u64, u32);

void func_80255F04(Actor *arg0) {
char *__repair_addr;

    Actor *a;
    Actor **slot;
    Actor *list[40];
    Actor *list2[100];
    s32 n2;
    s32 i;
    s32 j;
    s32 offset;
    f32 s1;
    u32 f;
    s32 id;
    s32 idx;
    void *sub;
    s32 *t;
    Actor *s0;
    u8 *f8;
    s32 v;
    u16 a2;
    u16 s2;
    u16 a1b;
    s32 x, y;
    s32 rhi, rlo;
    Actor **pp;
    u64 q;
    u32 qlo;
    f32 ang;

    if (D_800D7910 != 0) {
        i = 0;
        offset = 0x30;
        while (i < 3) {
            a = *(Actor **)((u8 *)arg0 + offset);
            while (a != NULL) {
                a->flags &= 0xFFF7FFFF;
                a = a->unk1E4;
            }
            i++;
            offset += 0x14;
        }
        return;
    }

    n2 = 0;
    i = 0;
    s1 = D_800ABA00;
    j = 0;
    D_800ABA00 = s1 * D_800ABA08;
    offset = 0x30;
    while (i < 3) {
        slot = (Actor **)(offset + (int)arg0);
        a = *slot;
        while (a != NULL) {
            s0 = a;
            a = a->unk1E4;
            f = s0->flags;
            sub = s0->sub;
            s0->flags = f & 0xFFF7FFFF;
            if (sub != NULL) {
                id = s0->id;
                if (id != 0x810 && id != 0x814) {
__repair_addr = (char *)((u8 *)sub + 0x16);

                    *(s16 *)(__repair_addr) = 0;
                }
            }
            idx = s0->unk124;
            if ((f32)idx > s0->unk118 && idx != 1 && !(s0->flags & 0x1000)) {
                if ((*(f32 *)D_800F14B0 <= s0->x && s0->x <= *(f32 *)(D_800F14B0 + 8) &&
                     *(f32 *)(D_800F14B0 + 4) <= s0->z && s0->z <= *(f32 *)(D_800F14B0 + 0xC)) ||
                    (s0->flags & 0x200000)) {
                    func_8024F668(s0, slot);
                    sub = s0->sub;
                    if (sub != NULL) {
                        id = s0->id;
                        if (id != 0x810 && id != 0x814) {
                            *(s16 *)((u8 *)sub + 0x16) = 1;
                        }
                        *(s16 *)((u8 *)sub + 0x10) = (s16)s0->x;
                        *(s16 *)((u8 *)sub + 0x12) = (s16)s0->y;
                        *(s16 *)((u8 *)sub + 0x14) = (s16)s0->z;
                        *(f32 *)((u8 *)sub + 0xC) = s0->unk170 * D_800A967C;
                    }
                    s0->unk118 += D_800ABA00;
                } else {
                    f = s0->flags;
                    if (f & 0x100) {
                        if (!(f & 0x800)) {
                            if (s0->unkB1 != 0) {
                                func_80257824(s0);
                                func_80261CC0(D_800CEE08, s0);
                            }
                            sub = s0->sub;
                            if (sub != NULL) {
                                *(s16 *)((u8 *)sub + 0x16) = 0;
                                D_802168D8(D_800CE20C, s0->sub);
                                s0->sub = NULL;
                            }
                            t = s0->unk10C;
                            if (t != NULL) {
                                *t -= 1;
                            }
                            s0->flags &= ~0x100;
                            D_8021E930((s32)slot, s0);
                            D_8021E710((s32)arg0 + 8, s0);
                            f8 = s0->f8;
                            if (*(s8 *)(*(u8 **)(f8 + 0x34) + 5) != 3) {
                                D_8021E930((s32)arg0 + 0x1C, s0);
                            }
                        }
                        if (s0->flags & 0x100) {
                            id = s0->id;
                            if (id == 0x847) {
                                if (s0->unkB8 == 0) {
                                    list[n2] = s0;
                                    n2++;
                                }
                            } else if (id == 0x84C) {
                                list2[j] = s0;
                                j++;
                            }
                        }
                    }
                }
            } else {
                f8 = s0->f8;
                idx = func_8025764C(s0) ? 0xC : 0xA;
                v = *(s32 *)(f8 + 0x14);
                s2 = *(u16 *)(v + idx * 2 + 0x70);
                a2 = *(u16 *)(v + idx * 2 + 0x8C);
                x = *(s32 *)(v + idx * 8);
                y = *(s32 *)(v + idx * 8 + 4);
                a1b = *(u16 *)(v + idx * 2 + 0xA8);
                if (a2 != 0xFFFF) {
                    func_802630B0(s0, s0, a2, -1, s0->x, s0->y, s0->z, x, y);
                }
                if (s2 != 0xFFFF) {
                    func_8024E8E0(s0, s2, s0->unk1A8, 1);
                }
                if (a1b != 0xFFFF) {
                    func_80273DCC((s16)a1b, s0->x, s0->y, s0->z, 0, 0);
                }
                f = s0->flags;
                if (f & 0x100) {
                    if (!(f & 0x800)) {
                        if (s0->unkB1 != 0) {
                            func_80257824(s0);
                            func_80261CC0(D_800CEE08, s0);
                        }
                        sub = s0->sub;
                        if (sub != NULL) {
                            *(s16 *)((u8 *)sub + 0x16) = 0;
                            D_802168D8(D_800CE20C, s0->sub);
                            s0->sub = NULL;
                        }
                        t = s0->unk10C;
                        if (t != NULL) {
                            *t -= 1;
                        }
                        s0->flags &= ~0x100;
                        D_8021E930((s32)slot, s0);
                        D_8021E710((s32)arg0 + 8, s0);
                        f8 = s0->f8;
                        if (*(s8 *)(*(u8 **)(f8 + 0x34) + 5) != 3) {
                            D_8021E930((s32)arg0 + 0x1C, s0);
                        }
                    }
                    if (s0->flags & 0x100) {
                        id = s0->id;
                        if (id == 0x847) {
                            if (s0->unkB8 == 0) {
                                list[n2] = s0;
                                n2++;
                            }
                        } else if (id == 0x84C) {
                            list2[j] = s0;
                            j++;
                        }
                    }
                }
            }
        }
        i++;
        offset += 0x14;
    }
    if (n2 != 0) {
        i = 0;
        rhi = D_8029D708();
        if (n2 > 0) {
            pp = list;
            do {
                s0 = *pp;
                if (s0->unkB8 == 0) {
                    rlo = s0->unk1CC;
                    q = func_802A6AF0(((rhi - s0->unk1C8) - ((u32)rlo > (u32)rhi)) << 6 | (((u32)(rhi - rlo)) >> 26), (u32)(rhi - rlo) << 6, 0, 0xBB8);
                    qlo = (u32)q;
                    if (func_802A7570(q, qlo, 0, 0) > 0) {
                        ang = func_802A75B8(q, qlo);
                    } else {
                        ang = func_802A75B8((q & 0) | (q >> 1), (qlo & 1) | ((qlo >> 1) | ((u32)q << 31))) * 2.0f;
                    }
                    if (!(ang * D_800A9680 <= D_800A9684)) {
                        s0->unk124 = 1;
                    } else if (s0->unkB8 != 0) {
                        s0->unk124 = 1;
                    } else {
                        func_80255998((s32)arg0, s0);
                    }
                }
                pp++;
                i++;
            } while (i < n2);
        }
    }
    if (j != 0) {
        func_80255B14((s32)arg0, list2, j);
    }
    D_800ABA00 = s1;
}
