typedef struct { s32 a; s32 b; s32 c; } Row3;
extern Row3 D_800F5298[4];
void func_8028C438(void)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        D_800F5298[i].a = 0;
        D_800F5298[i].b = -1;
        D_800F5298[i].c = -1;
    }
}
