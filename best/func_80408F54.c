extern u8 D_800BF318;
extern u8 D_8010DEA1;

void func_80408F54(u8 *arg0, u8 *arg1, s32 arg2) {
    u32 row;
    u32 j;
    u8 c;
    u32 x;
    u8 *p;

    row = 0;
    do {
        c = *arg0;
        if (c != 0) {
            j = 0;
            while (j < 0x31) {
                if (c == *(&D_800BF318 + j)) {
                    break;
                }
                j++;
            }
            x = j; x += 0xF;
            *arg1 = x;
            arg1++;
            arg0++;
        } else {
            *arg1 = 0;
            arg1++;
        }
        row++;
    } while (row < 0x10);
    p = &D_8010DEA1;
    x = arg2 + 0x1A;
    p[0] = x;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}
