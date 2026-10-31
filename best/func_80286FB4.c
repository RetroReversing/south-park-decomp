extern s32 D_800F5258, D_800F526C, D_800F5270;
extern u8 D_800D6338;
extern s32 D_800F4EE0[3];
void *D_80236DF0(void *, s32, s32, s32);

typedef struct { u8 pad[0x74]; void *p; } T2;
typedef struct { u8 pad[4]; s32 a, b, c; } T3;
typedef struct { s32 a, b, c; } R3;

void func_80286FB4(T3 *a0, T2 *a1) {
    s32 one = 1;
    s32 x = a0->a;
    s32 y = a0->b;
    s32 z = a0->c;
    void *p;
    R3 *q = (R3 *)D_800F4EE0;
    D_800F5258 = 0;
    D_800F526C = one;
    D_800F5270 = 0;
    p = D_80236DF0(&D_800D6338, x, y, z);
    if (p != 0) {
        a1->p = p;
    }
    *q = *(R3 *)((u8 *)p + 4);
}
