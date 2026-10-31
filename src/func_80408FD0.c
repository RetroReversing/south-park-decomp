extern u8 D_800BF318;
extern u8 D_8010DEA1;

s32 func_80408FD0(u8 *arg0, u32 arg1) {
    u32 c = 0x27;
    u32 i = 0;

    if (arg1 != 0) {
        do {
            c = *arg0 ^ (c ^ i);
            i++;
            arg0++;
        } while (i < arg1);
    }
    return c & 0xFF;
}

void func_80408F54(u8 *arg0, u8 *arg1, s32 arg2) {
    u32 row;
    u32 j;
    u8 c;
    u8 *p;

    row = 0;
    do {
        c = *arg0;
        if (c != 0) {
            j = 0;
            do {
                if (c == *(&D_800BF318 + j)) {
                    break;
                }
                j++;
            } while (j < 0x31);
            *arg1 = j + 0xF;
            arg1++;
            arg0++;
        } else {
            *arg1 = 0;
            arg1++;
        }
        row++;
    } while (row < 0x10);
    p = &D_8010DEA1;
    p[0] = arg2 + 0x1A;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}
