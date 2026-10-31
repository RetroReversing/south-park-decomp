extern f32 D_800A99FC;
extern f32 D_800A9A00;
extern void *D_800B2608;

typedef struct {
    s32 w0;      /* 0x0 */
    s32 w4;      /* 0x4 */
    f32 w8;      /* 0x8 */
    s32 wC;      /* 0xC */
    s32 w10;     /* 0x10 */
    s32 w14;     /* 0x14 */
    s32 w18;     /* 0x18 */
    s32 w1C;     /* 0x1C */
    f32 f20;     /* 0x20 */
    f32 f24;     /* 0x24 */
    f32 f28;     /* 0x28 */
    f32 f2C;     /* 0x2C */
    f32 f30;     /* 0x30 */
    s32 w34;     /* 0x34 */
    f32 f38;     /* 0x38 */
    f32 f3C;     /* 0x3C */
    void *p40;   /* 0x40 */
} S;

void *func_8025F2AC(S *s) {
    f32 z;

    s->f20 = 0.0f;
    z = s->f20;
    s->w0 = 0;
    s->w4 = 0;
    s->w8 = 0;
    s->wC = 0;
    s->w10 = 0;
    s->w14 = 0;
    s->w18 = 0;
    s->w1C = 0;
    s->f2C = z;
    s->f28 = z;
    s->f24 = z;
    s->f30 = D_800A99FC;
    s->w34 = 0;
    s->f38 = z;
    s->f3C = D_800A9A00;
    s->p40 = D_800B2608;
    return s->p40;
}
