typedef struct {
    char pad[0x2A8];
    f32 x;
    f32 y;
    f32 w;
    f32 h;
} Scn;

typedef struct { s32 w0; s32 w1; } Gfx;

extern Gfx *D_800D7F68;
extern s32 D_800D77D0;
extern s32 D_800D78F0;
extern u8 D_800D6338;
extern u8 D_800CEE08;
extern f32 D_800A98B0;
extern f32 D_800A98B4;
extern f32 D_800A98B8;
extern f32 D_800A98BC;

void D_80202320(void *a, void *b);
void D_8023608C(void *a, void *b);
void D_80236CB8(void *a, void *b);
void D_80236D34(void *a, void *b);
void D_80203864(void *a, void *b);
void D_80200A34(void *a, void *b);
void func_8025CE24(void *a, void *b);
void func_8028306C(void *a, void *b);
void D_802039D4(void *a, void *b);
void func_80262264(void *a, void *b);
void D_8020BDE4(s32 a, s32 b, Gfx *c, Gfx *d);
s32 func_8028E738(void);

#define PACK(v, t) (((f32)(t) <= (v)) ? (((s32)((v) - (t)) | 0x80000000) & 0x3FF) : ((s32)(v) & 0x3FF))

void func_8025CFE0(Scn *p, s32 arg1) {
    Gfx *g;
    Gfx *g2;
    Gfx *g3;
    Gfx *g4;
    s32 hi;
    s32 lo;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    D_80202320(arg1, p);
    if (func_8028E738() == 0) {
        D_8023608C(&D_800D6338, p);
    }
    if (D_800D78F0 == 0xD) {
        D_80236CB8(&D_800D78F0 - 0x15B8, p);
    }
    D_80203864(arg1, p);
    D_80200A34(arg1, p);
    func_8025CE24((char *)arg1 + 0x16EC, p);
    if (*(u8 *)&D_800D78F0 == 0) {
        func_8028306C((char *)p + 0x540, p);
    }
    D_802039D4(arg1, p);
    func_80262264(&D_800CEE08, p);
    if (func_8028E738() == 0) {
        if (D_800D78F0 == 0xD) {
            D_80236D34(&D_800D78F0 - 0x15B8, p);
        }
    }
    if (D_800D77D0 & 0x40) {
        g = D_800D7F68;
        D_800D7F68 = g + 1;
        g->w0 = 0xE7000000;
        g->w1 = 0;
        g2 = g + 1;
        D_800D7F68 = g2;
        g2->w0 = 0xE3000A01;
        g2->w1 = 0;
        g3 = g2 + 1;
        D_800D7F68 = g3;
        g3->w0 = 0xF9000000;
        g3->w1 = -1;
        g4 = g3 + 1;
        D_800D7F68 = g4;
        g4->w0 = 0xEE000000;
        g4->w1 = -1;
        g = g4 + 1;
        D_800D7F68 = g;
        g->w0 = 0xE2001D00;
        g->w1 = 4;
        D_8020BDE4(0x16, -1, g, g4);
        g = D_800D7F68;
        D_800D7F68 = g + 1;
        a = PACK(p->x + p->w, D_800A98B0);
        b = PACK(p->y + p->h, D_800A98B4);
        g->w0 = ((a & 0x3FF) << 14) | ((b * 4) | 0xF6000000);
        c = PACK(p->x, D_800A98B8);
        d = PACK(p->y, D_800A98BC);
        g->w1 = (c << 14) | (d * 4);
    }
}
