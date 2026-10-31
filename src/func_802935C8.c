typedef struct {
    s16 v0;   /* 0x10 */
    s32 v4;   /* 0x14 */
    u8 b8;    /* 0x18 */
    u8 b9;    /* 0x19 */
    u8 b10;   /* 0x1A */
} PackA;

void func_8029370C(void *p, PackA *pack, s32 zero);

void func_802935C8(s32 arg0) {
    PackA pack;
    pack.v0 = 0x11;
    func_8029370C((u8 *)arg0 + 0x48, &pack, 0);
}
