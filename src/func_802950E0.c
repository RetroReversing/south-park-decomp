void func_802950E0(void *arg0, u8 *arg1, s32 arg2) {
    u8 *b = (u8 *)arg0;
    s32 o = arg2 * 16;
    *(u32 *)(o + *(s32 *)(b + 0x60)) = (u32)arg1;
    *(u8 *)(o + *(s32 *)(b + 0x60) + 0x7) = arg1[0x1];
    *(u8 *)(o + *(s32 *)(b + 0x60) + 0x9) = arg1[0x0];
    *(u8 *)(o + *(s32 *)(b + 0x60) + 0x8) = arg1[0x2];
    *(u16 *)(o + *(s32 *)(b + 0x60) + 0x4) = *(u16 *)(arg1 + 0xC);
}

void *func_80294CA0(void *arg0, u8 arg1, u8 arg2) {
    u8 *v = *(u8 **)((u8 *)arg0 + 0x64);

    while (v != NULL) {
        if (v[0x32] == arg1 && v[0x31] == arg2) {
            u8 k = v[0x35];
            if (k == 4) return v;
            if (k != 3) return v;
        }
        v = *(u8 **)v;
    }
    return NULL;
}
