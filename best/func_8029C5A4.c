extern s32 D_800B3A80;
extern u8 D_800F62D8[];
extern u8 D_800F62E0[];

void func_8029D588(void *a, void *b, s32 c);
void func_8029DDA0(void *a, s32 b, s32 c);
void func_8029DC78(void *a, void *b, s32 c);

void func_8029C5A4(void) {
    s32 sp10;
    s32 *p = &D_800B3A80;

    if (*p == 0) {
        *p = 1;
        func_8029D588(D_800F62E0, D_800F62D8, 1);
        func_8029DDA0(D_800F62E0, 0, 0);
    }
    func_8029DC78(D_800F62E0, &sp10, 1);
}
