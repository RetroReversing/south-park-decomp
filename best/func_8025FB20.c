extern f32 D_800A9A28;
extern void D_802131C4(f32 *out, void *arg1, void *arg2);

typedef struct Node Node;
struct Node {
    void *field0;       /* 0x0 */
    Node *next;         /* 0x4 */
    char pad1[0x12C];
    char unk134[0x10];  /* 0x134 */
};

void *func_8025FB20(Node *arg0, void *arg1) {
    f32 vec[3];
    f32 ssq;
    f32 d;
    f32 lim;
    s32 iv;
    u32 best;
    Node *cur;
    Node *result;

    result = NULL;
    cur = arg0->next;
    best = 0x7FFFFFFF;
    if (cur != NULL) {
        lim = D_800A9A28;
        do {
            D_802131C4(vec, arg1, cur->unk134);
            ssq = vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2];
            if (lim > ssq) {
                iv = (s32) ssq;
            } else {
                iv = (s32) (ssq - lim) | (s32) 0x80000000;
            }
            if (result == NULL) {
                result = cur;
                best = (u32) iv;
            } else if ((u32) iv < best) {
                result = cur;
                best = (u32) iv;
            }
            cur = cur->next;
        } while (cur != NULL);
    }
    if (result == NULL) {
        return (void *) ((char *) arg0 + 0x40);
    }
    return result;
}
