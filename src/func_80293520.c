typedef struct {
    s16 v0;   /* 0x10 */
    s32 v4;   /* 0x14 */
    u8 b8;    /* 0x18 */
    u8 b9;    /* 0x19 */
    u8 b10;   /* 0x1A */
} PackA;

void func_8029370C(void *p, PackA *pack, s32 zero);

void func_802934F0(s32 arg0, s32 arg1) {
    PackA pack;
    pack.v0 = 0xE;
    pack.v4 = arg1;
    func_8029370C((u8 *)arg0 + 0x48, &pack, 0);
}

void func_80293520(s32 arg0, s32 arg1, u8 arg2) {
    PackA pack;
    pack.v0 = 2;
    pack.v4 = 0;
    pack.b8 = arg1 | 0xB0;
    pack.b9 = 0x5B;
    pack.b10 = arg2;
    func_8029370C((u8 *)arg0 + 0x48, &pack, 0);
}
