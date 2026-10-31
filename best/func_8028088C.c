typedef struct {
    s16 *unk0;
    u8 *unk4;
    s32 unk8;
    char pad[0xC];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} S8088C;

typedef struct { s32 a, b, c; } Out3;

extern s32 D_80210ADC(s32, s16);
extern void D_80213224(void *, s32, s32, s32);

void func_8028088C(S8088C *p, s32 i, Out3 *out)
{
    s16 id;
    s32 t;
    s32 a, b, c;
    s16 *tb = p->unk0;
    u8 *recs = p->unk4;
    id = tb[i * 2];
    if (id == -1) {
        u8 *r = recs + (i + (i << 2)) * 4;
        a = *(s32 *)(r + 0);
        b = *(s32 *)(r + 4);
        c = *(s32 *)(r + 8);
        out->a = a;
        out->b = b;
        out->c = c;
    } else {
        t = D_80210ADC(p->unk8, id);
        D_80213224(out, p->unk20, t + (p->unk18 << 4), t + (p->unk1C << 4));
    }
}
