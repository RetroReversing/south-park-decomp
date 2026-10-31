typedef struct S_8010E538 {
    s32 unk0;
    s32 *unk4;
    s32 *unk8;
    s32 *unkC;
    s32 *unk10;
    s32 *unk14;
} S_8010E538;

void *D_80221948(s32, void *);
s32 *D_80221640(s32, s32, s32, void *);
s32 *D_8022154C(s32, s32, s32, void *);
void func_8026AC4C(s32, s32, s32);

extern s32 D_800EC058;
extern s32 D_800EC05C;
extern s32 D_800BE228, D_800BE234, D_800BE244, D_800BE254, D_800BE264, D_800BE26C;
extern s32 D_8010E520, D_8010E524, D_8010E528, D_8010E52C, D_8010E530, D_8010E534;
extern s32 D_8010E550, D_8010E554, D_8010E558, D_8010E55C;

void func_8040C408(S_8010E538 *arg0) {
    s32 *t;
    s32 *u;
    s32 *v;
    s32 *p;
    s32 b;

    if (arg0->unk4 != NULL) {
        D_80221948(0, arg0->unk4);
    }
    if (arg0->unk8 != NULL) {
        D_80221948(0, arg0->unk8);
    }
    if (arg0->unkC != NULL) {
        D_80221948(0, arg0->unkC);
    }
    if (arg0->unk10 != NULL) {
        D_80221948(0, arg0->unk10);
    }
    if (arg0->unk14 != NULL) {
        D_80221948(0, arg0->unk14);
    }
    arg0->unk0 = 0;
    arg0->unk4 = NULL;
    arg0->unk8 = NULL;
    arg0->unkC = NULL;
    arg0->unk10 = NULL;
    arg0->unk14 = NULL;

    if (D_800EC058 / 0x100000 < 6) {
        {
            s32 *q;
            s32 m;
            m = D_800EC058 + 0x80000000;
            q = D_80221640(0, m - 0x100000, 0x54600, &D_800BE228);
            p = D_80221640(0, m - 0x200000, 0xFD200, &D_800BE234);
            func_8026AC4C(*p, 0, 0xFD200);
            func_8026AC4C(*q, 0, 0x54600);
            arg0->unk10 = q;
            arg0->unkC = p;
            b = *p;
            D_8010E52C = b;
            b += 0x54600;
            D_8010E530 = b;
            b += 0x54600;
            D_8010E534 = b;
            D_8010E550 = *q;
        }
    } else {
        arg0->unkC = D_80221640(0, D_800EC05C - 0x96000, 0x96000, &D_800BE244);
        arg0->unk10 = NULL;
        b = *arg0->unkC;
        D_8010E52C = b;
        b += 0x25800;
        D_8010E530 = b;
        b += 0x25800;
        D_8010E534 = b;
        D_8010E550 = b + 0x25800;
    }
    arg0->unk4 = D_8022154C(0, 0x40000, 0x23, &D_800BE254);
    arg0->unk8 = D_8022154C(0, 0xA000, 0x23, &D_800BE264);
    arg0->unk14 = D_8022154C(0, 0x21000, 0x23, &D_800BE26C);
    D_8010E524 = 0xA000;
    D_8010E554 = 0x21000;
    t = arg0->unk4;
    arg0->unk0 = 1;
    v = arg0->unk14;
    u = arg0->unk8;
    b = *t;
    D_8010E558 = b;
    D_8010E55C = b + 0x20000;
    D_8010E528 = *u;
    D_8010E520 = *v;
}
