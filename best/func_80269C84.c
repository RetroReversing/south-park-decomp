extern u32 D_800AB9F8;
extern void *D_800A9D30[];

void func_80269C84(u8 *base, int a1, int a2, int a3) {
int __repair_literal;

    int t2, v1, t3, t1, t0;
    u8 *p;
    t2 = 0;
    v1 = t2;
    t3 = t2;
    t0 = t2;
    t1 = t2;
    switch (a1) {
    case 1: t0 = 9; t1 = 10; break;
    case 0: t0 = 1; t1 = 2; t2 = t0; break;
    case 2: t0 = 7; t1 = 8; break;
    case 3: t0 = 5; t1 = 6; break;
    case 4: t0 = 3; t1 = 4; t2 = 1; break;
    case 5: t0 = 0xB; t2 = 1; break;
    case 6: t0 = 0xC; t2 = 1; break;
    case 7: t0 = 0xD; t2 = 1; break;
    case 8: t0 = 0xE; t1 = t0; break;
    }
    if (v1) {
__repair_literal = 4;
 if ((D_800AB9F8 & 0xF) < __repair_literal) { t1 = 0; } }
    if (t3) { if ((D_800AB9F8 & 0x1F) < 0x10) { t1 = 0; } }
    if ((u32)(a2 - 1) >= 62) return;
    if (a3 <= 0) return;
    if (a3 >= 63) return;
    p = base + ((a3 << 5) + a2 / 2 + 0x10);
    if (a2 & 1) {
        if (t2) {
            p[0x11] = (p[0x11] & 0xF) | (t0 << 4);
            p[0x10] = (t0 << 4) | t0;
            p[-0x10] = (t0 << 4) | t0;
            p[0x30] = (t0 << 4) | t0;
            p[-0xF] = (p[-0xF] & 0xF) | (t0 << 4);
            p[0x31] = (p[0x31] & 0xF) | (t0 << 4);
            p[0xF] = (p[0xF] & 0xF0) | t1;
            p[-0x30] = (p[-0x30] & 0xF0) | t0;
            p[0x50] = (p[0x50] & 0xF0) | t0;
            p[0x11] = (p[0x11] & 0xF0) | t1;
        } else {
            p[0x10] = (t0 << 4) | t0;
            p[0x11] = (p[0x11] & 0xF) | (t0 << 4);
            p[-0x10] = (p[-0x10] & 0xF0) | t0;
            p[0x30] = (p[0x30] & 0xF0) | t0;
            p[0x31] = (p[0x31] & 0xF) | (t1 << 4);
            p[-0xF] = (p[-0xF] & 0xF) | (t1 << 4);
            p[0x30] = (p[0x30] & 0xF) | (t1 << 4);
        }
        return;
    }
    if (t2) {
        p[0x10] = (t0 << 4) | t0;
        p[-0x10] = (t0 << 4) | t0;
        p[0x30] = (t0 << 4) | t0;
        p[0x2F] = (p[0x2F] & 0xF0) | t0;
        p[-0x11] = (p[-0x11] & 0xF0) | t0;
        p[0xF] = (p[0xF] & 0xF0) | t0;
        p[0x11] = (p[0x11] & 0xF) | (t1 << 4);
        p[-0x30] = (p[-0x30] & 0xF) | (t0 << 4);
        p[0x50] = (p[0x50] & 0xF) | (t0 << 4);
        p[0xF] = (p[0xF] & 0xF) | (t1 << 4);
    } else {
        p[0x10] = (t0 << 4) | t0;
        p[0xF] = (p[0xF] & 0xF0) | t0;
        p[-0x10] = (p[-0x10] & 0xF) | (t0 << 4);
        p[0x30] = (p[0x30] & 0xF) | (t0 << 4);
        p[-0x11] = (p[-0x11] & 0xF0) | t1;
        p[0x2F] = (p[0x2F] & 0xF0) | t1;
        p[-0x10] = (p[-0x10] & 0xF0) | t1;
        p[0x30] = (p[0x30] & 0xF0) | t1;
    }
}
