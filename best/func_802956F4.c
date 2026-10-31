extern f64 D_800AACC8;
extern f32 D_800AACD0;
f32 func_802956F4(void *a, s32 x, s32 y) {
    f64 d = (f64)y;
    f32 n;
    n = (f32)x;
    if (y < 0) d += D_800AACC8;
    n = n * (f32)d;
    return n / ((f32)*(s16 *)((u8 *)a + 0x18) * D_800AACD0);
}
