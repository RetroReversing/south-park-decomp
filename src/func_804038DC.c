s32 func_80403904(void *arg0) {
    return *(s32 *)(*(u8 **)((u8 *)arg0 + 0x14) + 0x1C);
}

s32 func_80403338(s32);

s32 func_804038DC(s32 arg0, s32 arg1, s32 arg2) {
    return func_80403338(arg2) != 0;
}

s32 func_804038C4(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}

s32 D_8022D0BC(s32);
s32 D_8022D0D4(s32);

s32 func_804039E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 t;
    s32 v = arg1;

    if (D_8022D0BC(*(s32 *)((u8 *)arg0 + 0x24)) != 0) {
        t = v - arg2;
        if (t < arg3) {
            t = arg3;
            if (arg5 != 0) {
                t = arg4;
            }
        }
        v = t;
    }
    if (D_8022D0D4(*(s32 *)((u8 *)arg0 + 0x24)) != 0) {
        t = v + arg2;
        if (arg4 < t) {
            t = arg4;
            if (arg5 != 0) {
                t = arg3;
            }
        }
        v = t;
    }
    return v;
}
