typedef struct { s32 w[3]; } Tri;

typedef struct {
    Tri a;   /* 0x00 */
    s32 pad0[6];
    Tri b;   /* 0x24 */
} M0;

typedef struct {
    Tri a;   /* 0x00 */
    Tri b;   /* 0x0C */
} M1;

typedef struct {
    Tri a;   /* 0x0C */
    Tri b;   /* 0x18 */
    Tri c;   /* 0x24 */
    Tri d;   /* 0x3C */
    Tri e;   /* 0x48 */
    Tri f;   /* 0x54 */
} In;

typedef struct {
    Tri a;   /* 0x00 */
    Tri b;   /* 0x0C */
    Tri c;   /* 0x18 */
    Tri d;   /* 0x24 */
} Out;

void D_802131C4(void *out, void *a, void *b);
void D_80213274(void *a, void *b, void *c);

void func_80279D24(Out *out, u8 *arg1)
{
    u8 sp10[0x10];
    u8 sp20[0x10];
    Tri *outB = &out->b;
    In *in = (In *)(arg1 + 0xC);

    switch (*(s32 *)arg1) {
    case 0: {
        M0 *m = (M0 *)arg1;
        while (0) {}
        out->a = m->a;
        out->b = m->b;
        out->c = *(Tri *)(arg1 + 0x18);
        out->d = *(Tri *)(arg1 + 0x24);
        break;
    }
    case 1:
        out->a = *(Tri *)(arg1 + 0x00);
        out->b = in->c;
        out->c = in->f;
        out->d = in->d;
        break;
    case 2:
        out->a = in->b;
        out->b = *(Tri *)(arg1 + 0x00);
        out->c = *(Tri *)(arg1 + 0x30);
        out->d = in->d;
        break;
    case 3:
        out->a = in->c;
        out->b = in->b;
        out->c = in->d;
        out->d = in->f;
        break;
    case 4:
        out->a = in->d;
        out->b = in->e;
        out->c = *(Tri *)(arg1 + 0x00);
        out->d = *(Tri *)(arg1 + 0x18);
        break;
    }
    D_802131C4(sp10, out, outB);
    D_802131C4(sp20, (Tri *)(out + 0x18), outB);
    D_80213274(out + 0x30, sp10, sp20);
}
