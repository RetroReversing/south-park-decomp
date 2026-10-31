typedef struct {
    char pad[0x40];
    u8 *arr;      /* 0x40 */
    s32 count;    /* 0x44 */
} T5B28;

typedef struct {
    char pad[0xd];
    u8 d;         /* 0xD */
} Arg1;

typedef struct Item {
    char pad[0x1c];
    void *p1c;    /* 0x1C */
    s16 v20;      /* 0x20 */
    f32 v24;      /* 0x24 */
    s32 v28;      /* 0x28 */
    s16 v2c;      /* 0x2C */
    u8 v2e;       /* 0x2E */
    u8 v2f;       /* 0x2F */
} Item;

extern f32 D_800AACE8;

s32 func_80295B28(T5B28 *arg0, Arg1 *arg1) {
    s16 i;
    u8 *base = arg0->arr;
    f32 f = D_800AACE8;

    for (i = 0; i < arg0->count; i++) {
        Item *item = (Item *)(i * 0x30 + base);
        if (item->p1c == 0) {
            s32 m;
            item->p1c = arg1;
            item->v20 = 5;
            item->v28 = 0;
            item->v24 = f;
            item->v2e = 0x40;
            item->v2f = 0;
            m = (arg1->d << 15) - arg1->d;
            item->v2c = (s16)(m / 127);
            return i;
        }
    }
    return -1;
}
