typedef struct S_802971DC { s32 unk0; s32 unk4; } S_802971DC;

typedef struct G_800B37B0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    char pad24[0x14];
    void *unk38;
    char pad3C[0xC];
    s32 unk48;
    char pad4C[0x2C];
    S_802971DC *unk78;
} G_800B37B0;

extern G_800B37B0 *D_800B37B0;
extern f32 D_800AAD50, D_800AAD54;
extern char D_800AAD38[], D_800AAD3C[];

void func_8029D580(char *, char *, s32);
s32 alUnlink(void *);
s32 alLink(void *, void *);

typedef struct L_80297234 {
    char pad0[0x14];
    void *unk14;
} L_80297234;

typedef struct L_802972C8 {
    struct L_802972C8 *unk0;
    char pad4[0xC];
    s32 unk10;
} L_802972C8;

s32 func_802972C8(G_800B37B0 *arg0, L_802972C8 **arg1);

void func_802971DC(S_802971DC *arg0) {
    S_802971DC *h = D_800B37B0->unk78;
    arg0->unk0 = h->unk4;
    h->unk4 = (s32)arg0;
}

void _collectPVoices(L_80297234 *arg0) {
    void *p = arg0->unk14;
    while (p != NULL) {
        alUnlink(p);
        alLink(p, (char *)arg0 + 4);
        p = arg0->unk14;
    }
}

s32 func_80297288(char *arg0, s32 arg1) {
    f32 f = (f32)arg1 * *(f32 *)(arg0 + 0x44) * D_800AAD50 + D_800AAD54;
    return (s32)f & ~0xF;
}

s32 func_802972C8(G_800B37B0 *arg0, L_802972C8 **arg1) {
    s32 best = 0x7FFFFFFF;
    L_802972C8 *p;
    if (arg0->unk0 == 0) {
        func_8029D580(D_800AAD38, D_800AAD3C, 0x133);
    }
    *arg1 = NULL;
    p = (L_802972C8 *)arg0->unk0;
    if (p != NULL) {
        do {
            if (p->unk10 - arg0->unk20 < best) {
                *arg1 = p;
                best = p->unk10 - arg0->unk20;
            }
            p = p->unk0;
        } while (p != NULL);
    }
    return (*arg1)->unk10;
}
