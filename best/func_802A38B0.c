typedef struct { s32 unk0, tbl, unk8; } Ent;
extern s32 D_800FD4D0;
extern s32 D_800B82D8;
extern Ent D_800FCD68;
s32 D_802A56AC(void);

void func_802A38B0(void) {
    s32 t3;
    s32 *data;
    s32 s1;
    s32 t8;
    s32 t7;
    s32 t6;
    s32 t5;
    s32 t4;
    Ent *e;
    Ent *end;
    s32 x0, x1, x2, x3, y0, sz, *p;

    t3 = D_802A56AC() & 0xFF;
    data = &D_800FD4D0;
    s1 = -1;
    t8 = 0x1FFE000;
    t7 = 0x80000000;
    t6 = 3;
    t5 = 2;
    t4 = -3;
    e = &D_800FCD68 + 0x10;
    end = &D_800FCD68 + 0x30;
    e->unk0 = s1;
    do {
        e->unk8 = 0;
        x0 = *data++;
        x1 = *data++;
        x2 = *data++;
        x3 = *data++;
        if ((x2 | x3) & 2) {
            sz = 0x1000;
            x0 &= t8;
            p = &D_800B82D8;
            while (sz != 0) {
                if (*p == x0) {
                    break;
                }
                if (*p & t7) {
                    sz = 0;
                } else {
                    p++;
                    sz *= 4;
                }
            }
            if (sz != 0) {
                if ((x2 & x3 & 3) != t6) {
                    if ((x2 & 3) == t5) {
                        if ((x1 & 0xFF) != t3) {
                            x2 &= t4;
                        }
                    }
                    if ((x3 & 3) == t5) {
                        if ((x1 & 0xFF) != t3) {
                            x3 &= t4;
                        }
                    }
                }
                y0 = x1 & t8;
                if ((x2 & x3) & 2) {
                    sz *= 2;
                } else if (x3 & 2) {
                    y0 += sz;
                }
                e->unk0 = y0;
                e->tbl = y0 + sz - 1;
                e->unk8 = t6;
            }
        }
        e++;
        if (e >= end) {
            break;
        }
        e->unk0 = s1;
    } while (1);
}
