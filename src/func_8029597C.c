typedef struct { char pad[8]; u8 *p; } Cursor;

s32 func_8029597C(Cursor *a) {
    s32 v;
    s32 c;

    c = *a->p;
    a->p = a->p + 1;
    v = c;
    if (v & 0x80) {
        v &= 0x7F;
        do {
            v <<= 7;
            c = *a->p;
            a->p = a->p + 1;
            v += c & 0x7F;
        } while (c & 0x80);
    }
    return v;
}
