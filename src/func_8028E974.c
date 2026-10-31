extern s32 D_800B3630;
extern f32 D_800AAA78;
typedef struct {
    u8 pad0[8];
    s32 unk8;
    u8 padC[4];
    f32 unk10;
    u8 pad14[0xC];
    f32 unk20;
    f32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    f32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    u8 pad44[4];
    s32 unk48;
} Struct8028;

extern Struct8028 *D_800B3628;
extern s32 D_800B362C;

void func_8028E9D8(void) {
    D_800B3630 = 0;
}

s32 func_8028E9D8b(void);

s32 func_8028EA18(void) {
    Struct8028 *p = D_800B3628;
    s32 r = 0;
    if (p->unk28 != 0 && p->unk10 >= p->unk20 && p->unk24 >= p->unk10) {
        r = 1;
    }
    if (r) {
        return (D_800B3628->unk30 & 2) != 0;
    }
    return 0;
}

void func_8028E974(void) {
    if (D_800B362C == 0) {
        Struct8028 *p = D_800B3628;
        D_800B362C = 1;
        p->unk8 = 0;
        p->unk10 = 0.0f;
        p->unk28 = 0;
        p->unk2C = 0;
        p->unk40 = -1;
        p->unk3C = -1;
        p->unk34 = D_800AAA78;
    }
}

s32 func_8028EA60(void) {
    if (D_800B3628->unk28 != 0) {
        return D_800B3628->unk48;
    }
    return 0;
}

s32 func_8028E9C4(void) {
    D_800B3630 = 1;
    return 1;
}
