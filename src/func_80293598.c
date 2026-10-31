typedef struct {
    s16 v0;
    s16 pad2;
    s16 v4;
    s32 w8;
    u8 b12;
    u8 b13;
    u8 b14;
} PackA;

void func_8029370C(void *p, s16 *pack, s32 zero);

void func_80293598(s32 arg0, s16 arg1) {
    PackA pack;
    pack.v0 = 0xA;
    pack.v4 = arg1;
    func_8029370C((u8 *)arg0 + 0x48, (s16 *)&pack, 0);
}
