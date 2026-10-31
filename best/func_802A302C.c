extern f32 D_800AB438;
extern f32 D_800AB43C;
extern f32 D_800AB440[];
extern f32 D_800F9C70[];
extern f32 D_800F9E70[];
extern f32 D_800FA070[];
extern f32 D_800FA270[];
extern f32 D_800FA470[];
extern s16 D_800B4B90;
typedef struct { s16 w; s16 h; s16 x; s16 y; s32 f; u8 pal[0x10]; } Palette;

void func_802A2A94(void);
void *func_802A2BFC(s32);
s32 func_802A2D84(f32 *, s16 *);
s32 func_802A2EA8(f32 *, s32, s32, s32, s32, s32);
extern Palette *D_800FA670;

void func_802A302C(s16 *arg0, s16 *arg1) {
    f32 *a = (f32 *) 0x802A302C;
    f32 buf[0x100];
    s16 out[0x80];
    s16 i;
    s16 n = 0xFF;
    f32 k;
    Palette *pal;
    s16 w, h;

    if (D_800B4B90 == 0) {
        func_802A2A94();
        D_800FA670 = func_802A2BFC(0x80);
        D_800B4B90 = 1;
    }
    k = D_800AB438;
    func_802A2D84(a, arg1 + 0xC);
    for (i = 0; i < 0x80; i++) {
        buf[i * 2 + 0] = a[i * 2 + 0];
        buf[i * 2 + 1] = a[(0xFF - i) * 2 + 0];
    }
    for (i = 0; i < 0x80; i++) {
        f32 x = buf[i * 2 + 0];
        f32 y = buf[i * 2 + 1];
        buf[i * 2 + 0] = x * D_800F9C70[i] - y * D_800F9E70[i];
        buf[i * 2 + 1] = x * D_800F9E70[i] + y * D_800F9C70[i];
    }
    pal = D_800FA670;
    func_802A2EA8(buf, pal->f, -1, pal->x, pal->w, pal->h);
    for (i = 0; i < 0x80; i++) {
        f32 x = buf[i * 2 + 0];
        f32 y = buf[i * 2 + 1];
        buf[i * 2 + 0] = x * D_800FA070[i] - y * D_800FA270[i];
        buf[i * 2 + 1] = x * D_800FA270[i] + y * D_800FA070[i];
    }
    w = pal->x;
    h = pal->w;
    for (i = 0; i < 0x80; i++) {
        f32 x = buf[i * 2 + 0];
        f32 y = buf[i * 2 + 1];
        f32 c = x * D_800F9C70[i] + y * D_800F9E70[i];
        f32 s = k * (x * D_800F9E70[i] - y * D_800F9C70[i]);
        D_800FA470[i] = c;
        out[i] = (s16) (s32) (k * c);
        out[0xFF - i] = (s16) (s32) (k * s);
    }
}
