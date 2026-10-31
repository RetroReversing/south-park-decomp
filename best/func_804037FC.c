typedef struct {
    u8 pad[0x368];
    s32 f0;      /* 0x368 */
    s32 f4;      /* 0x36C */
    f32 f8;      /* 0x370 */
    u8 pad2[0x37C - 0x374];
    s32 f37C;
    s32 f380;
    s32 f384;
    u8 pad3[0x398 - 0x388];
    f32 f398;
    u8 pad4[0x424 - 0x39C];
    s32 f424;
    f32 f428;
} S;

typedef struct {
    u8 pad[0xDC];
    s32 f[3];
} T;

extern u8 D_800CCA80;
extern f32 D_800BC3D8;
T *D_80205468(void *);

void *func_804037FC(u8 *arg0) {
    S *s0 = *(S **)(arg0 + 0x20);
    T *p;
    f32 z;
    f32 w;

    p = D_80205468(&D_800CCA80);
    if (p == NULL) {
        s0->f424 = 0;
        return NULL;
    }
    s0->f424 = 1;
    *(T *)((u8 *)((unsigned char *)s0 + 0x368)) = *p;
    z = D_800BC3D8;
    w = s0->f398;
    s0->f0 = 0;
    s0->f4 = 0;
    s0->f37C = 0;
    s0->f380 = 0;
    s0->f384 = 0;
    s0->f8 = z;
    s0->f428 = w;
    return (u8 *)((unsigned char *)s0 + 0x368);
}
