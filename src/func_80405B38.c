extern s32 D_800D77D0;
extern s32 D_800D77D4;
extern s32 D_800C9788;
extern s32 D_800C9794;

s32 func_80405B38(s32 arg0, s32 arg1) {
    s32 *p = &D_800D77D0;
    s32 v = *p;

    *p = v ^ arg1;
    return 0;
}

s32 func_80405B70(s32 *arg0) {
    s32 v;
    s32 bit;
    s32 *p;

    if (D_800D77D4 & 1) {
        v = arg0[2] | 0x40000;
    } else {
        v = arg0[2] & 0xFFFBFFFF;
    }
    arg0[2] = v;
    bit = D_800D77D0 & 1;
    if (bit) {
        p = &D_800C9788;
    } else {
        p = &D_800C9794;
    }
    arg0[5] = (s32)p;
    return 0;
}

s32 func_80405AE4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 v;
    s32 bit;

    if (D_800D77D4 & arg1) {
        v = arg0[2] | 0x40000;
    } else {
        v = arg0[2] & 0xFFFBFFFF;
    }
    arg0[2] = v;
    bit = D_800D77D0 & arg1;
    if (bit) {
        arg0[5] = arg2;
    } else {
        arg0[5] = arg3;
    }
    return 0;
}
