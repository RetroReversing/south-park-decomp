typedef struct { char pad[0x10]; f32 f10; char pad2[0x10]; f32 f24; s32 unk28; } G;

extern G *D_800B3628;

s32 func_8028E77C(s32 arg0) {
    G *g;
    s32 r;

    g = D_800B3628;
    r = 1;
    if (g->unk28 != 0) {
        r = g->f10 > g->f24;
    }
    return r;
}
