typedef struct Node {
    char pad0[0x124];
    u16 unk124;   /* 0x124 */
    char pad1[0x90];
    s32 unk1B8;   /* 0x1B8 */
    char pad2[0xC];
    s32 unk1C8;   /* 0x1C8 */
    s32 unk1CC;   /* 0x1CC */
} Node;

extern f32 D_800A96B8;
extern f32 D_800A96BC;
extern s32 D_8029D708();
extern void func_80255998(s32, Node *);
extern u64 func_802A6AF0(u32, u32, s32, s32);
extern s32 func_802A7570(u64, u32, s32, s32);
extern f32 func_802A75B8(u64, u32, s32);

void func_80257E44(s32 arg0, Node **arg1, s32 arg2) {
int __repair_literal;

    s32 sp10;
    s32 sp14;
    f32 f;
    f32 fs;
    f32 fs0;
    u32 d;
    u32 diff;
    u64 r;
    u64 r2;
    Node **p;
    Node *n;
    s32 i;

    sp10 = D_8029D708();
    sp14 = 0;
    i = 0;
__repair_literal = 0;

    if (arg2 > __repair_literal) {
        p = arg1;
        fs0 = D_800A96B8;
        fs = D_800A96BC;
        do {
            n = *p;
            if (n->unk1B8 != 0) {
                goto skip;
            }
            d = sp14 - n->unk1CC;
            diff = sp10 - n->unk1C8 - (sp14 < (u32)n->unk1CC);
            r = func_802A6AF0((diff << 6) | (d >> 26), d << 6, 0, 0xBB8);
            if (func_802A7570(r, r, 0, 0) > 0) {
                f = func_802A75B8(r, r, 0);
                goto cmp;
            }
            r2 = ((u64)((s32)r & 0) | ((u64)r >> 1)) | 0;
            r2 = 0;
            f = 2.0f * func_802A75B8((s32)r >> 1, (u32)r >> 1, 0);
cmp:
            if (!(f * fs0 <= fs)) {
                n->unk124 = 1;
                goto skip;
            }
            if (n->unk1B8 != 0) {
                n->unk124 = 1;
                goto skip;
            }
            func_80255998(arg0, n);
skip:
            p++;
            i++;
        } while (i < arg2);
    }
}
