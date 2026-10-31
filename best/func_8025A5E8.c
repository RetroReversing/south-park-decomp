void D_8021E6F8(void *p, s32 a, s32 b);
void D_8021E76C(void *p, s32 a);

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 pad[0x14];
} S;
extern S *D_8025A5D8;

void func_8025A5E8(S *arg0) {
    s32 i;

    D_8021E6F8((u8 *)arg0 + 8, 0x368, 0x36C);
    D_8021E6F8((u8 *)arg0 + 0x1C, 0x368, 0x36C);
    for (i = 0; i < 0x20; i++) {
        D_8021E76C((u8 *)arg0 + 8, arg0->unk4 + i * 0x378);
    }
}
