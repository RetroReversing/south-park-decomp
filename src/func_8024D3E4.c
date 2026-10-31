s32 func_8024D3E4(char *arg0) {
    s16 temp;
    s32 v;

    temp = *(s16 *)(*(char **)(arg0 + 0x14) + 0x24);
    v = temp;
    if (v != 0) {
        *(s32 *)(arg0 + 0xF4) |= 0x100000;
    } else {
        *(s32 *)(arg0 + 0xF4) &= 0xFFEFFFFF;
    }
    return v;
}
