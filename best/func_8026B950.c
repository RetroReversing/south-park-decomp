typedef struct { f32 x, y, z; } Vec3;

extern void D_802131C4(Vec3 *out, void *a1, void *a2);
extern void D_80213274(Vec3 *out, Vec3 *a1, Vec3 *a2);
extern void D_802132D8(Vec3 *v);
extern void D_802131F8(Vec3 *out, Vec3 *in, f32 s);

extern f32 D_800A9E20;
extern f32 D_800A9E24;
extern f32 D_800A9E28;
extern void *D_800B1E58;
extern Vec3 D_800F1548;

Vec3 *func_8026B950(Vec3 *out, void *p, f32 s) {
    Vec3 a;
    Vec3 b;
    Vec3 t;
    Vec3 r;
    Vec3 res;
    Vec3 base;

    if (p != NULL) {
        base.z = 0.0f;
        base.y = D_800A9E20;
        base.x = 0.0f;
        if (p != D_800B1E58) {
            D_802131C4(&a, *(void **)((char *)p + 8), *(void **)((char *)p + 4));
            D_802131C4(&b, *(void **)((char *)p + 0xC), *(void **)((char *)p + 8));
            D_80213274(&D_800F1548, &a, &b);
        }
        t = D_800F1548;
        D_80213274(&r, &t, &base);
        D_80213274(&a, &t, &r);
        D_802132D8(&a);
        if (0.0f < a.y) {
            D_802131F8(&a, &a, -1.0f);
        }
        base.z = 0.0f;
        base.y = D_800A9E28;
        base.x = 0.0f;
        D_802131F8(&res, &a, a.y * s * D_800A9E24);
    } else {
        res.z = 0.0f;
        res.y = 0.0f;
        res.x = 0.0f;
    }
    out->x = res.x;
    out->y = res.y;
    out->z = res.z;
    return out;
}
