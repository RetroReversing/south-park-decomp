extern f32 D_800A9E50;
extern f32 D_800A9E54;
extern f32 D_800A9E58;
extern s32 *D_800B1E58;
extern f32 D_800F1548[3];
extern f32 D_800F154C;
extern s32 D_800F1550;

void D_802131C4(f32 *dst, s32 *a, s32 *b);
void D_80213274(s32 *dst, s32 *a, s32 *b);

typedef struct {
    f32 x, y, z;
} Vec;

s32 func_8026C100(s32 *arg0, s32 *arg1, s32 *arg2, f32 *arg3) {
    f32 sp10[4];
    f32 sp20[4];
    f32 sp30[4];
    f32 sp40[4];
    f32 sp50[4];
    f32 sp60[4];
    f32 d;
    f32 n;
    s32 r;
    s32 *q;

    if (arg0 == NULL) {
        D_800F1548[0] = 0.0f;
        D_800F154C = D_800A9E50;
        D_800F1550 = 0;
    } else if ((void *)arg0 != D_800B1E58) {
        D_802131C4(sp50, arg0 + 2, arg0 + 1);
        D_802131C4(sp60, arg0 + 3, arg0 + 2);
        D_80213274((s32 *)D_800F1548, (s32 *)sp50, (s32 *)sp60);
    }
    D_800B1E58 = arg0;
    *(Vec *)sp10 = *(Vec *)D_800F1548;
    D_802131C4(sp20, arg2, arg1);
    if (arg0 != NULL) {
        q = (s32 *)arg0[1];
        *(Vec *)sp30 = *(Vec *)q;
    } else {
        sp30[2] = 0.0f;
        sp30[1] = 0.0f;
        sp30[0] = 0.0f;
    }
    d = sp10[0] * sp20[0] + sp10[1] * sp20[1] + sp10[2] * sp20[2];
    if (d >= 0.0f) {
        *arg3 = D_800A9E54;
        return 0;
    }
    D_802131C4(sp40, arg1, (s32 *)sp30);
    n = -(sp10[0] * sp40[0] + sp10[1] * sp40[1] + sp10[2] * sp40[2]) / d;
    *arg3 = n;
    r = 0;
    if (n > 0.0f) {
        if (n < D_800A9E58) {
            r = 1;
        }
    }
    return r;
}
