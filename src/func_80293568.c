typedef struct {
    s16 v0;
    char pad2[2];
    s32 v4;
    u8 b8;
    u8 b9;
    u8 b10;
} PackA;

void func_8029370C(void *p, s16 *pack, s32 zero);

void func_80293568(s32 arg0, s32 arg1) {
    PackA pack;
    pack.v0 = 0xD;
    pack.v4 = arg1;
    func_8029370C((u8 *)arg0 + 0x48, (s16 *)&pack, 0);
}
