typedef struct Node81FC4 {
    char pad0[4];
    struct Node81FC4 *next;  /* 0x4 */
    char pad8[0x18];
    s32 unk20;               /* 0x20 .. 0x2C region */
    char pad24[8];
    s32 unk2C;
    char pad30[8];
    s32 *unk38;              /* 0x38 */
} Node81FC4;

typedef struct Head81FC4 {
    char pad0[0x14];
    Node81FC4 *head;         /* 0x14 */
} Head81FC4;

extern s32 func_802A0500(void);
extern void func_802A0520(s32);
extern s32 func_80282108(void *);
extern void D_8021E930(void *, Node81FC4 *);
extern void D_8021E76C(void *, Node81FC4 *);

void func_80281FC4(Head81FC4 *arg0) {
    Node81FC4 *node;
    Node81FC4 *next;
    s32 save;
    s32 flag;

    save = func_802A0500();
    node = arg0->head;
    if (node != NULL) {
        flag = 0;
        do {
            next = node->next;
            if (func_80282108(&node->unk20) == 0) {
                if (func_80282108(&node->unk2C) != 0) {
                    flag = 1;
                }
            } else {
                flag = 1;
            }
            if (flag != 0) {
                if (node->unk38 != NULL) {
                    *node->unk38 = 0;
                }
                D_8021E930(&arg0->head, node);
                D_8021E76C(arg0, node);
            }
            node = next;
            flag = 0;
        } while (node != NULL);
    }
    func_802A0520(save);
}
