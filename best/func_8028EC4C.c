extern s32 *D_800B3628;
extern s32 D_800D7910;
extern f32 D_800ABA00;
extern f32 D_800AAA80;
extern f32 D_800AAA84;
extern f32 D_800AAA88;
extern f32 D_800AAA8C;
extern void func_80221948(s32);
void func_8028EC4C(void) {
    s32 *p = D_800B3628;
    if (p[0xA] != 0) {
        if (p[2] != 0) p[2] = 0;
        if (p[0] != 0) {
            func_80221948(0);
            p = D_800B3628;
        }
        p[0] = 0;
        p[1] = 0;
        p[0xA] = 0;
    }
}
