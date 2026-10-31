typedef struct { f32 f[4]; } Vec4f;
extern void func_80280390(s32 *a, s32 *b);
extern f32 func_8028146C(s32 *a, f32 x, s32 y, s32 z);

void func_80281560(s32 *p, f32 *out, s32 n) {
int __repair_literal;

    s32 buf[12];
    s32 cur;
    s32 i;
    f32 *q;

    cur = *p;
    func_80280390(buf, &cur);
    q = out;
    for (i = 0; i < n; i++) {
        *q = func_8028146C(buf, (f32)i, 0, 0);
        q += 4;
    }
__repair_literal = 4;

    cur = cur + buf[11] * (buf[0] * __repair_literal + 6);
    *p = cur;
}
