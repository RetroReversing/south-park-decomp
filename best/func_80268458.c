extern void *D_80204618(char *name, void *arg0, s32 arg2, s32 arg3);
extern void D_80221864(s32, void*);
extern void *D_80221CCC(s32, void*);
extern u32 *D_800D7F68;
extern f64 D_800A9CB0;
extern f32 D_800A9CB8;
extern f64 D_800A9CC0;
extern f32 D_800A9CC8;
extern f64 D_800A9CD0;

typedef struct Tex { u16 width; u16 height; void *unk4; u8 *verts; s32 unkC; } Tex;
typedef struct { f32 unk0; f32 unk4; } Vec2;

void func_80268458(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Tex *tex;
    u32 *p;
    u32 *q;
    u32 *p2;
    u32 *p6;
    u32 *p1c;
    u32 *p20;
    u32 *p24;
    u32 *p28;
    u32 *p2c;
    u32 *p30;
    u32 *p34;
    u32 *p38;
    u32 *p3c;
    u32 *p40;
    u32 *p44;
    u32 *p48;
    u32 *p4c;
    u32 *p50;
    u32 *p54;
    u32 *p58;
    u32 *p5c;
    u32 *p60;
    u32 *p64;
    u32 *p68;
    u32 *p6c;
    u32 w;
    u32 h;
    u32 fmt;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    u32 t9;
    u32 t5;
    u32 t3;
    u32 t4;
    u32 t7;
    u32 s1;
    u32 a1v;
    u32 *t2;
    f32 f;

    tex = D_80204618((char *)0x800CCA80, (void *)arg0, 4, 1);
    if (tex == NULL) {
        return;
    }
    D_80221CCC(0, tex);

    p = D_800D7F68;
    q = p + 8;
    p[0] = 0xE7000000;
    p[1] = 0;
    p[2] = 0xE3000A01;
    p[3] = 0;
    p[4] = 0xD7000002;
    p[5] = 0x80008000;
    p[6] = 0xE3001201;
    p[7] = 0x2000;
    p[8] = 0xE3000C00;
    p[9] = 0;
    p[10] = 0xFCFFFFFF;
    p[11] = 0xFFFCF67B;
    p[12] = 0xE200001C;
    p[13] = 0x504240;
    p[14] = 0xFA00FFFF;
    p[15] = arg1 | ~0xFF;
    D_800D7F68 = q;
    D_800D7F68 = q + 2;
    D_800D7F68 = q + 4;
    D_800D7F68 = q + 6;
    D_800D7F68 = q + 8;
    D_800D7F68 = q + 10;
    D_800D7F68 = q + 12;
    D_800D7F68 = q + 14;

    w = ((u16 *)tex->verts)[0];
    h = ((u16 *)tex->verts)[1];
    fmt = ((u16 *)tex->verts)[2];
    tex->width = w;
    tex->height = h;

    if (fmt == 4) {
        p2 = (u32 *)tex->verts + 3 + (((w * h) & 0xFFFFFFFF) >> 1) / 4;
        p2 = (u32 *)((u8 *)tex->verts + 6 + ((w * h) >> 1));
    } else {
        p2 = (u32 *)((u8 *)tex->verts + 6 + w * h * (fmt >> 3));
    }

    switch (fmt) {
    case 4:
        p1c = (u32 *)0xF5000100;
        p6 = (u32 *)0x0703C000;
        p30 = (u32 *)0xE3001001;
        break;
    case 8:
        p1c = (u32 *)0xF5000100;
        p6 = (u32 *)0x073FC000;
        p30 = (u32 *)0xE3001001;
        break;
    case 16:
        p30 = (u32 *)0xE3001001;
        p1c = 0;
        p6 = 0;
        break;
    default:
        return;
    }

    if (fmt != 16) {
        p = D_800D7F68;
        p20 = p + 8;
        p24 = p + 16;
        p28 = p + 24;
        p2c = p + 32;
        p34 = p + 40;
        p38 = p + 48;
        p[0] = (u32)p30;
        p[1] = 0x8000;
        p[2] = (u32)(p2);
        p[3] = 0xFD100000;
        p[4] = 0xE8000000;
        p[5] = 0;
        p[6] = (u32)p1c;
        p[7] = 0x07000000;
        p[8] = 0xE6000000;
        p[9] = 0x0;
        p[10] = 0xF0000000;
        p[11] = (u32)(p6);
        p[12] = 0xE7000000;
        p[13] = 0;
        D_800D7F68 = p20;
        D_800D7F68 = p24;
        D_800D7F68 = p28;
        D_800D7F68 = p2c;
        D_800D7F68 = p34;
        D_800D7F68 = p38;
    } else {
        p = D_800D7F68;
        p[0] = (u32)p30;
        p[1] = 0;
        D_800D7F68 = p + 2;
    }

    f = (f32)fmt * D_800A9CB8;
    sp18 = (s32)(f * (f32)fmt);

    if (h == 0) {
        D_80221864(0, tex);
        return;
    }

    t9 = 0;
    sp30 = 0;
    sp1C = (((w >> 1) - 1) & 0xFFF) | 0xFD480000;
    do {
        t5 = w;
        t7 = 0;
        if ((s32)t5 > 0) {
            s1 = h - t9;
            sp20 = (((w - 1) & 0xFFF)) | 0xFD480000;
            sp24 = (((w - 1) & 0xFFF)) | 0xFD100000;
            sp38 = arg3 + t9;
            sp28 = ((arg3 + t9) * 4) & 0xFFF;
            sp2C = 0x400 << 16;
            do {
                t3 = 0x20;
                if ((s32)w >= 0x40 && fmt != 0x20) {
                    t3 = 0x40;
                }
                t4 = 0x20;
                if (s1 < 0x21) {
                    t4 = s1;
                }
                f = (f32)col2(t7) * D_800A9CC8;
                a1v = (u32)(f * (f32)fmt);
                switch (fmt) {
                case 4:
                    p = D_800D7F68;
                    p20 = p + 8;
                    p24 = p + 16;
                    p28 = p + 24;
                    p2c = p + 32;
                    p34 = p + 40;
                    p38 = p + 48;
                    p[0] = sp1C;
                    p[1] = (u32)(p2) + sp30 + a1v;
                    p[2] = (t3 << 5) | 0xF5480000;
                    p[3] = 0x07000000;
                    p[4] = 0xE6000000;
                    p[5] = 0;
                    p[6] = 0xF4000000;
                    p[7] = (((((t3 - 1) * 2) & 0xFFF) << 12) | (((t4 - 1) * 4) & 0xFFF) | 0x07000000);
                    p[8] = 0xE7000000;
                    p[9] = 0;
                    p[10] = (t3 << 5) | 0xF5400000;
                    p[11] = 0;
                    p[12] = 0xF2000000;
                    p[13] = (((t3 - 1) * 4) & 0xFFF) | ((((t3 - 1) * 8) & 0xFFF) << 12);
                    D_800D7F68 = p20;
                    D_800D7F68 = p24;
                    D_800D7F68 = p28;
                    D_800D7F68 = p2c;
                    D_800D7F68 = p34;
                    D_800D7F68 = p38;
                    t5 -= t3;
                    break;
                case 8:
                    p = D_800D7F68;
                    p20 = p + 8;
                    p24 = p + 16;
                    p28 = p + 24;
                    p2c = p + 32;
                    p34 = p + 40;
                    p38 = p + 48;
                    p[0] = sp20;
                    p[1] = (u32)(p2) + sp30 + a1v;
                    p[2] = (t3 << 6) | 0xF5480000;
                    p[3] = 0x07000000;
                    p[4] = 0xE6000000;
                    p[5] = 0;
                    p[6] = 0xF4000000;
                    p[7] = ((((t4 - 1) * 4) & 0xFFF) | ((((t3 - 1) * 4) & 0xFFF) << 12) | 0x07000000);
                    p[8] = 0xE7000000;
                    p[9] = 0;
                    p[10] = (t3 << 6) | 0xF5480000;
                    p[11] = 0;
                    p[12] = 0xF2000000;
                    p[13] = (((t3 - 1) * 4) & 0xFFF) | ((((t3 - 1) * 4) & 0xFFF) << 12);
                    D_800D7F68 = p20;
                    D_800D7F68 = p24;
                    D_800D7F68 = p28;
                    D_800D7F68 = p2c;
                    D_800D7F68 = p34;
                    D_800D7F68 = p38;
                    t5 -= t3;
                    break;
                case 16:
                    p = D_800D7F68;
                    p20 = p + 8;
                    p24 = p + 16;
                    p28 = p + 24;
                    p2c = p + 32;
                    p34 = p + 40;
                    p38 = p + 48;
                    p[0] = sp24;
                    p[1] = (u32)(p2) + sp30 + a1v;
                    p[2] = (t3 << 7) | 0xF5100000;
                    p[3] = 0x07000000;
                    p[4] = 0xE6000000;
                    p[5] = 0;
                    p[6] = 0xF4000000;
                    p[7] = ((((t4 - 1) * 4) & 0xFFF) | ((((t3 - 1) * 4) & 0xFFF) << 12) | 0x07000000);
                    p[8] = 0xE7000000;
                    p[9] = 0;
                    p[10] = (t3 << 7) | 0xF5100000;
                    p[11] = 0;
                    p[12] = 0xF2000000;
                    p[13] = (((t3 - 1) * 4) & 0xFFF) | ((((t3 - 1) * 4) & 0xFFF) << 12);
                    D_800D7F68 = p20;
                    D_800D7F68 = p24;
                    D_800D7F68 = p28;
                    D_800D7F68 = p2c;
                    D_800D7F68 = p34;
                    D_800D7F68 = p38;
                    t5 -= t3;
                    break;
                }

                p = D_800D7F68;
                p2c = p + 8;
                p34 = p + 16;
                p[0] = ((((arg2 + t7 + t3) * 4) & 0xFFF) << 12) | ((((sp38 + t4) * 4) & 0xFFF) | 0xE4000000);
                p[1] = ((((arg2 + t7) * 4) & 0xFFF) << 12) | sp28;
                p[2] = 0xE1000000;
                p[3] = 0;
                p[4] = 0xF1000000;
                p[5] = sp2C | 0x400;
                p6 = p;
                D_800D7F68 = p2c;
                t7 += t3;
                D_800D7F68 = p34;
            } while ((s32)t5 > 0);
        }
        t9 += 0x20;
        sp30 += sp18 << 5;
    } while (t9 < h);
    D_80221864(0, tex);
}
