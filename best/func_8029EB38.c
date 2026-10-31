typedef struct Node {
    struct Node *next;   /* 0x0 */
    s32 unk4;            /* 0x4 */
    s32 unk8;            /* 0x8 */
    s32 unkC;            /* 0xC */
    s32 unk10;           /* 0x10 */
    s32 *unk14;          /* 0x14 */
    struct Node *unk18;  /* 0x18 */
    char pad[0x48];
} Node;

typedef struct List {
    Node *head;   /* 0x0 */
    s32 unk4;     /* 0x4 */
} List;

extern List D_800B4938;
extern char D_800F7600[];

void func_8029EDD8(List *list, Node *newNode);
s32 func_8029EE28(Node *node);

void func_8029EB38(s32 arg0) {
    List *list;
    Node *node;

    list = (List *)(D_800F7600 + arg0);
    node = list->head;
    if (node == NULL) {
        return;
    }
    if (node->unk8 >= node->unk10) {
        return;
    }
    node->unk14[(node->unkC + node->unk8) % node->unk10] = list->unk4;
    node->unk8++;
    if (node->next->next != NULL) {
        func_8029EDD8(&D_800B4938, func_8029EE28(node));
    }
}
