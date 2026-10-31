/* identical to func_0026D518 in turok2-decomp (matched), with its names changed by decompdecomp */
s16 func_80262EB8(s16 *arg0) {
    s16 *entry;
    s16 *start;
    s32 random;
    s32 total;
    s32 value;
    entry = arg0;
    total = 0;
    start = entry;
    if (*entry != -1) {
        do {
            total += entry[1];
            entry += 2;
        } while (*entry != -1);
    }
    random = D_8021563C();
    entry = start;
    value = random % total;
    total = 0;
    while (*entry != -1) {
        total += entry[1];
        if (total >= value) {
            break;
        }
        entry += 2;
    }
    return *entry;
}
