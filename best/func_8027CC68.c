typedef struct BGlobal {
    void *unk0;
    char pad[0x30];
    f32 unk34;
    char pad2[8];
    f32 unk40;
    char pad3[0x10];
    f32 unk54;
    char pad4[0x1C];
    f32 unk74, unk78, unk7C, unk80;
} BGlobal;

typedef struct BPlayer {
    u8 unk0;
    char pad[3];
    f32 unk4;
    char pad2[4];
    f32 unkC;
    s32 unk10;
    char pad3[0xE0];
    u32 unkF4;
} BPlayer;

typedef struct BCaller {
    BPlayer *unk0;
    u32 *unk4;
    char pad[0x44];
    f32 unk4C;
    char pad2[4];
    f32 unk54;
} BCaller;

extern f32 D_802297DC(BPlayer *);
extern void func_8027C5D8(s32);
extern void func_8026E0A4(s32);
extern f32 D_800AA1CC;
extern BGlobal *D_800F4820;

void func_8027CC68(BCaller *arg0) {
    BGlobal sp10;
    s32 s1;
    f32 lo2, hi2;

    if ((*arg0->unk4 & 2) && (*((s8 *)arg0->unk4 + 5) != 0) && (D_802297DC(arg0->unk0) != 0.0f)) {
        s1 = arg0->unk0->unk10;
        if (s1 != 0 && (arg0->unk0->unk0 != 1 || (arg0->unk0->unkF4 & 0x18010000) != 0)) {
            D_800F4820 = &sp10;
            D_800F4820->unk54 = D_802297DC(arg0->unk0);
            if (*arg0->unk4 & 4) {
                D_800F4820->unk54 *= D_800AA1CC;
            }
            D_800F4820->unk0 = arg0;
            D_800F4820->unk40 = 0.0f;
            D_800F4820->unk34 = 0.0f;
            if (arg0->unk0->unk4 < arg0->unk4C) {
                lo2 = arg0->unk0->unk4;
                hi2 = arg0->unk4C;
            } else {
                lo2 = arg0->unk4C;
                hi2 = arg0->unk0->unk4;
            }
            D_800F4820->unk74 = lo2 - D_800F4820->unk54;
            D_800F4820->unk7C = hi2 + D_800F4820->unk54;
            if (arg0->unk0->unkC < arg0->unk54) {
                lo2 = arg0->unk0->unkC;
                hi2 = arg0->unk54;
            } else {
                lo2 = arg0->unk54;
                hi2 = arg0->unk0->unkC;
            }
            D_800F4820->unk78 = lo2 - D_800F4820->unk54;
            D_800F4820->unk80 = hi2 + D_800F4820->unk54;
            func_8027C5D8(s1);
        }
        func_8026E0A4(s1);
    }
}
