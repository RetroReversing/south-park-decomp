typedef struct Vec3 { s32 x, y, z; } Vec3;
typedef struct Arg1 {
    char pad0[4];
    s32 *p4;
    s32 *p8;
    s32 *pC;
} Arg1;

extern f32 D_800A9E9C;
extern Arg1 *D_800B1E58;
extern Vec3 D_800F1548;
void D_802131C4(s32 *out, s32 *a, s32 *b);
void D_80213274(Vec3 *out, s32 *a, s32 *b);

Vec3 *func_8026D430(Vec3 *out, Arg1 *arg1) {
    Vec3 *ret = out;
    s32 sp10[4];
    s32 sp20[4];
    Vec3 *v;
    f32 fv;

    if (arg1 == NULL) {
        fv = D_800A9E9C;
        v = &D_800F1548;
        v->x = 0;
        v->z = 0;
        v->y = fv;
    } else if (arg1 != D_800B1E58) {
        D_802131C4(sp10, arg1->p8, arg1->p4);
        D_802131C4(sp20, arg1->pC, arg1->p8);
        D_80213274(&D_800F1548, sp10, sp20);
    }
    v = &D_800F1548;
    ret->x = v->x;
    ret->y = v->y;
    ret->z = v->z;
    D_800B1E58 = arg1;
    return ret;
}
