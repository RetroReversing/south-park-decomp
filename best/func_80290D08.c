typedef struct Queue {
    void *head;   /* 0x0 */
    void *tail;   /* 0x4 */
    s32 count;    /* 0x8 */
    s32 index;    /* 0xC */
    s32 size;     /* 0x10 */
    void **items; /* 0x14 */
} Queue;

extern Queue D_800F533C;
extern s16 D_800AAAC0;
extern void *D_8022154C();
void func_8029D588();
void func_8029DDA0();
void func_8029DC78();

s32 func_80290D08(s32 arg0, s32 arg1, s32 arg2) {
    Queue q;
    s32 val;
    s32 pad;
    s16 three;
    void **p;
    s32 *n;
    s32 pages;

    pages = (arg0 + 0xFFF) >> 12;
    func_8029D588(&q, &pad, 1);
    q.size = (pages + 1) & ~1;
    three = 3;
    q.items = (void **)(pages * 4 + q.size + 0x18);
    p = D_8022154C(0, pages * 4 + q.size + 0x18, three, &D_800AAAC0);
    n = *p;
    n[3] = p;
    n[2] = arg2;
    func_8029DDA0(&D_800F533C, &q, 1);
    func_8029DC78(&D_800F533C, &val, 1);
    return val;
}
