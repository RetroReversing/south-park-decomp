typedef struct RDPipe {
    char pad0[4];
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    char padA[2];
    s32 unkC;
} RDPipe;

extern RDPipe *D_800B4988[];
extern s32 D_A4600000;
extern s32 func_8029E4E0(s32 arg0);

s32 func_8029F6E8(RDPipe *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    RDPipe *prev;
    u8 idx;
    u8 v;
    s32 i;

    for (i = 0; *(volatile u32 *)0xA4600010 & 3; i++) {
    }
    idx = arg0->unk9;
    prev = D_800B4988[idx];
    if (prev != arg0) {
        if (idx == 0) {
            v = arg0->unk5;
            if (prev->unk5 != v) {
                *(volatile s32 *)0xA4600014 = v;
            }
            v = arg0->unk6;
            if (prev->unk6 != v) {
                *(volatile s32 *)0xA460001C = v;
            }
            v = arg0->unk7;
            if (prev->unk7 != v) {
                *(volatile s32 *)0xA4600020 = v;
            }
            v = arg0->unk8;
            if (prev->unk8 != v) {
                *(volatile s32 *)0xA4600018 = v;
            }
        } else {
            v = arg0->unk5;
            if (prev->unk5 != v) {
                *(volatile s32 *)0xA4600024 = v;
            }
            v = arg0->unk6;
            if (prev->unk6 != v) {
                *(volatile s32 *)0xA460002C = v;
            }
            v = arg0->unk7;
            if (prev->unk7 != v) {
                *(volatile s32 *)0xA4600030 = v;
            }
            v = arg0->unk8;
            if (prev->unk8 != v) {
                *(volatile s32 *)0xA4600028 = v;
            }
        }
        D_800B4988[idx] = arg0;
    }
    D_A4600000 = func_8029E4E0(arg3);
    *(volatile s32 *)0xA4600004 = (arg0->unkC | arg2) & 0x1FFFFFFF;
    if (arg1 == 0) {
        *(volatile s32 *)0xA460000C = arg4 - 1;
        return 0;
    }
    if (arg1 == 1) {
        *(volatile s32 *)0xA4600008 = arg4 - 1;
        return 0;
    }
    return -1;
}
