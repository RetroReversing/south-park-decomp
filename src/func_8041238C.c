/* identical to func_00462CD4 in turok2-decomp (matched), with its names changed by decompdecomp */
s32 func_8041238C(u16 *block, u16 *sum, u16 *inverse) {
    u32 offset;
    *inverse = 0;
    *sum = 0;
    for (offset = 0; offset < 0x1C; offset += 2) {
        u16 value = *(u16 *) ((char *) block + offset);
        *sum += value;
        *inverse += (u16) ~value;
    }
    return 0;
}
