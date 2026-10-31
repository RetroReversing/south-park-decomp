void D_8023E95C(s32, s32, s32);
s32 func_8024D3A0(s32);

void func_8024D5A0(s32 arg0) {
    s32 a = func_8024D3A0(arg0);
    D_8023E95C(arg0, a, 0);
}

void func_8024D4EC(void *arg0, void *arg1) {
    void *p = arg0;
    if (*(s8 *)((u8 *)arg1 + 0xB3) != 0) {
        if (*(s32 *)(*(void **)((u8 *)p + 0x14) + 0x14) & 2) {
            *(s32 *)((u8 *)p + 0xF4) &= 0xFFEFFFFF;
            *(s32 *)((u8 *)p + 0xF4) &= 0xFFFF7FFF;
        }
        if (*(s32 *)((u8 *)arg1 + 0x158) != 0) {
            D_8023E95C(0, 0, 0);
        }
    }
}

s32 func_8024D460(void *arg0) {
    s32 t = *(s16 *)(*(void **)((u8 *)arg0 + 0x14) + 0x26);
    if (t != 0) {
        *(s32 *)((u8 *)arg0 + 0xF4) |= 0x100000;
    } else {
        *(s32 *)((u8 *)arg0 + 0xF4) &= 0xFFEFFFFF;
        *(s32 *)((u8 *)arg0 + 0xF4) &= 0xFFFF7FFF;
    }
    return t;
}

void D_8021A074(void *, void *, s32);
void D_8021775C(void *);

void func_8024D708(void *arg0, void *arg1, void *arg2) {
    *(s8 *)((u8 *)arg1 + 0x31) = -1;
    *(s8 *)((u8 *)arg1 + 0xB3) = 0;
    *(void **)((u8 *)arg1 + 0x154) = arg2;
    D_8021A074(arg0, arg2, 1);
    D_8021775C(arg0);
}
