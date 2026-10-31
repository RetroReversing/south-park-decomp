void func_80298AE0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 *base = *(s32 **)(arg0 + 0x1C);
    s32 i;
    if (arg1 == 2) {
        i = *(s32 *)(arg0 + 0x14);
        *(s32 *)(arg0 + 0x14) = i + 1;
        base[i * arg1] = arg2;
    }
}
