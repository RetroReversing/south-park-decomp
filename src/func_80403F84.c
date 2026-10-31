s32 func_80403F84(void **p) {
    s32 n;
    void *q;
    s16 c;

    n = 0;
    q = *p;
    c = 4;
    while (q != NULL) {
        if (*(s16 *)((u8 *)q + 0x2C) != c) {
            n += 1;
            q = *(void **)((u8 *)q + 0x1D4);
        } else {
            q = *(void **)((u8 *)q + 0x1D4);
        }
    }
    return n;
}
