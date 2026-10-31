typedef struct Node Node;
struct Node {
    char pad0[4];
    Node *next;      /* 0x4 */
    char pad1[8];
    f32 unk10;       /* 0x10 */
    f32 unk14;
    f32 unk18;
    void *unk1C;
    char pad2[0xA8-0x20];
    f32 unkA8;
    f32 unkAC;
    char pad3[0xB0-0xAC];
    void *unkB0;
};

typedef struct Entry Entry;
struct Entry {
    void *unk0;
    Entry *next;     /* 0x4 */
    f32 unk8;
    char pad[0x10-0xC];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    char pad2[0xA8-0x1C];
    f32 unkA8;
    char pad3[0xB0-0xAC];
    void *unkB0;
};

extern f32 D_800A9AC8;
extern s32 D_800AB9FC;
extern u32 *D_800D7F68;

void D_80213A34(void *);
void D_80211B2C(void *, void *);
void D_8020B858(s32);
void D_8020BDE4(s32);
void D_80221864(s32, s32);
void D_8024D9D0(void *, s32, s32, void *, s32, s32, s32, s32, s32);
s32 func_8024E7E8(void *, s32, s32);
void func_8024E834(s32, void *);
void func_80260A5C(void *, Entry *, Node *, f32, void *);
void func_80261104(void *, void *, void *, void *);
void func_802612A8(void *);
s32 func_80261B00(void *, void *, void *);
Node *func_802621FC(s32, u8);

