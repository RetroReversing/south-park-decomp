extern f32 D_800A9D28;
void func_80268220(s32, s32, void *);
void func_8026AB5C(void *);

typedef struct {
    s16 u0;    /* 0x0 */
    s16 u1;    /* 0x2 */
    s16 u2;    /* 0x4 */
    s16 u3;    /* 0x6 */
    s16 u4;    /* 0x8 */
    s16 u5;    /* 0xA */
    u8 m0, m1, m2, m3;
    u16 pad0;
} Ent;

typedef struct {
    f32 x;      /* 0x0 */
    f32 y;      /* 0x4 */
    f32 z;      /* 0x8 */
    char pad[0x810 - 0xC];
    u16 r[21];  /* 0x810 */
    Ent e[4];   /* 0x858 */
} Board;

void func_80269AC8(Board *b, s32 dx, s32 dy) {
    s32 i;
    Ent *e;

    func_80268220(0x1F5, 1, &b->e[0]);
    func_80268220(0x1F5, 2, &b->e[1]);
    for (i = 0; i < 4; i++) {
        e = &b->e[i];
        switch (i & 3) {
        case 0:
            e->u0 = 0;
            e->u1 = 0;
            e->u4 = 0;
            e->u5 = 0;
            break;
        case 1:
            e->u0 = 0x40;
            e->u1 = 0;
            e->u4 = 0x2000;
            e->u5 = 0;
            break;
        case 2:
            e->u0 = 0x40;
            e->u1 = 0x40;
            e->u4 = 0x2000;
            e->u5 = 0x2000;
            break;
        case 3:
            e->u0 = 0;
            e->u1 = 0x40;
            e->u4 = 0;
            e->u5 = 0x2000;
            break;
        }
        e->u2 = 0;
        e->u3 = 0;
        e->m0 = 0xFF;
        e->m1 = 0xFF;
        e->m2 = 0xFF;
        e->m3 = 0xFF;
    }
    b->x = dx;
    b->y = dy;
    b->z = D_800A9D28;
    func_8026AB5C(b);
    b->r[1] = 0xF801;
    b->r[2] = 0x7801;
    b->r[3] = 0x7C1;
    b->r[4] = 0x3C1;
    b->r[5] = 0x3FF;
    b->r[6] = 0x1DF;
    b->r[7] = 0xFFFF;
    b->r[8] = 0x7BDF;
    b->r[9] = 0xFFC1;
    b->r[10] = 0x7BC1;
    b->r[11] = 0x423F;
    b->r[12] = 0x47D1;
    b->r[13] = 0xFFD1;
    b->r[0] = 0;
    b->r[14] = 0xFA11;
}
