typedef struct A93970 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} A93970;

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
extern void alLink(Node93818 *, Head93818 *);
extern void func_80293940(void *, s16 *, s32);

s32 func_80293970(A93970 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 size = ((arg2 * arg3) + 0xF) & ~0xF;
    s32 ret = 0;
    if ((u32)(arg0->unk0 + arg0->unk8) >= (u32)(arg0->unk4 + size)) {
        ret = arg0->unk4;
        arg0->unk4 += size;
    }
    return ret;
}

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

void alEvtqFlush(Head93818 *arg0) {
    s32 save;
    Node93818 *node;
    Node93818 *next;

    save = func_802A0728(1);
    node = arg0->head;
    if (node != NULL) {
        do {
            next = node->next;
            alUnlink(node);
            alLink(node, arg0);
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
