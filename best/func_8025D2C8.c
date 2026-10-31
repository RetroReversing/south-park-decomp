typedef struct {
    void *unk0;
    s32 unk4;
    s32 unk8;
    char pad0C[0x14];
    void *unk20;
    char pad24[0x10];
    s32 unk34;
    s32 unk38;
    char pad3C[0xFB4];
    void *unkFF0;
    s32 unkFF4;
    s32 unkFF8;
    char padFFC[4];
    char unk1000[0xC];
} State;

typedef struct {
    char pad0[8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    f32 unk14;
    char pad18[0x3C];
} Thing;

extern void D_8021E6F8(void *, s32, s32);
extern void D_8021E76C(void *, void *);
extern void *D_8022154C(s32, s32, s32, void *);
extern void D_80221948(s32, void *);
extern void D_80221A18(s32);
extern void func_8026AC4C(s32, s32, s32);
extern void func_8026BDB4(void *);
extern f32 D_800A98D8;
extern char D_800A98C0[];
extern char D_800A98C8[];

void func_8025D2C8(State *arg0, s32 arg1) {
char *__repair_addr;

    s32 i;
    s32 j;
    s32 size;
    Thing *temp;
    f32 f = D_800A98D8;

    arg0->unk34 = 0;
    func_8026BDB4((u8 *)arg0 + 0x40);
    arg0->unk38 = 0;
    D_8021E6F8((u8 *)arg0 + 0x12B0, 0, 4);
    arg0->unk38 = 2;
    D_8021E6F8((u8 *)arg0 + 0x12C4, 0, 4);

    for (i = 0; i < 8; i++) {
        temp = (Thing *)((u8 *)arg0 + i * 0x54 + 0x1010);
        temp->unk8 = 0;
        temp->unkC = 0;
        temp->unk10 = 0;
        temp->unk14 = f;
__repair_addr = (char *)((u8 *)temp + 0x1C);

        *(s32 *)(__repair_addr) = 0;
        *(s32 *)((u8 *)temp + 0x20) = 0;
        *(s32 *)((u8 *)temp + 0x24) = 0;
        *(s32 *)((u8 *)temp + 0x28) = 0;
        *(s32 *)((u8 *)temp + 0x30) = 0;
        *(s32 *)((u8 *)temp + 0x34) = 0;
        *(s32 *)((u8 *)temp + 0x38) = 0;
        *(s32 *)((u8 *)temp + 0x3C) = 0;
        *(s32 *)((u8 *)temp + 0x44) = 0;
        *(s32 *)((u8 *)temp + 0x48) = 0;
        *(s32 *)((u8 *)temp + 0x4C) = 0;
        *(s32 *)((u8 *)temp + 0x50) = 0;
        D_8021E76C((u8 *)arg0 + 0x12B0, (u8 *)arg0 + i * 0x54 + 0x1010);
    }

    D_80221A18(0);
    if (arg0->unk0 != NULL) {
        void *p = arg0->unk20;
        while (p != NULL) {
            p = *(void **)((u8 *)p + 4);
        }
        D_80221948(0, arg0->unk0);
        arg0->unk0 = NULL;
        arg0->unk4 = 0;
        arg0->unk8 = 0;
    }
    D_80221A18(0);
    if (arg0->unkFF0 != NULL) {
        D_80221948(0, arg0->unkFF0);
        arg0->unkFF0 = NULL;
        arg0->unkFF4 = 0;
        arg0->unkFF8 = 0;
    }
    D_8021E6F8((u8 *)arg0 + 0x0C, 0, 4);
    D_8021E6F8((u8 *)arg0 + 0x20, 0, 4);
    D_8021E6F8((u8 *)arg0 + 0xFFC, 0, 4);

    if (arg1 != 0) {
        size = arg1 * 0xFB0;
        arg0->unk0 = D_8022154C(0, size, 0x23, D_800A98C0);
        arg0->unk4 = *(s32 *)arg0->unk0;
        arg0->unk8 = arg1;
        func_8026AC4C(arg0->unk4, 0, size);
        for (j = 0; j < arg0->unk8; j++) {
            D_8021E76C((u8 *)arg0 + 0x0C, (u8 *)arg0->unk4 + j * 0xFB0);
        }
    }

    arg0->unkFF0 = D_8022154C(0, 0x240, 0x23, D_800A98C8);
    arg0->unkFF4 = *(s32 *)arg0->unkFF0;
    arg0->unkFF8 = 0x10;
    func_8026AC4C(arg0->unkFF4, 0, 0x240);
    for (j = 0; j < arg0->unkFF8; j++) {
        D_8021E76C((u8 *)arg0 + 0xFFC, (u8 *)arg0->unkFF4 + j * 0x24);
    }
}
