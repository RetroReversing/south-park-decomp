u32 func_80281A00(u32 arg0) {
    u32 count = 0;
    u32 last = 0;
    u32 i = 0;
    u32 bit;

    do {
        bit = 1 << i;
        if (arg0 & bit) {
            count++;
            last = i;
        }
        i++;
    } while (i < 0x20U);
    if (count >= 2U) {
        return last + 1;
    }
    return last;
}
