typedef struct Node2 {
    char pad0[4];
    struct Node2 *next;   /* 0x4 */
    char pad8[0x14];
    s32 key1;             /* 0x1C */
    s32 key2;             /* 0x20 */
} Node2;

typedef struct List2 {
    char pad0[0x7520];
    Node2 *head;          /* 0x7520 */
} List2;

Node2 *func_80262B38(List2 *arg0, s32 arg1, s32 arg2) {
    Node2 *n;

    for (n = arg0->head; n != NULL; n = n->next) {
        if (n->key1 == arg1) {
            if (n->key2 == arg2) {
                return n;
            }
        }
    }
    return NULL;
}

typedef struct DList2 {
    struct DNode2 *head;  /* 0x0 */
    struct DNode2 *tail;  /* 0x4 */
    s32 count;            /* 0x8 */
    s32 unkC;             /* 0xC */
    s32 unk10;            /* 0x10 */
    s32 unk14;            /* 0x14 */
} DList2;

typedef struct DNode2 {
    struct DNode2 *prev;  /* 0x0 */
    struct DNode2 *next;  /* 0x4 */
} DNode2;

void func_80262BE0(DList2 *list, DNode2 *node) {
    if (list->count == 0) {
        list->head = node;
        list->tail = node;
        node->prev = NULL;
        node->next = NULL;
    } else {
        node->next = list->head;
        node->prev = NULL;
        list->head->prev = node;
        list->head = node;
    }
    list->count = list->count + 1;
}

void func_80262C28(DList2 *list, DNode2 *node) {
    if (list->count == 0) {
        list->head = node;
        list->tail = node;
        node->prev = NULL;
        node->next = NULL;
    } else {
        node->prev = list->tail;
        node->next = NULL;
        list->tail->next = node;
        list->tail = node;
    }
    list->count = list->count + 1;
}

void func_80262CD0(DList2 *list, DNode2 *node, s32 stride, s32 n) {
    s32 i;

    list->head = NULL;
    list->tail = NULL;
    list->count = 0;
    list->unkC = 0;
    list->unk10 = 0;
    list->unk14 = 0;
    for (i = n - 1; i != -1; i--) {
        if (list->count == 0) {
            list->head = node;
            list->tail = node;
            node->prev = NULL;
            node->next = NULL;
        } else {
            node->prev = list->tail;
            node->next = NULL;
            list->tail->next = node;
            list->tail = node;
        }
        list->count = list->count + 1;
        node = (DNode2 *)((s8 *)node + stride);
    }
}
