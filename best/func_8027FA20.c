typedef struct MatHdr {
    s32 count;      /* 0x0 */
    s32 size;       /* 0x4 */
    s32 a;          /* 0x8 */
    f32 f0C;        /* 0xC */
    s32 d;          /* 0x10 */
    s32 e;          /* 0x14 */
    s32 unk[1];     /* 0x18 */
} MatHdr;

extern s32 D_80222FA0(void *arg0, s32 arg1);
extern MatHdr *D_80210AF0(MatHdr *h, s32 idx, s32 *out);
extern MatHdr *D_80210ADC(MatHdr *h, s32 idx);
extern MatHdr *D_802223EC(void *a, void *b, s32 size, s32 n);
extern s32 func_802A0938(void *dst, void *src, s32 len);
extern void D_80221948(s32 a, void *b);
extern void D_80221E20(s32 a, void *b, void *c);
extern s32 func_8027F6FC(MatHdr *a, MatHdr *b, s32 c, s32 d, s32 e, s32 f, s32 g);

extern f32 D_800AA274;
extern f32 D_800AA278;
extern f32 D_800AA27C;
extern f32 D_800AA280;
extern f32 D_800F4E10;
extern s32 D_800F4E14;
extern s32 D_800F4E18;
extern f32 D_800F4E1C;
extern f32 D_800F4E20;

void func_8027FA20(s32 arg0, void *arg1)
{
int __repair_literal;

    s32 sp20, sp24, sp28, sp2C, sp30, sp34, sp38, sp3C;
    MatHdr *h1;
    MatHdr *t;
    MatHdr *m0, *m1, *m2;
    s32 offA, offB;
    s32 sz;
    MatHdr *s2;
    MatHdr **pp;
    s32 o;
    s32 h2;
    s32 h3;

    if (D_80222FA0(arg1, 1) != 0) {
        pp = *(MatHdr ***)arg1;
        h1 = pp[0];
        h2 = (s32)pp[1];
        h3 = D_80210AF0(h1, 0, &sp20);
        m0 = D_80210AF0(h1, 1, &sp24);
        m1 = D_80210AF0(h1, 2, &sp28);
        m2 = D_80210AF0(h1, 3, &sp2C);
        m2 = D_80210AF0(h1, 4, &sp30);
        t = D_80210AF0(h1, 5, &sp34);
        s2 = D_80210ADC(t, 0);
        D_80210AF0(t, 1, &sp38);
        D_80210AF0(t, 2, &sp3C);
__repair_literal = 0x10;

        offA = s2->e * __repair_literal * s2->size + ((s2->e * 4 + 0xF) & ~7);
        offB = s2->d * 0x10 * s2->size + ((s2->d * 4 + 0xF) & ~7);
        sz = offB + offA + 0x30;
        o = h2 - sp34; o += sz;
        h1 = D_802223EC(0, arg1, o, s2->size);
        if (h1 != 0) {
            func_802A0938((u8 *)h1 + 8, (void *)h3, sp20);
        }
    }
}
