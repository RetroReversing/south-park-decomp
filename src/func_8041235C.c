s32 func_8041235C(u8 *p, s32 n) {
    s32 i;
    s32 sum;

    i = 0;
    sum = 0;
    if (n > 0) {
        do {
            sum += *p;
            p++;
            i++;
            sum &= 0xFFFF;
        } while (i < n);
    }
    return sum & 0xFFFF;
}
