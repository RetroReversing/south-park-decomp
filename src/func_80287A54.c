f32 D_80215BE0(f32, f32);
f32 D_802158FC(f32, f32);
s32 D_80246A4C();
void D_8023E95C(void *, void *, s32);
void D_80247110(void *, void *);
void D_8021B7EC(void *, s32, s32);
void func_8025A554(void *);

extern f32 D_800AA5C8, D_800AA5CC, D_800AA5D0, D_800AA5D4, D_800AA5D8, D_800AA5DC;
extern f32 D_800AA564;
extern u8 D_287D58;

typedef struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad44[0x24];
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    u8 pad74[0x34];
    f32 unkA8;
    u8 padAC[0xB4];
    f32 unk160;
} S_A1;

void func_80287A54(void *arg0, S_A1 *a1) {
    f32 x = D_800AA5C8;
    f32 y = D_800AA5CC;
    a1->unk68 = D_80215BE0(x, y);
    a1->unk6C = D_80215BE0(x, y);
    a1->unk70 = D_80215BE0(x, y);
    a1->unk40 = 0;
    a1->unkA8 = D_80215BE0(D_800AA5D0, D_800AA5D4);
    a1->unk160 = D_80215BE0(D_800AA5D8, D_800AA5DC);
}

typedef struct {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad6[0x2A];
    s8 unk30;
    u8 pad31[0x123];
    f32 unk154;
    f32 unk158;
    u8 pad15C[0x28];
    s32 unk184;
} S_B1;

typedef struct {
    u8 pad0[0x338];
    s32 unk338;
} S_B0;

void func_80287390(S_B0 *a0, S_B1 *a1) {
    f32 s;

    if (D_80246A4C() != 1) {
        s = D_800AA564;
        a1->unk158 = D_802158FC(a1->unk158, s);
        a1->unk154 = D_802158FC(a1->unk154, s);
    }
    if (a1->unk184 != 0) {
        if (!(a0->unk338 & 1)) {
            a1->unk184 = 0;
        }
    }
    if (a1->unk4 == 0) {
        s8 c = a1->unk30;
        if (c != 0x28 && c != 0x2F) {
            D_8023E95C(a0, a1, 0x28);
        }
    }
}

typedef struct {
    u8 pad0[0xF4];
    s32 unkF4;
} S_C0;

typedef struct {
    s32 unk0;
    u8 pad4[0xEC];
    s32 unkF0;
} S_C1;

void func_8028833C(S_C0 *a0, S_C1 *a1, s32 a2) {
    a1->unk0 |= 0x20;
    a0->unkF4 = a0->unkF4 & 0xFF7FFFFF & 0xFFEFFFFF & 0xFFFF7FFF;
    if (a1->unkF0 != 0) {
        D_80247110(a0, a1);
    }
    if (a0->unkF4 & 0x04000000) {
        func_8025A554(a0);
    }
    D_8021B7EC(a0, 1, a2);
}

typedef struct {
    u8 pad0[0x68];
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    u8 pad74[0x5C];
    u32 unkD0;
    u8 padD4[0xA8];
    s32 unk17C;
    u8 pad180[0x10];
    s32 unk190;
    s32 unk194;
    u8 pad198[0x18];
    s32 unk1B0;
    s32 unk1B4;
    s32 unk1B8;
} S_D1;

void func_802883E4(void *arg0, S_D1 *a1) {
    a1->unk68 = 0;
    a1->unk6C = 0;
    a1->unk70 = 0;
    a1->unk1B0 = 0;
    a1->unk1B4 = 0;
    a1->unk1B8 = 0;
    a1->unk17C = 0;
    a1->unk190 = 0;
    a1->unk194 = 0;
    a1->unkD0 = (u32)&D_287D58;
}