void func_802614C4(s32 arg0, void *arg1, void *arg2) {
int __repair_literal;

    u8 *a = (u8 *)arg1;
    s32 s6 = 0;
    Entry *e;
    Entry *e2;
    Node *n, *n2;
    Node *cur, *nxt, *p, *q;
    u32 sp20[2];
    u32 sp28[2];
    f32 sp68[3];
    s32 sp78, sp7C, sp80, sp84;
    u8 s4;
    s32 fp;
    u8 *base;
    u32 *qt;
    s32 k;
    f32 v;
    f32 fs0;

    if (*(u32 *)(a + 0x3C) & 8) {
        func_802612A8(arg1);
    }
    if ((*(u32 *)(a + 0x3C) & 4) && (*(s32 *)(a + 0x48) >= 2)) {
        cur = *(Node **)(a + 0x40);
        nxt = cur->next;
        D_80213A34(sp20);
        while (cur != NULL) {
            p = cur;
            if (nxt != NULL) {
                q = nxt;
                if (p->unk10 == q->unk10) {
                    for (;;) {
                        p = q;
                        q = q->next;
                        if (p == NULL) {
                            goto nullq;
                        }
                        if (q == NULL) {
                            goto block;
                        }
                        if (p->unk10 != q->unk10) {
                            goto block;
                        }
                    }
                }
            block:
                if (q != NULL) {
                    func_80261104(p, q, arg2, sp20);
                    D_80211B2C(sp20, (u8 *)cur + ((D_800AB9FC << 6) + 0x28));
                    cur = nxt;
                    nxt = cur->next;
                    continue;
                }
            }
        nullq:
            sp68[0] = cur->unk10;
            sp68[1] = cur->unk14;
            sp68[2] = cur->unk18;
            D_80211B2C(sp20, (u8 *)cur + ((D_800AB9FC << 6) + 0x28));
            cur = nxt;
            nxt = cur->next;
        }
    }
    if (*(s32 *)(a + 0x48) >= 2) {
        n = *(Node **)(a + 8);
        if (*(s32 *)(a + 0x34) >= 0) {
            s6 = func_8024E7E8(a + 0x14, 4, 0);
            if (s6 == 0) {
                return;
            }
            func_8024E834(s6, sp28);
            v = *(f32 *)(a + 0x28);
            fs0 = D_800A9AC8;
            while (fs0 <= v) {
                v -= fs0;
                *(f32 *)(a + 0x28) = v;
            }
            {
                u8 c = *(u8 *)sp28[1];
__repair_literal = 2;

                if (c < __repair_literal) {
                    D_8020B858(0x26);
                } else if (c == 3) {
                    D_8020B858(0x27);
                }
            }
            D_8020BDE4(0xD);
            if (*(u8 *)sp28[1] == 3) {
                u8 *bs = *(u8 **)(a + 8);
                qt = D_800D7F68;
                D_800D7F68 += 2;
                qt[0] = 0xFB000000;
                qt[1] = (bs[0x19] << 24) | (bs[0x1A] << 16) | (bs[0x1B] << 8) | 0xFF;
                qt[2] = 0xFA000000;
                qt[3] = (bs[0x16] << 24) | (bs[0x17] << 16) | (bs[0x18] << 8) | 0xFF;
            }
        }
        s4 = *(u8 *)(n + 0x23);
        e = *(Entry **)(a + 0x44);
        e2 = e->next;
        fp = s4 - 1;
        (void)e2;
        if (s6 != 0) {
            D_8024D9D0(a + 0x14, s6, func_80261B00(arg1, n, sp28), 0, 0xFFFF, 0xFFFF, 0, 0, 0);
        }
        qt = D_800D7F68;
        D_800D7F68 += 2;
        qt[0] = 0xDA380003;
        qt[1] = (u32)((u8 *)e + ((D_800AB9FC << 6) + 0x28));
        if (e != NULL && e2 != NULL && e->unk8 > 0.0f) {
            base = *(u8 **)(a + 8);
            sp78 = (s4 << 12) | ((s4 & 0x7F) << 1) | 0x01000000;
            sp7C = (s4 << 12) | ((s4 * 2 & 0x7F) << 1) | 0x01000000;
            sp80 = s4 * 2 & 0xFF;
            sp84 = (s4 * 2 & 0xFF) << 8;
            do {
                n2 = func_802621FC(arg0, s4);
                if (n2 == 0) {
                    break;
                }
                func_80260A5C(arg1, e, n2, e->unkA8, sp28);
                qt = D_800D7F68;
                D_800D7F68 += 2;
                qt[0] = sp78;
                qt[1] = (u32)n2;
                qt[2] = 0xDA380003;
                qt[3] = (u32)((u8 *)e2 + ((D_800AB9FC << 6) + 0x28));
                n2 = func_802621FC(arg0, s4);
                if (n2 == 0) {
                    break;
                }
                v = e2->unkA8;
                while (e->unkA8 < v) {
                    v -= fs0;
                }
                func_80260A5C(arg1, e2, n2, v, sp28);
                qt = D_800D7F68;
                D_800D7F68 += 2;
                qt[0] = sp7C;
                qt[1] = (u32)n2;
                k = 0;
                while (k < fp) {
                    u32 a1 = (k * 2) & 0xFF;
                    s32 idx = s4 + k;
                    u32 px = (a1 << 16) | ((idx << 9) & 0xFE00) | (((idx + 1) * 2) & 0xFF) | 0x06000000;
                    u32 py = (a1 << 16) | ((((idx + 1) * 2) & 0xFF) << 8) | ((k + 1) * 2 & 0xFF);
                    qt = D_800D7F68;
                    D_800D7F68 += 2;
                    qt[0] = px;
                    qt[1] = py;
                    k++;
                }
                if (base[0x12] != 0) {
                    u32 v1 = (k * 2 & 0xFF) << 16;
                    u32 px = v1 | (((s4 + k) << 9) & 0xFE00) | sp80 | 0x06000000;
                    u32 py = v1 | sp84;
                    qt = D_800D7F68;
                    D_800D7F68 += 2;
                    qt[0] = px;
                    qt[1] = py;
                }
                e = e2;
                e2 = e->next;
            } while (e != NULL && e2 != NULL && e->unk8 > 0.0f);
        }
        if (s6 != 0) {
            D_80221864(0, s6);
        }
    }
}
