typedef struct { s32 b; f32 c; f32 d; } VS;

f32 func_80280D8C(s32 arg0, s32 arg1, ...) {
int __repair_literal;

    VS *ap = (VS *)&arg1;
    u32 *p;
    u32 v, w;
    s32 mask;
    f64 xx;
    f32 x;

    p = (u32 *)((arg0 & 0xF0000000) | ((u32)(arg0 & 0x0FFFFFE0) >> 3));
    v = p[0];
    w = p[1];
    arg0 &= 0x1F;
    if (arg0 != 0) {
        v = (v >> arg0) | (w << (32 - arg0));
    }
__repair_literal = 32;

    if ((u32)arg1 < __repair_literal) {
        v &= (1 << arg1) - 1;
    }
    xx = v;
    if ((s32)v < 0) {
        xx += D_800AA2C8;
    }
    x = xx;
    mask = (1 << arg1) - 1;
    return (x / (f32)mask) * ap->d + ap->c;
}
