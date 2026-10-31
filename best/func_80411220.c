typedef struct { u16 x0; u8 x2; u8 x3; u8 b0, b1, b2, b3; } Rec8;
extern u8 D_800F604C;
extern Rec8 D_8010E858[];

void func_80411220(u8 *arg0, u8 *arg1) {
    u8 flags = 0;
    Rec8 *p = D_8010E858;
    u8 *cnt = &D_800F604C;
    u8 *q = arg1 + 2;
    s16 *w = (s16 *)arg1;
    s32 i;

    if (*cnt) {
        i = 0;
        do {
            Rec8 r = *p;
            u8 f = (r.x2 & 0xC0) >> 4;

            q[1] = f;
            if (f == 0) {
                u16 v = (u16)(r.b0 | (r.b1 << 8));

                flags |= (u8)(1 << i);
                *w = v;
                q[0] = r.b2;
            }
            i++;
            p++;
            q += 4;
            w += 2;
        } while (i < *cnt);
    }
    *arg0 = flags;
}
