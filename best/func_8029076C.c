extern void func_8029DFF8();
u64 D_8029D708(void);
void *func_8029D688(void);
void func_8029DC78(void *, void **, s32);
void func_8029DDA0(void *, void *, s32);
void func_80290600(void *, void *);
void *func_80291128(u16);
void func_802A0728(s32);
void osWritebackDCacheAll(void);
s32 func_802A7570(u32, u32, s32, s32);
f32 func_802A75B8(u32, u32, s32);
u64 func_802A6AF0(u32, u32, s32, s32);
void func_802902B0(s16, void *, u8, u8 *);
extern s32 D_800B36A8;
extern u32 D_800F5318[];
extern u8 D_800F5320[];
extern u32 D_800F5F08[];
extern u32 D_800F5F0C[];
extern u8 D_800F5DF0[];
extern f32 D_800AAAD0, D_800AAAD4, D_800AAAD8, D_800AAADC;

typedef struct Ent Ent;
typedef struct Blk2b Blk2b;
typedef struct Blk2 Blk2;

struct Ent {
    char pad00[0x12];
    u16 unk12;
    char pad14[0x0C];
    u8 unk20;
    char pad21[0xFF];
    u32 unk120;
    u32 unk124;
    char pad128[0xC];
    u16 unk134;
    char pad136[4];
    u8 unk13A;
};

typedef struct Blk {
    struct Blk *unk0;
    u16 unk4w;
    u16 unk6w;
    struct Blk *unk8w;
    u8 *unkC;
    u8 *unk10;
} Blk;

struct Blk2 {
    Blk2 *unk0;
    Blk2 *unk4;
    u16 unk8;
    u8 unkA;
    u8 unkB;
    u32 unkC;
    u8 *unk10;
};

struct Blk2b {
    Blk2 *unk0;
    Blk2 *unk4;
    u16 unk8;
    u8 unkA;
    u8 unkB;
    u32 unkC;
    u8 *unk10;
};

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u16 unkC;
    void *unk10;
    void *unk14;
    void *unk18;
} Req;

void func_8029076C(void) {
    Ent *e;
    u32 v;
    u32 idx;
    Blk *b0;
    Blk2b *b2;
    u8 *p;
    u8 c0;
    Req *rq;
    void *sp10;
    u32 a, b;
    u64 tl, tl2;
    u32 lo, hi;
    f32 f, fs0f, fs0;

    e = (Ent *)func_8029D688();
    v = e->unk120 & 0x7C;
    if (v == 4 || v == 8) {
        D_800F5318[0]++;
        idx = e->unk124 >> 12;
        b0 = (Blk *)((u8 *)D_800F5318 + 0xCD8);
        while (b0 != NULL) {
            if (!(idx < b0->unk4w) && idx < b0->unk4w + b0->unk6w)
                break;
            b0 = b0->unk0;
        }
        if (b0 != NULL) {
            *(u32 *)D_800F5320 = e->unk124;
            p = b0->unk10 + (idx - b0->unk4w);
            c0 = *p;
            if (c0 != 0xFF) {
                b2 = (Blk2b *)(D_800F5320 + 0x918 + c0 * 16);
                if (b2->unkB == 0xFF) {
                    if (b2->unk4 != 0) {
                        b2->unk4->unk0 = b2->unk0;
                    } else {
                        D_800F5F08[0] = (u32)b2->unk0;
                        b2->unk0->unk4 = NULL;
                    }
                    if (b2->unk0 != 0) {
                        b2->unk0->unk4 = b2->unk4;
                    } else {
                        D_800F5F0C[0] = (u32)b2->unk4;
                        b2->unk4->unk0 = NULL;
                    }
                    func_802902B0((s16)idx, b2, e->unk13A, p);
                    b2->unk0 = 0;
                    b2->unk4 = (Blk2 *)D_800F5F0C[0];
                    if (D_800F5F0C[0] != 0)
                        ((Blk2 *)D_800F5F0C[0])->unk0 = (Blk2 *)b2;
                    D_800F5F0C[0] = (u32)b2;
                    if (D_800F5F08[0] == 0)
                        D_800F5F08[0] = (u32)b2;
                }
                e->unk12 = 2;
            } else {
                func_8029DC78(D_800F5320 + 0xA98, &sp10, 1);
                rq = (Req *)sp10;
                (*(u32 *)(D_800F5320 + 0xA94))++;
                b0 = (Blk *)D_800F5F08[0];
                rq->unk8 = 0x1000;
                rq->unk4 = (u32)b0->unkC + ((idx - b0->unk4w) << 12);
                if (b0->unk8w != 0) {
                    b0->unk8w->unk0 = b0->unk0;
                } else {
                    D_800F5F08[0] = (u32)b0->unk0;
                    b0->unk0->unk0 = 0;
                }
                if (b0->unk0 != 0) {
                    b0->unk0->unk0 = b0->unk8w;
                } else {
                    D_800F5F0C[0] = (u32)b0->unk8w;
                    b0->unk8w->unk0 = 0;
                }
                func_80290600(b0, rq);
                if (b0->unk4w != 0xFFFF) {
                    a = b0->unk4w;
                    b2 = (Blk2b *)func_80291128(a);
                    b2->unk10[(u16)a - (u16)b2->unk4] = 0xFF;
                    b2->unk4 = (Blk2 *)0xFFFF;
                }
                rq->unkC = 0;
                rq->unk10 = b0;
                rq->unkC = idx;
                rq->unk18 = p;
                rq->unk14 = e;
                func_8029DDA0(D_800F5DF0, rq, 1);
            }
        } else {
            tl = D_8029D708();
            lo = (u32)tl;
            hi = tl >> 32;
            fs0f = D_800AAAD0;
            fs0 = D_800AAAD4;
            do {
                tl2 = D_8029D708();
                a = ((u32)(tl2 >> 32) - lo) - ((u32)tl2 < hi);
                b = (u32)tl2 - hi;
                tl = func_802A6AF0((a << 6) | (b >> 26), b << 6, 0, 3);
                lo = (u32)tl;
                hi = tl >> 32;
                if (func_802A7570(lo, hi, 0, 0) > 0) {
                    f = func_802A75B8(lo, hi, 0);
                } else {
                    f = func_802A75B8(lo & 0, (hi & 1) | ((hi >> 1) | (lo << 31)), lo << 31);
                    f = f + f;
                }
            } while (f * fs0f < fs0);
            osWritebackDCacheAll();
            func_802A0728(1);
        }
    } else {
        tl = D_8029D708();
        lo = (u32)tl;
        hi = tl >> 32;
        fs0f = D_800AAAD8;
        fs0 = D_800AAADC;
        do {
            tl2 = D_8029D708();
            a = ((u32)(tl2 >> 32) - lo) - ((u32)tl2 < hi);
            b = (u32)tl2 - hi;
            tl = func_802A6AF0((a << 6) | (b >> 26), b << 6, 0, 3);
            lo = (u32)tl;
            hi = tl >> 32;
            if (func_802A7570(lo, hi, 0, 0) > 0) {
                f = func_802A75B8(lo, hi, 0);
            } else {
                f = func_802A75B8(lo & 0, (hi & 1) | ((hi >> 1) | (lo << 31)), lo << 31);
                f = f + f;
            }
        } while (f * fs0f < fs0);
        osWritebackDCacheAll();
        func_802A0728(1);
    }
    ((void (*)(void))0x80000400)();
    D_800B36A8 = -1;
    e->unk12 = 2;
    func_8029DFF8();
}
