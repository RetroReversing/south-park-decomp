extern s32 D_8010E504;
s32 func_80407F38(s32, s32);

s32 func_8040B988(s32 arg0, s32 arg1) {
    s32 v = arg0;

    if (D_8010E504 != 0) {
        return -6;
    }
    return func_80407F38(arg1, v);
}
