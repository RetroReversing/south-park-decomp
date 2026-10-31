s32 func_802A0500(void);
void func_802A0520(s32);

s32 func_8029CC68(void) {
    s32 x;
    s32 *p;
    s32 y;
    x = func_802A0500();
    p = *(s32**)D_800B3AE8;
    y = p[1];
    func_802A0520(x);
    return y;
}
