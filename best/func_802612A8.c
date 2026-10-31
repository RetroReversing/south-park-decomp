typedef struct Node Node;
struct Node {
    char pad0[4];
    Node *next;      /* 0x4 */
    char pad1[8];
    void *unk10;     /* 0x10 */
    void *unk14;
    void *unk18;
    void *unk1C;
    char pad2[0xB0-0x20];
    void *unkB0;
};

extern f32 D_800A9AC0;
extern f32 D_800A9AC4;
extern s32 D_800AB9FC;

void D_802145E4(void *, f32, f32, f32);
void D_80213A84(void *);
void D_80214438(void *, void *);
void D_80214454(void *, void *);
void D_80211B2C(void *, void *);
void D_802131C4(f32 *, void *, void *);
f32 func_8029AA80(f32);
void func_8029A2CC(void *, void *);

void func_802612A8(u8 *arg0) {
s32 __repair_argument;

    f32 sp10_x, sp10_y, sp10_z;
    u32 sp20[8];
    Node *node;
    Node *child;
    s32 flag;
    f32 v;
    void *v0;
    f32 f;
    Node *n;

    node = *(Node **)(arg0 + 0x40);
    flag = 0;
    *(f32 *)(arg0 + 0x4C) = 0.0f;
    if (node != NULL) {
        do {
            child = node->unkB0;
            if (child != NULL) {
                if (child == (Node *)-1) {
                    s32 i = D_800AB9FC;
                    u8 *dst = (u8 *)node + (i << 6);
                    u8 *src = (u8 *)node + ((i ^ 1) << 6);
                    u8 *end = src + 0x68;
                    do {
                        *(u32 *)(dst + 0x28) = *(u32 *)(src + 0x28);
                        *(u32 *)(dst + 0x2C) = *(u32 *)(src + 0x2C);
                        *(u32 *)(dst + 0x30) = *(u32 *)(src + 0x30);
                        *(u32 *)(dst + 0x34) = *(u32 *)(src + 0x34);
                        src += 0x10;
                        dst += 0x10;
                    } while (src != end);
                    node->unkB0 = NULL;
                } else {
                    func_8029A2CC(sp20, (u8 *)child + ((D_800AB9FC << 6) + 0x48));
                    v0 = *(void **)((u8 *)child + 0xF8);
                    __repair_argument = *(s32 *)((u8 *)v0 + 0x10) != 0;
v = D_800A9AC0;
                    if (__repair_argument) {
                        v = D_800A9AC4;
                    }
                    D_802145E4(sp20, v, v, v);
                    D_80213A84(sp20);
                    D_80214438(sp20, (u8 *)node + 0x10);
                    if (*(s32 *)(arg0 + 0x3C) & 4) {
                        D_80214454(sp20, (u8 *)node + 0x1C);
                    } else {
                        D_80211B2C(sp20, (u8 *)node + ((D_800AB9FC << 6) + 0x28));
                    }
                }
                flag = 1;
                *(f32 *)((u8 *)node + 8) = *(f32 *)(*(u8 **)(arg0 + 8) + 8);
            }
            if (node->next != NULL) {
                void *c = node->next;
                D_802131C4(&sp10_x, (u8 *)node + 0x10, (u8 *)c + 0x10);
                f = func_8029AA80(sp10_x * sp10_x + sp10_y * sp10_y + sp10_z * sp10_z);
                *(f32 *)((u8 *)c + 0xAC) = f;
                *(f32 *)(arg0 + 0x4C) = *(f32 *)(arg0 + 0x4C) + f;
            }
            node = node->next;
        } while (node != NULL);
    }
    if (flag != 0) {
        u8 *v1 = *(u8 **)(arg0 + 8);
        *(f32 *)(arg0 + 0x24) = *(f32 *)v1;
        if (*(u8 *)(v1 + 0x1C) == 2) {
            f32 zero = 0.0f;
            if (zero < *(f32 *)(arg0 + 0x4C)) {
                n = *(Node **)(arg0 + 0x40);
                if (n != NULL) {
                    do {
                        f32 g;
                        *(f32 *)((u8 *)n + 0xA8) = zero / *(f32 *)(arg0 + 0x4C);
                        g = *(f32 *)((u8 *)n + 0xAC);
                        n = n->next;
                        zero += g;
                    } while (n != NULL);
                }
            }
        }
    }
}
