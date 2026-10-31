f32 D_802158FC(f32, f32);
void D_8023E95C(void *, void *, s32);
s32 D_80246A4C();
extern f32 D_800AA564;

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
    s8 c;

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
        c = a1->unk30;
        if (c != 0x28) {
            if (c != 0x2F) {
                D_8023E95C(a0, a1, 0x28);
            }
        }
    }
}
