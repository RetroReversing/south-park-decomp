extern s16 func_80203A94(void *a0, s32 a1);
extern s32 func_80204858(void *a0, s32 a1);
extern void D_8022AD70(void *a0, void *a1);
extern void D_8020FC74(void);
extern void D_8022A980(void *a0);
extern void D_8020FCC4(s32 a0, s32 a1);
extern void func_8026AC4C(void *a0, s32 a1, s32 a2);
extern u8 D_800AB9F7;
extern s32 D_800B1338[];
extern f32 D_800BC390;
extern f32 D_800BEE1C;
extern s32 D_800BF014;
extern u8 D_800CCA80[];
extern void *D_800D7F68;
extern u8 D_800F13B0[];

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
} Src;

typedef struct {
    char pad0[8];
    s32 flags;      /* 0x8 */
    char pad1[8];
    Src *src;       /* 0x14 */
    char *unk20;    /* 0x20 */
} Arg0;

void func_80401EC0(Arg0 *arg0) {
    char *s0;
    Src *src;
    s32 sp10[3];
    s32 sp20[3];
    s32 v0, v1, i;
    u8 *p;

    func_8026AC4C(sp10, 0, 0xC);
    s0 = arg0->unk20;
    if (s0 != NULL) {
        src = arg0->src;
        if (!(arg0->flags & 0x100000)) {
            p = D_800CCA80;
            v0 = func_80203A94(p, src->a);
            if (v0 != -1) {
                sp20[0] = src->b;
                sp20[1] = src->c;
                sp20[2] = src->d;
                *(f32 *)((u8 *)sp20 + 4) = D_800BEE1C - *(f32 *)((u8 *)sp20 + 4);
                *(s32 *)(s0 + 0x18) = 0;
                *(s32 *)(s0 + 0x1C) = 0;
                *(s32 *)(s0 + 0x20) = 0;
                *(s32 *)(s0 + 0x24) = 0;
                *(s32 *)(s0 + 0x28) = 0;
                *(s32 *)(s0 + 0x2C) = 0;
                *(s32 *)(s0 + 0x30) = 0;
                i = func_80204858(p, v0);
                *(s32 *)(s0 + 0x34) = i;
                *(u8 **)(s0 + 0x14) = D_800F13B0;
                *(s16 *)(s0 + 2) = v0;
                *(s32 *)(s0 + 4) = sp20[0];
                *(s32 *)(s0 + 8) = sp20[1];
                *(s32 *)(s0 + 0xC) = sp20[2];
                *(s32 *)(s0 + 0x18) = sp10[0];
                *(s32 *)(s0 + 0x1C) = sp10[1];
                *(s32 *)(s0 + 0x20) = sp10[2];
                *(s32 *)(s0 + 0x144) = 0;
                *(s32 *)(s0 + 0x148) = 0;
                *(s32 *)(s0 + 0x138) = 0;
                *(s32 *)(s0 + 0x140) = 0;
                *(s32 *)(s0 + 0x10) = 0;
                *(u16 *)(s0 + 0x16C) = 2;
                i = D_800AB9F7 - 1;
                *(s32 *)(s0 + 0x178) = D_800B1338[0];
                *(s32 *)(s0 + 0x17C) = D_800B1338[1];
                *(s32 *)(s0 + 0x180) = D_800B1338[2];
                *(s32 *)(s0 + 0x184) = D_800B1338[3];
                *(s32 *)(s0 + 0x188) = D_800B1338[4];
                *(s32 *)(s0 + 0x18C) = D_800B1338[5];
                *(s32 *)(s0 + 0x190) = *(s32 *)(s0 + 0x178);
                *(s32 *)(s0 + 0x194) = *(s32 *)(s0 + 0x17C);
                *(s32 *)(s0 + 0x198) = *(s32 *)(s0 + 0x180);
                *(s32 *)(s0 + 0x19C) = *(s32 *)(s0 + 0x184);
                *(s32 *)(s0 + 0x1A0) = *(s32 *)(s0 + 0x188);
                *(s32 *)(s0 + 0x1A4) = *(s32 *)(s0 + 0x18C);
                *(u8 *)(s0 + 0x1AD) = i;
                *(u8 *)(s0 + 0x1AC) = i;
                *(f32 *)(s0 + 0x164) = (f32)src->e;
                *(f32 *)(s0 + 0x13C) = D_800BC390;
                arg0->flags |= 0x100000;
            }
        }
        if (D_800BF014 != 6) {
            D_800BF014 = 6;
            v1 = (s32)D_800D7F68;
            *(u32 *)(v1 + 0) = 0xE3000A01;
            *(u32 *)(v1 + 4) = 0x100000;
            *(u32 *)(v1 + 8) = 0xE3000C00;
            *(u32 *)(v1 + 0xC) = 0x80000;
            *(u32 *)(v1 + 0x10) = 0xE3001201;
            *(u32 *)(v1 + 0x14) = 0x2000;
            D_800D7F68 = (void *)(v1 + 0x18);
        }
        D_8022AD70(s0, arg0);
        D_8020FC74();
        D_8022A980(s0);
        D_8020FCC4(1, 1);
    }
}
