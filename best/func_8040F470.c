typedef struct { u8 pad[0xA4C]; s16 idx; } B0;
typedef struct { s32 bit; s32 *ptr; } Slot;

extern volatile s32 D_8010E4F0;
extern s32 D_8010E2EC;
extern s32 D_8010E4DC;
extern s32 D_8010E4F8;
extern s32 D_8010E4E8;
extern s32 D_800CCA8C;
extern u8 D_800D77D8[];
extern Slot D_800AB938[];
extern s32 D_800C9D04[];
extern s32 D_800BF130[];
extern u8 D_800EE468[];
extern u8 D_800BEE08[];
extern u8 D_800BEE0C[];
extern u8 D_8010E838[];
extern u8 D_8010E818[];
extern u8 D_800CC760[];
extern u8 D_417160[];
extern u8 D_416D60[];
extern B0 *D_800D6358;

void func_802A08B8();
void D_80209C78();
void func_80403D34();

void func_8040F470(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *a2;
    u8 *d;
    s32 s0;
    s32 one;

    s0 = D_800D6358->idx;
    s0 = arg2;
    D_8010E4F0 = 0;
    D_8010E4F0 = (s32)(D_800D6358->idx * 0x230) + (s32)D_800EE468;
    if (s0 == 0) {
        s0 = 0xB;
    } else if (s0 == 0xB) {
        s0 = 0;
    }
    one = 1;
    d = D_800D77D8;
    if (s0 < 0x10 && !(*(s32 *)d & (one << D_800AB938[s0].bit))) {
        func_802A08B8(D_8010E838, D_800BEE08, D_800AB938[s0].ptr[d[0xE]]);
        func_802A08B8(D_8010E818, D_800BEE0C, D_800C9D04[d[0xE]], D_800BF130[(s0 + 7) * 3]);
        a2 = D_417160;
        *(s32 *)d |= one << D_800AB938[s0].bit;
    } else {
        D_8010E2EC = 1;
        D_8010E4DC = 0xC;
        D_8010E4F8 = 0xC;
        D_8010E4E8 = 0;
        if (D_800CCA8C == -1) {
            D_80209C78(D_800CC760, 0xF);
            return;
        }
        a2 = D_416D60;
    }
    func_80403D34(arg0, arg1);
}
