typedef char *(*FmtWriteFn)(char *, const char *, s32);
extern s32 func_802A0960(void *, u8);
extern void func_802A0F04(void *);
extern u8 D_800AB260[], D_800AB280[], D_800B4998[], D_800B49BC[];
extern u32 D_800AB268[];
s32 func_802A09C0(FmtWriteFn fn, char *state, const char *fmt, s32 *args) {
int __repair_literal;

    s32 count = 0;
    s32 flags;
    s32 width;
    s32 precision;
    s32 n;
    s32 pad;
    s32 i;
    const char *p = fmt;
    const char *start;
    u8 spec;
    u8 *buf;
    s32 out[14];
    while (*p != 0) {
        start = p;
        while (*p != 0 && *p != '%') p++;
        if (p != start) {
            n = p - start;
            state = fn(state, start, n);
            if (state == 0) return 0;
            count += n;
        }
        if (*p == 0) break;
        p++;
        flags = 0;
        while (func_802A0960(D_800AB260, (u8)*p) != 0) {
            flags |= D_800AB268[func_802A0960(D_800AB260, (u8)*p)];
            p++;
        }
        if (*p == '*') {
            args = (s32 *)(((u32)args + 3) & ~3);
            width = *args++;
__repair_literal = 0;

            if (width < __repair_literal) { flags |= 4; width = -width; }
            p++;
        } else {
            width = 0;
            while (*p >= '0' && *p <= '9') width = width * 10 + *p++ - '0';
        }
        precision = -1;
        if (*p == '.') {
            p++;
            precision = 0;
            if (*p == '*') { args = (s32 *)(((u32)args + 3) & ~3); precision = *args++; p++; }
            else while (*p >= '0' && *p <= '9') precision = precision * 10 + *p++ - '0';
        }
        while (func_802A0960(D_800AB280, (u8)*p) != 0) {
            spec = *p++;
            if (spec == 'l' && *p == 'l') { spec = 'L'; p++; }
        }
        spec = *p++;
        func_802A0F04(&out[0]);
        args = (s32 *)(((u32)args + 3) & ~3);
        pad = width - (out[3] + out[4] + out[5] + out[6] + out[7] + out[8]);
        if (pad > 0 && !(flags & 4)) {
            while (pad > 0) {
                n = pad > 32 ? 32 : pad;
                state = fn(state, (const char *)D_800B4998, n);
                count += n;
                pad -= n;
            }
        }
        if (out[3]) { state = fn(state, (char *)buf, out[3]); count += out[3]; }
        if (out[4]) { state = fn(state, (char *)D_800B49BC, out[4]); count += out[4]; }
        if (out[5]) { state = fn(state, (char *)&out[2], out[5]); count += out[5]; }
        if (out[6]) { state = fn(state, (char *)D_800B49BC, out[6]); count += out[6]; }
        if (out[7]) { state = fn(state, (char *)&out[2] + out[5], out[7]); count += out[7]; }
        if (out[8]) { state = fn(state, (char *)D_800B49BC, out[8]); count += out[8]; }
        if (pad > 0 && (flags & 4)) {
            while (pad > 0) {
                n = pad > 32 ? 32 : pad;
                state = fn(state, (const char *)D_800B4998, n);
                count += n;
                pad -= n;
            }
        }
    }
    return count;
}
