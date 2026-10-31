/* identical to func_002A1384 in turok2-decomp (matched), with its names changed by decompdecomp */
s32 func_802A3844(s32 arg0) {
    if ((*(volatile u32 *)(0xA4600010U)) & 3U) {
        do {
        } while ((*(volatile u32 *)(0xA4600010U)) & 3U);
    }
    return (*(volatile u32 *)(arg0));
}
