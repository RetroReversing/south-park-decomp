extern void func_802832C8(void *);
extern void func_8025D55C(void *);
extern void func_8026AC4C(void *, int, int);
extern void D_8021E6F8(void *, int, int);
extern void func_8025A688(void *);
extern void func_8025AFA0(void *);

typedef struct {
    char pad0[4];
    void *p4;    /* 0x4 */
    s32 n8;      /* 0x8 */
} S92C;

void func_8025F92C(S92C *s)
{
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < s->n8; i++, off += 0xFB0) {
        func_802832C8((char *)s->p4 + off + 0x540);
    }
    func_802832C8((char *)s + 0x580);
    func_8025D55C(s);
}

typedef struct {
    char pad0[0xC];
    char aC[0x14];       /* 0xC */
    char a20[0xFD0];     /* 0x20 */
    char aFF0[8];        /* 0xFF0 */
    char aFF8[4];        /* 0xFF8 */
    char aFFC[4];        /* 0xFFC */
    s32 w38;             /* 0x38 */
    char a3C[4];         /* 0x3C */
    char a40[0xFB0];     /* 0x40 */
    char aFF0_2[0];      /* overlaps: replaced below */
} S894_bad;

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    char bC[0x14];   /* 0xC..0x20 */
    char b20[0xFD0]; /* 0x20..0xFF0 */
    s32 wFF0;
    s32 wFF4;
    s32 wFF8;
    char bFFC[4];
    s32 w38;
    char b3C[4];
    char b40[0xFB0];
} S894;

void func_8025F894(S894 *s)
{
    func_8026AC4C(s, 0, 0x12D8);
    D_8021E6F8((char *)s + 0xC, 0, 4);
    D_8021E6F8((char *)s + 0x20, 0, 4);
    D_8021E6F8((char *)s + 0xFFC, 0, 4);
    s->w0 = 0;
    s->w4 = 0;
    s->w8 = 0;
    s->wFF0 = 0;
    s->wFF4 = 0;
    s->wFF8 = 0;
    s->w38 = 2;
    func_8025A688((char *)s + 0x40);
    func_8025AFA0((char *)s + 0x40);
}
