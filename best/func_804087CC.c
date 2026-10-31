s32 func_80410750(u8 *a0, u8 *a1, s32 a2);
s32 func_8029B780(u8 *a0, u8 *a1, s32 a2);
s8 func_80408EF4(s32 a0);
s32 func_80410458(u8 *a0, u8 *a1);
void D_8022D1F4(s32 a0);
void D_8022D248(void);
void D_8022D220(void);

extern u8 D_800EE468[];
extern u8 D_800EEDB8[];
extern u8 D_8010DE78[];
extern s8 D_8010DE8C[];

s8 func_804087CC(void) {
char *__repair_addr;

    u8 *base;
    s32 idx;
    u8 *obj;
    s32 r;

    idx = *(s32 *)D_8010DE78;
    base = D_800EE468;
    obj = base + idx * 0x230;
__repair_addr = (char *)(obj + 0xD4);

    *(s32 *)(__repair_addr) = 0;
    if (D_8010DE8C[*(s32 *)D_8010DE78] == -8) {
        D_8022D1F4(1);
        D_8022D248();
        D_8010DE8C[*(s32 *)D_8010DE78] = 0;
        r = func_80410750(D_800EEDB8, D_8010DE78 + 0x30, *(s32 *)D_8010DE78);
        if (r == 0xA) {
            if (func_8029B780(D_800EEDB8, obj + 0xE4, *(s32 *)D_8010DE78) == 0) {
                *(s32 *)(obj + 0xD4) = 1;
                r = 1;
            }
        }
        D_8010DE8C[*(s32 *)D_8010DE78] = func_80408EF4(r);
        *(s32 *)(D_8010DE78 + 0x10) = 0;
        func_80410458(D_8010DE78 + 0x30, D_8010DE78 + 0x10);
        *(s32 *)(D_8010DE78 + 0x10) = *(s32 *)(D_8010DE78 + 0x10) / 256;
        D_8022D220();
    }
    return D_8010DE8C[*(s32 *)D_8010DE78];
}
