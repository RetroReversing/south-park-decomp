extern s32 D_800D77D0;
extern s32 D_800D77D4;
extern s32 D_800C9788;
extern s32 D_800C9794;

s32 func_80405B38(s32 arg0, s32 arg1) {
    D_800D77D0 ^= arg1;
    return 0;
}

s32 func_80405B70(s32 *arg0) {
    if (D_800D77D4 & 1) {
        arg0[2] |= 0x40000;
    } else {
        arg0[2] &= 0xFFFBFFFF;
    }
    if (D_800D77D0 & 1) {
        arg0[5] = (s32)&D_800C9788;
    } else {
        arg0[5] = (s32)&D_800C9794;
    }
    return 0;
}

void func_80405A9C(s16 *arg0) {
    s32 i;
    s32 bit = 1;

    *arg0 = 1;
    for (i = 0; i < 0xB; i++) {
        if (D_800D77D4 & bit) {
            *arg0 = i + 1;
            return;
        }
        bit <<= 1;
    }
}

s32 func_80405AE4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_800D77D4 & arg1) {
        arg0[2] |= 0x40000;
    } else {
        arg0[2] &= 0xFFFBFFFF;
    }
    if (D_800D77D0 & arg1) {
        arg0[5] = arg2;
    } else {
        arg0[5] = arg3;
    }
    return 0;
}
