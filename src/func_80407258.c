extern int D_800BF2C4;
extern unsigned char D_00415D90;
extern int func_80403D34(int, int, void *);
int func_80407258(int a0, int a1, int a2) {
    int r;
    if (D_800BF2C4) { r = 0; }
    else { func_80403D34(a2, a1, &D_00415D90); r = 1; }
    return r;
}
