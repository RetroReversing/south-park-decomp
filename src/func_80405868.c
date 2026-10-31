void func_80403338(s32 arg0, void *arg1);

s32 func_80405868(s32 arg0, u8 *arg1, s32 arg2) {
    *(s32 *)(arg1 + 0x1C) = 0;
    func_80403338(arg2, arg1);
    return 1;
}
