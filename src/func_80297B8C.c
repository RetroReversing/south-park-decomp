typedef struct {
    char pad0[0x14];
    s32 unk14;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    char pad2A[4];
    s16 unk2E;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
} Obj97B8C;

extern s32 D_00297CD8;
extern s32 D_00298760;
extern s32 func_80293970(s32, s32, s32, s32, s32);
extern s32 func_80298980(void *, void *, void *, s32);

void func_80297B8C(Obj97B8C *arg0, s32 arg1) {
    s32 one;
    s32 sone;
    s32 zero = 0;

    func_80298980(arg0, &D_00297CD8, &D_00298760, 4);
    arg0->unk14 = func_80293970(zero, zero, arg1, 1, 0x50);
    one = 1;
    arg0->unk38 = one;
    arg0->unk48 = 0;
    sone = one;
    arg0->unk1A = sone;
    arg0->unk28 = sone;
    arg0->unk2E = sone;
    arg0->unk1C = sone;
    arg0->unk1E = sone;
    arg0->unk20 = 0;
    arg0->unk22 = 0;
    arg0->unk26 = sone;
    arg0->unk24 = 0;
    *(volatile s16 *)&arg0->unk24 = 0;
    arg0->unk30 = 0;
    arg0->unk34 = 0;
    arg0->unk18 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
}
