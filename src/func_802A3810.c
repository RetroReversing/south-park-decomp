/* identical to func_002A1350 in turok2-decomp (matched), with its names changed by decompdecomp */
void func_802A3810(s32 address, s32 value) {
    if ((*(volatile u32 *)(0xA4600010U)) & 3U) {
        do {
        } while ((*(volatile u32 *)(0xA4600010U)) & 3U);
    }
    *(s32 *)address = value;
}
