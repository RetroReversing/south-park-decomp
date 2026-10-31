void func_8027DA10(void);
void func_8027DAA4(void) {
    s32 i;
    s32 n = 31;
    s32 count = 5;
    u8 buf[0x10];
    func_8027DA10();
    if (--n < 0) return;
    count = n;
    for (i = 0; i < count; i++) {
        func_8027DA10();
        buf[i] = 0;
    }
}
