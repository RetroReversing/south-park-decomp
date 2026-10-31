typedef struct Pl {
    char pad0[4];
    f32 x;
    f32 y;
    f32 z;
    char pad1[0x124 - 0x10];
    s16 unk124;
    char pad2[0x1B8 - 0x126];
    s32 unk1B8;
} Pl;

typedef struct E {
    char pad0[4];
    f32 x;
    f32 y;
    f32 z;
    char pad1[0x16C - 0x10];
    u16 unk16C;
} E;

typedef struct W {
    char pad0[4];
    f32 x;
    f32 y;
    f32 z;
    char pad1[0xA74 - 0x10];
    s16 unkA74;
    char pad2[0x159C - 0xA76];
    struct W *unk159C;
} W;

extern char D_800CCA80[];

extern W *D_800D6358;
extern f32 D_800A9668;
extern f32 D_800A966C;
void D_802131C4(f32 *out, f32 *a, f32 *b);
void func_8024E8E0(Pl *p, s32 a, s32 b, s32 c);

void func_80255998(Pl *arg0, Pl *arg1) {
    char *base;
    f32 sp[3];
    E *e;
    f32 lim;
    s32 count;
    s32 i;
    W *w;

    count = *(s32 *)(D_800CCA80 + 0xF0C);
    i = 0;
    if (count > 0) {
        lim = D_800A9668;
        base = D_800CCA80;
        do {
            e = *(E **)(base + 0xE8C + i * 4);
            if (e->unk16C != 0 && arg1->unk1B8 == 0) {
                D_802131C4(sp, &e->x, &arg1->x);
                if (sp[0] * sp[0] + sp[1] * sp[1] + sp[2] * sp[2] <= lim) {
                    func_8024E8E0(arg1, 0x849, -4, 0);
                    arg1->unk1B8 = 1;
                    arg1->unk124 = 1;
                    return;
                }
            }
            i++;
        } while (i < count);
    }
    w = D_800D6358;
    while (w != NULL) {
        if (w->unkA74 > 0) {
            D_802131C4(sp, &w->x, &arg1->x);
            if (sp[0] * sp[0] + sp[1] * sp[1] + sp[2] * sp[2] <= D_800A966C) {
                func_8024E8E0(arg1, 0x849, -4, 0);
                arg1->unk1B8 = 1;
                arg1->unk124 = 1;
                return;
            }
        }
        w = w->unk159C;
    }
}
