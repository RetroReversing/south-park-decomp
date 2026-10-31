typedef struct {
    char pad[0x1C];
    s32 unk1C;
    char pad2[0x110 - 0x20];
} Inner;

typedef struct {
    char pad[0x110];
    Inner inner;
} Outer;

extern s32 D_802A0520(s32);
extern void func_8029DC78(Inner *, s32, s32);
extern s32 func_802A0500(void);

void func_80270384(Outer *arg0) {
    Inner *p;
    s32 t;
    s32 v;

    p = &arg0->inner;
    t = func_802A0500();
    v = p->unk1C + 1;
    p->unk1C = v;
    if (v != 1) {
        D_802A0520(t);
        func_8029DC78(p, 0, 1);
        return;
    }
    D_802A0520(t);
}

typedef struct {
    char pad[0xE];
    u16 count;
    u32 val[1];
} SortList;

void func_80270894(SortList *arg0) {
    s32 i;
    s32 j;
    u32 v;
    for (i = 0; i < (s16)arg0->count; i++) {
        for (j = i + 1; j < (s16)arg0->count; j++) {
            if (arg0->val[j] < arg0->val[i]) {
                v = arg0->val[i];
                arg0->val[i] = arg0->val[j];
                arg0->val[j] = v;
            }
        }
    }
}
