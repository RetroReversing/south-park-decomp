s32 func_802A4954(u8 *s)
{
    u8 *p;
    u8 c;

    c = *s;
    p = s + 1;
    if (c != 0) {
        do {
            c = *p++;
        } while (c != 0);
    }
    return p - s;
}

s32 func_802A7570(s32 a0, u32 a1, s32 a2, u32 a3)
{
    s32 r;

    if (a0 < a2) {
        return 0;
    }
    if (a2 < a0) {
        return 2;
    }
    r = 0;
    if (a1 < a3) {
        r = 2;
    } else if (a3 >= a1) {
        r = 1;
    }
    return r;
}
