void func_8028E9E0(void) {
}

extern u8 *D_800B3628;
extern u8 *D_800B3630;

s32 func_8028E9E8(void) {
    u8 *p;
    s32 r = 0;

    if (D_800B3630 == 0)
        r = 0;
    p = D_800B3628;
    if (*(s32 *)(p + 0x28) != 0) {
        f32 a = *(f32 *)(p + 0x10);
        f32 b = *(f32 *)(p + 0x20);
        if (b <= a && a <= *(f32 *)(p + 0x24))
            r = 1;
    }
    if (!r)
        return 0;
    return (*(u32 *)(D_800B3628 + 0x30) & 2) != 0;
}
