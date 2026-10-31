typedef void (*Cb)(void *a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7);

extern u8 D_800B1208[];
extern u8 D_800B120C[];
extern u8 D_800CCA80[];
extern u8 *D_800D6358;
extern s32 D_800D790C;

void func_802630B0(void *a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7)
{
int __repair_literal;

    Cb *tab = (Cb *)D_800B1208 + a2;
    s32 flag;
    u8 *p;
    u8 *q;
    s32 n;
    s32 i;

    flag = 0;
    if (D_800D790C != 0)
        flag = *(&D_800D790C - 7) == 0xD;
__repair_literal = 8;


    if (!(*(s32 *)(D_800B120C + a2 * __repair_literal) & 2) && !flag) {
        if (*tab != NULL)
            (*tab)(a0, a1, a2, a3, a4, a5, a6, a7);
        return;
    }
    if (*(s32 *)(D_800B120C + a2 * 8) & 8) {
        n = *(s32 *)(D_800CCA80 + 0xF4);
        if (n > 0) {
            p = *(u8 **)(D_800CCA80 + 0xEC);
            for (i = 0; i < n; i++, p += 0x368) {
                if (p != a0) {
                    if (*tab != NULL)
                        (*tab)(p, a1, a2, a3, a4, a5, a6, a7);
                }
            }
        }
        q = D_800D6358;
        while (q != NULL) {
            if (q != a0 && q + 0x368 != a0) {
                if (*tab != NULL)
                    (*tab)(q, a1, a2, a3, a4, a5, a6, a7);
            }
            q = *(u8 **)(q + 0x159C);
        }
        return;
    }
    if (flag)
        return;
    n = *(s32 *)(D_800CCA80 + 0xE88);
    if (n > 0) {
        for (i = 0; i < n; i++) {
            void *r = *(void **)(D_800CCA80 + 0xC88 + i * 4);
            if (r != a0) {
                if (*tab != NULL)
                    (*tab)(r, a1, a2, a3, a4, a5, a6, a7);
            }
        }
    }
    q = D_800D6358;
    while (q != NULL) {
        if (q != a0 && q + 0x368 != a0) {
            if (*tab != NULL)
                (*tab)(q, a1, a2, a3, a4, a5, a6, a7);
        }
        q = *(u8 **)(q + 0x159C);
    }
}
