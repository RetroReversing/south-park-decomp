extern s16 D_800AB8D0[];
extern s16 D_800AB8AC[];

s16 func_804149A8(void *arg0) {
    return D_800AB8D0[*(s32 *)((u8 *)arg0 + 0x1778)];
}

s16 func_80414904(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0xC) >= 0x12) {
        *(s32 *)((u8 *)arg0 + 0xC) = 0;
    }
    return D_800AB8AC[*(s32 *)((u8 *)arg0 + 0xC)];
}

s32 func_804148CC(void *arg0) {
    s32 v;
    v = *(s32 *)((u8 *)arg0 + 0xC) + 1;
    *(s32 *)((u8 *)arg0 + 0xC) = v;
    if (v >= 0x11) {
        *(s32 *)((u8 *)arg0 + 0xC) = -1;
    }
    v = D_800AB8AC[*(s32 *)((u8 *)arg0 + 0xC)];
    *(s32 *)((u8 *)arg0 + 0x187C) = v;
    return v;
}

s32 D_8021563C();

s32 func_80414930(void *arg0, s32 arg1) {
    s32 v = arg1;
    if (v == -1) {
        v = D_8021563C() % 17;
    }
    if (v >= 0x12) {
        v = 0;
    }
    *(s32 *)((u8 *)arg0 + 0x1778) = v;
    return func_804149A8(arg0);
}
