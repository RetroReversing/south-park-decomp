extern f32 D_800A9CF8;
extern f32 D_800A9CF8_4;
extern f64 D_800A9D00;
extern f32 D_800A9D08;
extern f32 D_800A9D08_4;
void func_802672DC(void *arg0, void *arg1, f32 a, f32 b, s32 c, s32 d, f32 e, f32 f);

void func_80269214(u8 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
char *__repair_addr;

    f32 fs1, fs0, fv0f, fv1f;
    f32 r, x;
    s32 i, j;
    u8 *p;
    f64 d;

    fv1f = D_800A9CF8_4;
__repair_addr = (char *)(arg0 + 2);

    fs1 = (f32)*(u16 *)(__repair_addr) - fv1f;
    if ((f32)*(u16 *)(arg0 + 2) == 0.0f) {
        return;
    }
    d = D_800A9D00;
    p = arg0 + 8;
    r = arg1;
    do {
        fs0 = (f32)*(u16 *)(arg0 + 0) - fv1f;
        x = arg2;
        if ((f32)*(u16 *)(arg0 + 0) != 0.0f) {
            do {
                i = *(s32 *)(p + 0);
                j = *(s32 *)(p + 4);
                func_802672DC(p + 8, p + (i * j) * 2 + 8, x, fs1, i, j, arg3, arg4);
                {
                    f32 t = fs0;
                    fs0 -= D_800A9D08;
                    p += (i * j) * 2 + (i * j) / 2 + 8;
                    x += (f32)(f64)i * arg3;
                    if (t == 0.0f) break;
                }
            } while (1);
        }
        {
            f32 t2 = fs1;
            fs1 -= D_800A9D08_4;
            r += (f32)(f64)j * arg4;
            if (t2 == 0.0f) break;
        }
    } while (1);
}
