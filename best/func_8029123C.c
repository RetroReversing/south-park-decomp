typedef struct Entry {
    struct Entry *next;   /* 0x00 */
    u16 key;              /* 0x04 */
    u16 count;            /* 0x06 */
    u8 pad[8];            /* 0x08 */
    u8 *items;            /* 0x10 */
} Entry;

extern Entry D_800F5FF0;
extern u8 D_800F5C38[];
extern u8 D_800F5C40[];
extern void func_80290600(void *);
extern void func_8029DDA0(s32, void *, s32);

void func_8029123C(u8 *arg0)
{
char *__repair_addr;

    Entry *node;
    Entry *prev;
    u32 key;
    s32 i;
    u8 *item;

    node = &D_800F5FF0;
    prev = NULL;
__repair_addr = (char *)(arg0 + 4);

    key = *(u32 *)(__repair_addr) >> 12;
    while (node != NULL && node->key != key) {
        prev = node;
        node = node->next;
    }
    prev->next = node->next;
    item = node->items;
    for (i = 0; i < node->count; i++, item++) {
        if (*item != 0xFF) {
            func_80290600(D_800F5C38 + (*item << 4));
            *(u16 *)(D_800F5C40 + (*item << 4)) = 0xFFFF;
        }
    }
    func_8029DDA0(*(s32 *)(arg0 + 8), node, 1);
}
