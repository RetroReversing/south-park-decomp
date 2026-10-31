typedef struct Node {
    struct Node *next;   /* 0x0 */
    void *unk4;          /* 0x4 */
    s32 count;           /* 0x8 */
    char pad[4];         /* 0xC .. */
} Node;

typedef struct Rec { char pad[0x28]; s32 f28; char pad2[4]; } Rec;
typedef struct G { char pad[0x3C]; s32 idx; Rec *recs; } G;

extern s32 func_802A0728(s32);
extern void alUnlink(void *);
extern void alLink(void *, void *, void *);
extern void func_80293940(void *, void *, s32);

void func_8029370C(Node **arg0, void *arg1, s32 arg2)
{
    Node *n = *arg0;
    s32 amt = arg2;
    s32 flag = 0;
    s32 save = func_802A0728(1);
    Node **link;
    Node *cur;

    if (n == NULL) {
        func_802A0728(save);
        return;
    }
    alUnlink(n);
    func_80293940(arg1, (char *)n + 0xC, 0x10);
    if (amt == 0x7FFFFFFF) {
        flag = -1;
    }
    link = arg0 + 2;
    if (link != NULL) {
        for (;;) {
            cur = *link;
            if (cur == NULL) {
                if (flag != 0) {
                    n->count = 0;
                } else {
                    n->count = amt;
                }
                alLink(n, link, cur);
                break;
            }
            if (amt < cur->count) {
                n->count = amt;
                cur->count -= amt;
                alLink(n, link, cur);
                break;
            }
            amt -= cur->count;
            link = &cur->next;
        }
    }
    func_802A0728(save);
}

void alSndpPlay(G *arg0) {
    Rec *list = arg0->recs;
    Rec *rec = &list[arg0->idx];
    if (rec->f28 == 0) {
        s16 v[2];
        s32 t;
        v[0] = 0;
        t = arg0->idx * 0x30;
        t = t + (s32)list;
        func_8029370C((u8 *)arg0 + 0x14, v, t);
    }
}
