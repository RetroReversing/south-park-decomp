extern s32 D_800B3628[];

s32 func_8028EA60(void) {
    s32 *p;
    s32 v;

    p = *(s32 **)D_800B3628;
    v = p[10];
    if (v == 0) {
        v = 0;
    } else {
        v = p[18];
    }
    return v;
}
