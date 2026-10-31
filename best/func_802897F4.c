extern f32 D_800AA794, D_800AA798;
extern u8 D_288E98[];

typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; } A0;
typedef struct {
    u8 pad0[0x3C];
    f32 f3C;
    void *p40;
    void *p44;
    void *p48;
    void *p4C;
    void *p50;
    void *p54;
    void *p58;
    void *p5C;
    void *p60;
    void *p64;
    void *p68;
    void *p6C;
    void *p70;
    void *p74;
    void *p78;
    void *p7C;
    void *p80;
    void *p84;
    void *p88;
    void *p8C;
    void *p90;
    void *p94;
    void *p98;
    void *p9C;
    void *pA0;
    void *pA4;
    void *pA8;
    void *pAC;
    void *pB0;
    void *pB4;
    void *pB8;
    void *pBC;
    void *pC0;
    void *pC4;
    void *pC8;
    void *pCC;
    void *pD0;
    u8 padD4[0x80];
    f32 f154;
    f32 f158;
    u8 pad15C[4];
    f32 f160;
    u8 pad164[0x1C];
    s32 i180;
    s32 i184;
} A1;

void func_8024249C(void *a0, s32 a1, s32 a2, s32 a3, s32 a4);
f32 func_80215BE0(f32 x);

void func_802897F4(A0 *a0, A1 *a1) {
    A0 *p = a0;
    a1->pD0 = (void *)D_288E98;
    a1->i180 = 0;
    a1->f3C = func_80215BE0(0.0f);
    a1->f154 = 0.0f;
    a1->f158 = 0.0f;
    a1->i184 = 0;
    a1->f160 = D_800AA798;
    func_8024249C(p, 0x85B, p->unk4, p->unk8, p->unkC);
}
