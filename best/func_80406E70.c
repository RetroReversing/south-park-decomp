extern u8 D_800D77EF[];
extern u8 D_800D7801[];
extern u8 D_800EE468[];
s32 D_8022D09C();

void func_80406E70(void) {
    s32 n;
    s32 idx;
    s32 off;
    u8 *p;
    u8 *q = D_800D77EF;

    n = 3;
    off = 0x36;
    do {
        D_800D7801[off] = 0;
        n--;
        off -= 0x12;
    } while (n >= 0);
    for (idx = 0; idx < 4; idx++) {
        if (D_8022D09C(D_800EE468 + idx * 0x230) != 0) {
            q[0] = 1;
            q[2] = idx;
            break;
        }
    }
}
