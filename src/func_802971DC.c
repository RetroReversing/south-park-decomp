typedef struct S_802971DC { s32 unk0; s32 unk4; } S_802971DC;

typedef struct G_800B37B0 {
    char pad0[0x2C];
    s32 unk2C;
} G_800B37B0;

extern G_800B37B0 *D_800B37B0;

void func_802971DC(S_802971DC *arg0) {
    G_800B37B0 *h = D_800B37B0;
    arg0->unk0 = h->unk2C;
    h->unk2C = (s32)arg0;
}
