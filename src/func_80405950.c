/* identical to func_00288780 in turok2-decomp (matched), with its names changed by decompdecomp */
s32 func_80405950(u8 *a, u8 *b) {
    if (a == ((void *)0) || b == ((void *)0)) {
        return -1;
    }
    while (*a != 0 && *b != 0) {
        if (*a < *b) {
            return -1;
        }
        if (*b < *a) {
            return 1;
        }
        a++;
        b++;
    }
    if (*a != 0) {
        return 1;
    }
    if (*b != 0) {
        return -1;
    }
    return 0;
}
