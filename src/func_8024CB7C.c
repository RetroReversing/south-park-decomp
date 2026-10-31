extern void D_8021B7EC();

void func_8024CB7C(s32 arg0, void *arg1) {
    D_8021B7EC(arg0, 0x4000, arg0);
    *(s32 *)((u8 *)arg1 + 0x60) = 0;
}
