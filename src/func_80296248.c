typedef struct Node93818 {
    struct Node93818 *next; /* 0x0 */
    s32 unk4;
    s32 unk8;
    s16 unkC;
    char padE[2];
    s32 unk10;
} Node93818;
typedef struct Head93818 {
    char pad[8];
    Node93818 *head;
} Head93818;
extern s32 func_802A0728(s32);
extern void alUnlink(Node93818 *);
extern void alLink(Node93818 *, Head93818 *);

void func_80296248(Head93818 *arg0, s32 arg1) {
    Node93818 *node;
    Node93818 *next;
    s32 save;

    save = func_802A0728(1);
    node = arg0->head;
    if (node != NULL) {
        do {
            next = node->next;
            if (node->unk10 == arg1) {
                if (next != NULL) {
                    next->unk8 += node->unk8;
                }
                alUnlink(node);
                alLink(node, arg0);
            }
            node = next;
        } while (node != NULL);
    }
    func_802A0728(save);
}
