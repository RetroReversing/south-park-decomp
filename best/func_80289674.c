typedef struct { char pad0[4]; s32 unk4; f32 unk8; s32 unkC; s32 unk10; char *unk14; char pad1[4]; f32 unk1C; char pad2[0xD4]; s32 unkF4; } A0;
typedef struct { s32 unk0; char pad[0x38]; s32 unk3C; char pad1[0x114]; f32 unk154; char pad2[0x2C]; s32 unk184; } A1;
extern f32 D_800AA78C;
extern f32 D_800AA790;
f32 D_80215964(f32, f32, s32);
void D_80242160(void *, void *, s32, s32);
void D_8024249C(void *, s32, s32, f32, s32, s32);
f32 func_8026D63C(s32, s32, s32);
void func_802630B0(void *, void *, s32, s32, s32, f32, s32, s32, s32);
void func_80273DCC(s32,  s32,  f32,  s32);

void func_80289674(A0 *arg0, A1 *arg1) {
    s32 *temp_s2;
    f32 m;
    temp_s2 = (s32 *)(arg0->unk14 + 0x14);
    arg1->unk154 = D_80215964(arg1->unk154, arg0->unk1C * D_800AA78C, 0x3D8EFA36);
    m = arg0->unk1C * D_800AA790;
    arg0->unk1C = m;
    if (!(arg0->unk8 <= func_8026D63C(arg0->unk10, arg0->unk4, arg0->unkC))) {
        if (arg1->unk184 == 0) {
            arg1->unk3C = 0;
            return;
        }
    }
    arg1->unk0 = arg1->unk0 | 0x20;
    D_80242160(arg0, arg1, 4, temp_s2[3]);
    arg0->unkF4 = arg0->unkF4 & 0xFEFFFFFF;
    D_8024249C(arg0, 0x82B, arg0->unk4, arg0->unk8, arg0->unkC, arg0->unkC);
    D_8024249C(arg0, 0x82C, arg0->unk4, arg0->unk8, arg0->unkC, arg0->unkC);
    D_8024249C(arg0, 0x82D, arg0->unk4, arg0->unk8, arg0->unkC, arg0->unkC);
    func_802630B0(arg0, arg0, 0x1F, -1, arg0->unk4, arg0->unk8, arg0->unkC, 0, 0);
    func_80273DCC(0x3F2,  arg0->unk4,  arg0->unk8,  arg0->unkC);
}
