extern u8 D_800F604C[1];
extern u8 D_800F6050[];

typedef struct { u8 b[8]; } S8;

void func_8029ADA4(u8 *a) {
    u8 *src = D_800F6050;
    u8 *dst = a;
    u8 *pn = D_800F604C;
    u32 v;
    S8 tmp;
    s32 i = 0;
    if (*pn == 0) {
        return;
    }
    do {
        *(S8 *)&tmp = *(S8 *)src;
        v = (tmp.b[2] & 0xC0) >> 4;
        a[4] = v;
        if (!v) {
            *(u16 *)dst = *(u16 *)(tmp.b + 4);
            dst[2] = tmp.b[6];
            dst[3] = tmp.b[7];
        }
        i++;
        src += 8;
        a += 6;
        dst += 6;
    } while (i < *pn);
}
