extern s8 D_800ADDBB;
extern s8 D_8010DE8C[];
extern u8 D_8010DE78[];
extern s32 D_8022D1F4();
void func_8026AC4C(void *, s32, s32);

void func_80408BB8(void) {
    D_800ADDBB = 0;
}

void func_80408B3C(void) {
    s32 i;
    s32 *p;

    func_8026AC4C(D_8010DE78, 0, 0x2D8);
    p = (s32 *)D_8010DE78;
    p[1] = -1;
    p[2] = 9;
    p[3] = 3;
    D_800ADDBB = 1;
    i = 0;
    do {
        D_8010DE8C[i] = -3;
        i++;
    } while ((u32)i < 4U);
}
