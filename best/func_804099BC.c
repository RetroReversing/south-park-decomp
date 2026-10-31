typedef struct { s32 a; s32 b; s32 c; s32 d; } V4;
typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 D_800B3618;
extern s32 D_800CCA8C;
extern u8 D_800D6358[];
extern s32 D_800F5298[12];
extern s32 D_8010E150[0x45];
extern s32 D_8010E270[14];
extern s32 D_8010E2A8;
extern s32 D_8010E2DC[4];

s32 func_804099BC(void)
{
    V4 *src;
    V4 *dst;
    V3 *s3;
    s32 *d3;
    s32 i;
    s32 base;

    base = (s32)D_800D6358;
    if (D_8010E150[0] != 0xB) {
        return 0;
    }
    src = (V4 *)&D_8010E150[1];
    dst = (V4 *)(base + 0x1478);
    do {
        *dst = *src;
        src++;
        dst++;
    } while (src != (V4 *)&D_8010E150[0x45]);
    ((V3 *)dst)[0] = ((V3 *)src)[0];

    src = (V4 *)D_8010E270;
    dst = (V4 *)(base + 0xA74);
    do {
        *dst = *src;
        src++;
        dst++;
    } while (src != (V4 *)&D_8010E270[12]);
    ((V3 *)dst)[0] = ((V3 *)src)[0];

    d3 = &D_8010E2A8;
    D_800CCA8C = *d3;
    s3 = (V3 *)D_800F5298;
    for (i = 0; i < 4; i++) {
        d3++;
        *s3 = *(V3 *)d3;
        s3++;
        (&D_800B3618)[i] = D_8010E2DC[i];
        d3 += 2;
    }
    *(s16 *)(base + 0xA74) = 0x64;
    *(s32 *)(base + 0x1588) = *(s32 *)(base + 0xA7C);
    return 1;
}
