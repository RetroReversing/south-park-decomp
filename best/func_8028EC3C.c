void *func_8028EC30(void *arg0, s32 arg1) {
    return (u8 *)arg0 + ((arg1 >> 5) << 2);
}

s32 func_8028EC3C(s32 arg0, s32 arg1) {
    return 1 << (arg1 & 0x1F);
}
