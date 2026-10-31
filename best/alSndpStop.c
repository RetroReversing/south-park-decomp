typedef struct {
    s16 v0;
    s16 pad2;
    s32 v4;
    u8 b8;
    u8 b9;
    u8 b10;
} PackT;

void func_8029370C(void *p, PackT *pack, s32 zero);

typedef struct {
    char pad0[0x3C];
    s32 unk3C;
    s32 unk40;
} S96550;

void alSndpStop(S96550 *arg0) {
    PackT pack;
    s32 idx = arg0->unk3C;
    pack.v0 = 1;
    pack.v4 = arg0->unk40 + idx * 0x30;
    func_8029370C((u8 *)arg0 + 0x14, &pack, 0);
}
