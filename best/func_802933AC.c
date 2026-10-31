typedef struct Item {
    char pad0[8];
    s32 val;               /* 0x8 */
} Item;

typedef struct {
    char pad0[8];
    Item *list;   /* 0x8 */
} Arg0_t;

typedef struct {
    char pad0[8];
    s32 val;      /* 0x8 */
} Arg1_t;

void alLink(Arg1_t *);
s32 func_802A0728(s32);

void func_802933AC(Arg0_t *arg0, Arg1_t *arg1) {
    Item **link;
    Item *item;
    s32 state;
    s32 a;
    s32 b;
    s32 t;

    state = func_802A0728(1);
    link = &arg0->list;
    if (link != NULL) {
        do {
            item = *link;
            if (item == NULL) {
                alLink(arg1);
                break;
            }
            a = arg1->val;
            b = item->val;
            if (a < b) {
                item->val = t = b - a;
                alLink(arg1);
                break;
            }
            arg1->val = a - b;
            link = (Item **)item;
        } while (*link != NULL);
    }
    func_802A0728(state);
}
