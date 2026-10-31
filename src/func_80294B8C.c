typedef struct Node93818 {
    struct Node93818 *next;  /* 0x0 */
    s32 unk4;
    s32 unk8;
    s16 unkC;
} Node93818;

typedef struct Head93818 {
    char pad[8];
    Node93818 *head;
} Head93818;

extern s32 func_802A0728(s32);
extern void alUnlink(Node93818 *);
extern void alLink(Node93818 *, void *);
extern void func_80293940(void *, s16 *, s32);

void func_80293890(Head93818 *arg0, s16 arg1) {
    s32 save;
    Node93818 *node;
    Node93818 *next;

    save = func_802A0728(1);
    node = arg0->head;
    if (node != NULL) {
        do {
            next = node->next;
            if (node->unkC == arg1) {
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

s32 func_80293674(Head93818 *arg0, s16 *arg1) {
    s32 save;
    Node93818 *node;
    s32 ret;

    save = func_802A0728(1);
    node = arg0->head;
    if (node != NULL) {
        alUnlink(node);
        func_80293940((char *)node + 0xC, arg1, 0x10);
        alLink(node, arg0);
        ret = node->unk8;
    } else {
        *arg1 = -1;
        ret = 0;
    }
    func_802A0728(save);
    return ret;
}

/* free-list style struct: 0x64 = head, 0x68 = tail, 0x6C = free head */
void func_80294B8C(char *arg0, s32 arg1) {
    Node93818 *prev = NULL;
    Node93818 *node = *(Node93818 **)(((unsigned char *)arg0 + 0x64));

    while (node != NULL) {
        if ((s32)node + 4 == arg1) {
            if (prev != NULL) {
                prev->next = node->next;
            } else {
                *(Node93818 **)(((unsigned char *)arg0 + 0x64)) = node->next;
            }
            if (node == *(Node93818 **)(((unsigned char *)arg0 + 0x68))) {
                *(Node93818 **)(((unsigned char *)arg0 + 0x68)) = prev;
            }
            node->next = *(Node93818 **)(((unsigned char *)arg0 + 0x6C));
            *(Node93818 **)(((unsigned char *)arg0 + 0x6C)) = node;
            return;
        }
        prev = node;
        node = node->next;
    }
}

s32 func_80294BF0(char *arg0, s32 arg1, s32 arg2) {
    s32 total = 0;
    Node93818 *node = *(Node93818 **)(arg0 + 0x50);
    s32 ret = 1;
    s32 size;

    while (node != NULL) {
        size = node->unk8;
        total += size;
        if (node->unkC == 5 && *(s32 *)((char *)node + 0x10) == arg1) {
            if (arg2 >= total) {
                return 0;
            }
            if (node->next != NULL) {
                node->next->unk8 += size;
            }
            alUnlink(node);
            alLink(node, arg0 + 0x48);
            return 1;
        }
        node = node->next;
    }
    return ret;
}
