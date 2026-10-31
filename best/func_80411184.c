extern u8 D_800F604C;
extern u8 D_800F6090;
extern u8 D_8010E858[];
typedef struct { u8 b[8]; } Blk;

void func_80411184(u8 a)
{
char *__repair_addr;

    Blk buf;
    Blk *p;
    u8 *cnt;
    s32 i;

    p = (Blk *)D_8010E858;
    cnt = &D_800F604C;
    i = 0;
__repair_addr = (char *)((u8 *)p + 0x3C);

    *(s32 *)(__repair_addr) = 1;
    buf.b[0] = 0xFF;
    buf.b[1] = 1;
    D_800F6090 = a;
    buf.b[2] = 3;
    buf.b[3] = a;
    buf.b[4] = 0xFF;
    buf.b[5] = 0xFF;
    buf.b[6] = 0xFF;
    buf.b[7] = 0xFF;
    if (*cnt != 0) {
        do {
            p[0] = buf;
            i++;
            p++;
        } while (i < *cnt);
    }
    ((u8 *)p)[0] = 0xFE;
}
