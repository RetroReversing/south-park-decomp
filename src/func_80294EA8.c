s32 func_80294EA8(void *arg0, s32 arg1) {
    s32 v = *(s32 *)((u8 *)arg0 + 0x24) - arg1;
    if (v >= 0) return v;
    return 0x3E8;
}
