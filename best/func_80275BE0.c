s32 func_80275BD0(s32 arg0, s16 *arg1) {
    return *(u16 *)(arg0 + 0xA8C) + arg1[4];
}

void func_80275BE0(s32 arg0, s16 *arg1, s32 a2, s32 a3) {
    *(s16 *)(arg0 + 0xA8C) = *(u16 *)(arg0 + 0xA8C);
}
