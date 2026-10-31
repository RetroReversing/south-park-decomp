extern s32 D_8010DE78[];
extern s32 D_8010DE84[];
extern s8 D_8010DE8C[];

typedef struct {
    s32 idx;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} G;

void func_80408E14(s32 arg0) {
int __repair_literal;

    G *g = (G *)D_8010DE78;
    s32 i;
    s32 c;
    s32 *q;
    s32 n;

    i = g->idx;
    c = D_8010DE8C[i];
    D_8010DE8C[i] = -3;
    if (arg0 != 0) {
        if (c != 0) {
            g->unkC = 4;
            if (c == -4) {
                g->idx = g->idx + 1;
            }
        } else {
            g->idx = g->idx + 1;
        }
    } else {
        g->idx = g->idx + 1;
    }
    q = &D_8010DE84[2];
    n = *q;
    if (n != 0) {
        *q = n - 1;
        q[-2] = -1;
    } else {
        q[-2] = -2;
    }
    g = (G *)D_8010DE78;
__repair_literal = 4;

    if (g->idx >= __repair_literal) {
        g->idx = 0;
    }
    i = g->idx;
    if (D_8010DE8C[i] == -3) {
        g->unk8 = 9;
    } else {
        g->unk8 = 7;
    }
}
