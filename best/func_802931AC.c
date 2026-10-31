typedef struct Node {
    struct Node *next;   /* 0x0 */
    s32 f4;              /* 0x4 */
    s32 f8;              /* 0x8 */
    s16 fC;              /* 0xC */
} Node;

typedef struct Root {
    char pad0[0x24];
    s32 m24;             /* 0x24 */
    char pad1[0x50 - 0x28];
    Node *list;          /* 0x50 */
} Root;

void func_802933AC(void *a0, Node *a1);
s32 func_8029343C(Root *a0, f32 a1);
void alUnlink(Node *a0);
void alLink(Node *a0, Node *a1);

void func_802931AC(Root *arg0, u8 *arg1) {
    Node *cur;
    Node *keep;
    Node *nxt;
    s32 div;
    s32 t;
    s32 total;

    total = 0;
    keep = NULL;
    if (arg1[8] == 0xFF && arg1[9] == 0x51) {
        div = arg0->m24;
        func_8029343C(arg0, (f32)((arg1[0xB] << 16) | (arg1[0xC] << 8) | arg1[0xD]));
        cur = arg0->list;
        if (cur != NULL) {
            do {
                nxt = cur->next;
                total += cur->f8;
                if (cur->fC == 0x15) {
                    alUnlink(cur);
                    if (keep != NULL) {
                        alLink(cur, keep);
                    } else {
                        keep = cur;
                        cur->next = NULL;
                        cur->f4 = 0;
                    }
                    if (nxt != NULL) {
                        t = cur->f8;
                        total -= cur->f8;
                        nxt->f8 += cur->f8;
                    }
                    cur->f8 = total;
                }
                cur = nxt;
            } while (cur != NULL);
        }
        cur = keep;
        if (cur != NULL) {
            do {
                nxt = cur->next;
                cur->f8 = (cur->f8 / div) * div;
                func_802933AC((char *)((unsigned char *)arg0 + 0x48), cur);
                cur = nxt;
            } while (cur != NULL);
        }
    }
}
