typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

extern Gfx *D_800D7F68;
extern s32 D_800F150C;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800BEE20;
extern s32 D_800BEE1C;
extern s32 D_800AB9FC;
extern f32 D_800A9BBC;
extern f32 D_800A9BC0;
extern f32 D_800A9BC4;
extern u8 D_800D6538[];
extern u8 D_800CE37C[];

void *D_8020B858(s32, void *, s32);
void *D_8020BDE4(s32);
void func_80268FF8(s32,  s32);
void func_80269010(f32, f32);
void func_8025F7B4(void *);
void D_802147B0(void *, f32);
void D_8021451C(void *, f32, f32, f32);
void D_802145B0(void *, f32, f32, f32);
void D_80211B2C(void *, void *);

void func_80266380(void) {
char *__repair_addr;

    u8 sp10[0x40];
    Gfx *p;
    Gfx *n;
    f32 fs0f;
    Gfx *s1;

    p = D_800D7F68;
    n = p + 2;
    D_800D7F68 = (Gfx *)s1;
    p[0].w0 = 0xE7000000;
    p[0].w1 = 0;
    p[1].w0 = 0xE3000A01;
    p[1].w1 = 0;
    D_8020B858(0x1D, p + 1, 0);
    D_8020BDE4(0x15);

    p = D_800D7F68;
    n = p + 4;
    D_800D7F68 = n;
    p[0].w0 = 0xD7000002;
    p[0].w1 = 0x80008000;
    p[1].w0 = 0xE3001001;
    p[1].w1 = 0;
    p[2].w0 = 0xE3000C00;
    p[2].w1 = 0x00080000;
    p[3].w0 = 0xE3001201;
    p[3].w1 = 0x00002000;
    D_800F150C = 1;

    func_80268FF8(0xC8,  0xC8);
    func_80269010(D_800A9BBC, D_800A9BBC);
__repair_addr = (char *)(D_800CE37C + 0x0);


    *(s32 *)(__repair_addr) = 2;
    *(s32 *)(D_800CE37C + 0x4) = 2;
    D_800F14F0 = 1;
    D_800F1508 = 1;
    func_8025F7B4(D_800D6538);
    *(s16 *)(D_800CE37C + 0x94) = 0;

    fs0f = D_800A9BC0;
    if (D_800BEE20 == 1) {
        fs0f = D_800A9BC4;
    }
    D_802147B0(sp10, -0.6106f);
    D_8021451C(sp10, 0.0f, 0.0f, fs0f);
    D_802145B0(sp10, 0.0f, (f32)(-D_800BEE1C / 2), -fs0f);
    D_80211B2C(sp10, D_800CE37C + 0x14);
    D_80211B2C(sp10, D_800CE37C + 0x54);

    p = D_800D7F68;
    n = p + 2;
    D_800D7F68 = n;
    p[0].w0 = 0xDA380003;
    p[0].w1 = (D_800AB9FC << 6) + (u32)(D_800CE37C + 0x14);
    p[1].w0 = 0xD9FFFBFF;
    p[1].w1 = 0;
    (void)s1;
}
