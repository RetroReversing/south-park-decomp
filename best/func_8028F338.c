extern void *D_800AAAA0;
extern f32 D_800AAAB4;
extern f32 D_800AAAB8;
extern f32 D_800AAABC;

void *D_8022154C(s32, s32, s32, void *);
void D_80221948(s32, void *);

void func_8028F338(s32 n, f32 *dr, f32 *dl, s32 *band) {
int __repair_literal;

    f32 *a;
    f32 *b;
    f32 *c;
    void *p;
    void **h;
    s32 sing;
    s32 i;
    f32 t;

    sing = 0;
    if (n == 1) {
        *band = 0;
        return;
    }
    a = NULL;
__repair_literal = 4;

    p = D_8022154C(0, n * __repair_literal + 0x10, 0x13, &D_800AAAA0);
    if (p != NULL) {
        h = *(void ***)p;
        a = (f32 *)((u8 *)h + 0x10);
        *h = p;
    }
    b = NULL;
    p = D_8022154C(0, n * 4 + 0x10, 0x13, &D_800AAAA0);
    if (p != NULL) {
        h = *(void ***)p;
        b = (f32 *)((u8 *)h + 0x10);
        *h = p;
    }
    c = NULL;
    p = D_8022154C(0, n * 4 + 0x10, 0x13, &D_800AAAA0);
    if (p != NULL) {
        h = *(void ***)p;
        c = (f32 *)((u8 *)h + 0x10);
        *h = p;
    }
    for (i = 1; i < n - 1; i++) {
        t = 2.0f * (dr[i + 1] - dr[i - 1]);
        a[i] = t;
        if (t == 0.0f) {
            a[i] = D_800AAAB4;
            sing = 1;
        }
    }
    for (i = 0; i < n - 1; i++) {
        t = dr[i + 1] - dr[i];
        c[i] = t;
        if (t == 0.0f) {
            c[i] = D_800AAAB8;
            sing = 1;
        }
    }
    for (i = 1; i < n - 1; i++) {
        b[i] = ((dr[i + 1] - dr[i]) / c[i] - (dr[i] - dr[i - 1]) / c[i - 1]) * D_800AAABC;
    }
    for (i = 1; i < n - 2; i++) {
        b[i + 1] = b[i + 1] - b[i] * c[i] / a[i];
        a[i + 1] = a[i + 1] - c[i] * c[i] / a[i];
    }
    for (i = 0; i < n; i++) {
        band[i] = 0;
    }
    if (!sing) {
        for (i = n - 2; i > 0; i--) {
            band[i] = (b[i] - c[i] * band[i + 1]) / a[i];
        }
    }
    if (a != NULL) {
        D_80221948(0, *(void **)((u8 *)a - 0x10));
    }
    if (b != NULL) {
        D_80221948(0, *(void **)((u8 *)b - 0x10));
    }
    if (c != NULL) {
        D_80221948(0, *(void **)((u8 *)c - 0x10));
    }
}
