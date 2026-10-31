extern f32 D_800A9740;
extern f32 D_800A9744;
extern f32 D_800A9748;
extern f32 D_800A974C;
extern f32 D_800ABA00;
f32 D_802158FC(f32, f32);

typedef struct {
    s32 mode;   /* 0x0 */
    f32 a;      /* 0x4 */
    f32 b;      /* 0x8 */
    f32 c;      /* 0xC */
    f32 d;      /* 0x10 */
} S;

s32 func_8025AA28(S *p) {
    f32 a;
    f32 b;
    f32 c;

    a = p->a;
    b = p->b;
    if (b < a) {
        p->b = a;
    }
    if (p->c == 0.0f) {
        p->d = D_800A9740;
    }
    if (p->c < p->b + p->b) {
        p->c = p->b + p->b;
    }
    p->a = D_802158FC(p->a, D_800ABA00 * D_800A9744);
    p->b = D_802158FC(p->b, D_800ABA00 * D_800A9744);
    if (p->mode != 0) {
        if (p->mode == 1) {
            if (p->c > 0.0f) {
                p->d = p->d + (p->c + p->c) * (D_800ABA00 * D_800A9744);
                p->c = D_802158FC(p->c, D_800A9748);
            }
        }
    } else {
        if (p->c > 0.0f) {
            p->c = D_802158FC(p->c, D_800A974C);
        }
    }
    a = p->c;
    return a != 0.0f;
}
