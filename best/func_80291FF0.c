typedef struct {
    char pad0[4];
    u32 mask;      /* 0x4 */
    char pad8[8];
    s32 step;      /* 0x10 */
    s32 flag;      /* 0x14 */
    char pad18[0xA0];
    u32 val[16];   /* 0xB8 */
} Obj;

s32 func_80291FF0(Obj *a, u32 *out) {
    s32 step;
    u32 min;
    u32 i;
    Obj *p;

    step = a->step;
    if (a->mask == 0) {
        return 0;
    }
    min = 0xFFFFFFFF;
    i = 0;
    p = a;
    do {
        if ((a->mask >> i) & 1) {
            if (a->flag != 0) {
                p->val[i] -= step;
            }
            if (p->val[i] < min) {
                min = p->val[i];
            }
        }
        i++;
    } while (i < 16);
    a->flag = 0;
    *out = min;
    return 1;
}
