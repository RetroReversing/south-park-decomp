/* identical to func_802A3A00 (matched), with its names changed by decompdecomp */
extern s32 D_800FBCE8;

s32 func_802A3844(s32 *arg0) {
    volatile s32 *p = (volatile s32 *)0xA4600010;
    if ((*p & 3) != 0) {
        do {
        } while ((*p & 3) != 0);
    }
    return *arg0;
}

void func_802A3810(s32 *arg0, s32 arg1) {
    volatile s32 *p = (volatile s32 *)0xA4600010;
    if ((*p & 3) != 0) {
        do {
        } while ((*p & 3) != 0);
    }
    *arg0 = arg1;
}

s32 func_802A3A3C(s32 arg0) {
    s32 v;
    u32 sh;
    sh = (~arg0 & 3) * 8;
    v = func_802A3844((s32 *)(arg0 & ~3));
    return (u32)v >> sh & 0xFF;
}
