extern f32 D_800A98FC;
extern f32 D_800A9900;
extern f32 D_800A9904;
extern f32 D_800A9908;
extern f32 D_800A990C;
extern f32 D_800A9910;
extern s32 D_800AB9FC;
extern f32 D_800ABA00;
extern u32 *D_800D7F68;
extern s32 D_800BEE18;
extern s32 D_800BEE1C;
extern f32 D_800F14E8;
extern s32 D_800D7910;
extern s32 D_8010E550;
extern void *D_800CCA78;
extern u8 D_800D77E8;
extern s32 D_800D78F0;
extern s32 D_800F11C0[];
extern s32 D_800CC760[];
extern u32 D_800B1368[];
extern u32 D_800B1398[];

typedef struct Node Node;
struct Node {
    char pad0[4];
    Node *next;
    char pad8[0x4FC];
    s8 unk510;
    s8 unk511;
    char pad512[2];
    f32 unk514;
    char pad518[0x540 - 0x518];
    f32 unk540;
    f32 unk544;
    f32 unk548;
    f32 unk54C;
    char pad550[0x568 - 0x550];
    u8 unk568;
};

typedef struct Ent Ent;
struct Ent {
    s32 unk0;
    char pad4[0x1C];
    Node *unk20;
    char pad24[0xC];
    s32 unk30;
};

void func_8025DE64(Ent *arg0, s32 arg1);
void func_8025DE64(Ent *arg0, s32 arg1) {
char *__repair_addr;

    Node *s0;
    Node *s1;
    s32 s2;
    u8 col[4];
    u16 w1, w2;
    u32 *g;
    s32 idx;
    f32 f;

    s1 = (Node *)((u8 *)arg0 + 0x40);
    s1->unk510 = 0;
    s1->unk511 = 0;
    s1->pad512[0] = 0;
    if (arg0->unk0 != 0) {
        func_80221CCC(0, arg0->unk0);
    }
    s0 = arg0->unk20;
    s2 = s0 == 0;
    while (s0 != 0) {
        if (s0->unk510 == 0) {
            s2 = 1;
        }
        s0 = s0->next;
    }
    if (s1->unk510 == 0) {
        s2 = 1;
    }
    func_80215F50();
    if (D_800D7910 != 0 || arg0->unk30 == 3) {
        D_800F14E8 = D_800A98FC;
    }
    if (D_800F14E8 != 0.0f) {
        D_800F14E8 = D_800F14E8 - D_800ABA00;
    }
    if (D_800F14E8 < 0.0f) {
        D_800F14E8 = 0.0f;
    }
    g = D_800D7F68;
    idx = D_800AB9FC * 0x10;
    w1 = D_800BEE18 * 2;
    w2 = D_800BEE1C * 2;
    *(u16 *)((u8 *)s1 + 0x2B8 + idx) = w1;
__repair_addr = (char *)((u8 *)s1 + 0x2C0 + idx);

    *(u16 *)(__repair_addr) = w1;
    *(u16 *)((u8 *)s1 + 0x2BA + idx) = w2;
    *(u16 *)((u8 *)s1 + 0x2C2 + idx) = w2;
    g[0] = 0xDE000000;
    g[1] = (u32)D_800B1368;
    g[2] = 0xDE000000;
    g[3] = 0x800B1398;
    g[4] = 0xE7000000;
    g[5] = 0;
    g[6] = 0xE3000A01;
    g[7] = 0x300000;
    g[8] = 0xDC080008;
    g[9] = (u32)((u8 *)s1 + idx + 0x2B8);
    g[10] = 0xED000000;
    g[11] = (((u32)((s32)((f32)(D_800BEE18 - 1) * D_800A9900) & 0xFFF) << 12) |
             ((u32)((s32)((f32)(D_800BEE1C - 1) * D_800A9900) & 0xFFF)));
    g[12] = 0xFCFFFFFF;
    g[13] = 0xFFFE793C;
    g[14] = 0xE200001C;
    g[15] = 0;
    g[16] = 0xFF100000 | ((u32)(D_800BEE18 - 1) & 0xFFF);
    g[17] = 0xF7000000;
    g[18] = (u32)D_8010E550;
    g[19] = 0xFFFCFFFC;
    g[20] = 0xF6000000 | (((u32)D_800BEE18 & 0x3FF) << 14) | (((u32)D_800BEE1C & 0x3FF) << 2);
    g[21] = 0;
    if (D_800F14E8 != 0.0f || s2 != 0) {
        g[22] = g[16];
        g[23] = 0xF7000000;
        g[24] = 0x10001;
        g[25] = g[20];
        g[26] = 0xF7000000;
        g[27] = *(s32 *)((u8 *)D_800CCA78 + 0xF0);
        g[28] = 0;
    }
    D_800D7F68 = g + 29;
    func_8020FC58(g, g + 29);

    if (s1->unk510 != 0) {
        s0 = arg0->unk20;
        while (s0 != 0) {
            func_8025C814(s0);
            if (s0->unk510 != 0) {
                func_8025CFE0(s0, arg1);
                if (D_800D78F0 == 0x11) {
                    func_8040D064();
                }
                func_80259140(s0);
            }
            if (s0->unk511 != 0) {
                col[0] = 0;
                col[1] = 0;
                col[2] = 0;
                f = s0->unk514;
                if (f < 0.0f) {
                    col[3] = 0;
                } else if (D_800A9904 < f) {
                    col[3] = 0xFF;
                } else {
                    col[3] = (s32)(f * D_800A9908);
                }
                func_802096E0(D_800CC760, col, (s32)s0->unk548, (s32)s0->unk54C,
                              (s32)(s0->unk548 + s0->unk540), (s32)(s0->unk54C + s0->unk544));
            }
            func_80403F30(&s0->unk568);
            func_8025E40C(s0);
            s0 = s0->next;
        }
    }
    func_8025C814(s1);
    func_8025EFB8(arg0, s1);
    func_8023D720(D_800F11C0);
    if (D_800D77E8 != 0) {
        func_802396A0(&D_800D77E8 - 0x14B0, s1);
    }
    if (s1->unk511 != 0) {
        col[0] = 0;
        col[1] = 0;
        col[2] = 0;
        f = s1->unk514;
        if (f < 0.0f) {
            col[3] = 0;
        } else if (D_800A990C < f) {
            col[3] = 0xFF;
        } else {
            col[3] = (s32)(f * D_800A9910);
        }
        func_802096E0(D_800CC760, col, (s32)s1->unk548, (s32)s1->unk54C,
                      (s32)(s1->unk548 + s1->unk540), (s32)(s1->unk54C + s1->unk544));
    }
    func_80403F30(&s1->unk568);
}
