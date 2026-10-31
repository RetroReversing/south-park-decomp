extern s8 D_800CE611[];

s8 func_80268BC0(s32 arg0) {
    return D_800CE611[(arg0 & 0xFF) * 2];
}

extern u8 D_800B17E4[];
extern u8 D_800B1930[];
extern u8 D_800B1A7C[];
extern u8 D_800B1BD4[];
extern u8 D_800B1D20[];

void func_80268C74();
void func_802697F8();

typedef struct S_68BDC {
    char pad[0x14];
    s32 unk14;
    s32 unk18;
} S_68BDC;

void func_80268BDC(S_68BDC *arg0) {
    func_80268C74(arg0);
    func_802697F8(arg0, D_800B1A7C, (u8 *)arg0 + 0xA2);
    func_802697F8(arg0, D_800B1930, (u8 *)arg0 + 0x2A0);
    func_802697F8(arg0, D_800B17E4, (u8 *)arg0 + 0x49E);
    func_802697F8(arg0, D_800B1BD4, (u8 *)arg0 + 0x69C);
    func_802697F8(arg0, D_800B1D20, (u8 *)arg0 + 0x89A);
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_80268C74(arg0);
}

void func_802697F8(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 i;

    for (i = 0; i < 0xFF; i++) {
        arg2[i * 2] = 0xFF;
    }
    for (i = 0; ; i++) {
        u8 v = arg1[i * 3];
        if (!(v < 0xFF)) {
            break;
        }
        arg2[v * 2] = arg1[i * 3 + 2];
        arg2[v * 2 + 1] = arg1[i * 3 + 1];
    }
}

void func_80269A98(void *arg0, s32 arg1, s32 arg2) {
    f32 a = arg1;
    f32 b = arg2;

    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(f32 *)((u8 *)arg0 + 0xC) = b;
    *(f32 *)((u8 *)arg0 + 0x10) = a;
    *(f32 *)((u8 *)arg0 + 0x14) = a;
    *(f32 *)((u8 *)arg0 + 0x18) = b;
}
