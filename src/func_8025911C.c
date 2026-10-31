extern s32 func_8029DDA0(void *p, s32 a, s32 b);
extern s32 func_802A0728(s32 x);
extern s32 func_8029CC68(void);
extern s32 D_800D7CB0;
extern s32 D_800D7CB8;

void func_80258FE4(char *arg0) {
    func_8029DDA0(arg0 + 0x78, 0, 1);
    func_8029DDA0(arg0 + 0x40, 6, 1);
}

typedef struct Node {
    struct Node *next; /* 0x0 */
} Node;

typedef struct List {
    char pad[0x2E0];
    Node *head; /* 0x2E0 */
} List;

void func_80258F4C(List *arg0, Node *arg1) {
    Node *cur;
    Node *prev;
    s32 save;

    prev = NULL;
    cur = arg0->head;
    save = func_802A0728(1);
    if (cur != NULL) {
        do {
            if (cur == arg1) {
                if (prev != NULL) {
                    prev->next = cur->next;
                } else {
                    arg0->head = cur->next;
                }
                break;
            }
            prev = cur;
            cur = cur->next;
        } while (cur != NULL);
    }
    func_802A0728(save);
}

typedef struct QNode {
    struct QNode *next; /* 0x0 */
    s32 unk4;   /* 0x4 */
    s32 unk8;   /* 0x8 */
    char padC[4];
    s32 unk10;  /* 0x10 */
} QNode;

typedef struct Queue {
    char pad[0x2E0];
    QNode *head;  /* 0x2E0 */
    QNode *firstA; /* 0x2E4 */
    QNode *firstB; /* 0x2E8 */
    QNode *tailA; /* 0x2EC */
    QNode *tailB; /* 0x2F0 */
    char pad2[0xC];
    s32 unk300;  /* 0x300 */
} Queue;

void func_8025911C(Queue *arg0, QNode *arg1) {
    if (arg1->unk10 == 2) {
        if (arg0->tailA != NULL) {
            arg0->tailA->next = arg1;
        } else {
            arg0->firstA = arg1;
        }
        arg0->tailA = arg1;
        arg0->unk300 = 1;
    } else {
        if (arg0->tailB != NULL) {
            arg0->tailB->next = arg1;
        } else {
            arg0->firstB = arg1;
        }
        arg0->tailB = arg1;
    }
    arg1->unk4 = arg1->unk8 & 3;
    arg1->next = NULL;
}

typedef struct Ent {
    char pad[0xC];
    s32 unkC; /* 0xC */
} Ent;

Ent *func_80259174(Ent *arg0) {
    s32 t;

    if (arg0 == NULL) {
        goto fail;
    }
    if (arg0->unkC == D_800D7CB8) {
        goto fail;
    }
    t = arg0->unkC;
    if (t == func_8029CC68()) {
        goto fail;
    }
    if (t != D_800D7CB0) {
        goto fail;
    }
    return arg0;
fail:
    return NULL;
}
