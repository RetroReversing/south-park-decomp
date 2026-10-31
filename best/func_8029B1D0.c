extern u8 D_800F604C;
extern u8 D_800F6050[];
extern u8 D_800F6088[];

typedef struct { u8 b[8]; } E8;

void func_8029B1D0(u8 arg0) {
    E8 e;
    s32 i;
    s32 *p;
    u8 *base;
    u8 *r;
    u8 n;

    i = 14;
    p = (s32 *)D_800F6088;
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);

    base = D_800F6050;
    r = base;
    *(s32 *)(base + 0x3C) = 1;
    e.b[0] = 0xFF;
    e.b[1] = 1;
    n = D_800F604C;
    e.b[2] = 3;
    e.b[3] = arg0;
    e.b[4] = 0xFF;
    e.b[5] = 0xFF;
    e.b[6] = 0xFF;
    e.b[7] = 0xFF;
    i = 0;
    if (n != 0) {
        do {
            *(E8 *)r = e;
            i++;
            r += 8;
        } while (i < D_800F604C);
    }
    *r = 0xFE;
}
