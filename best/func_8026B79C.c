typedef struct Vec { f32 x, y, z; } Vec;

extern f32 D_800A9E1C;
extern Vec D_800F1528;
extern s32 D_800B1E50;
extern void D_80213274(f32 *);

typedef struct Unk { char pad[4]; Vec *a; Vec *b; Vec *c; } Unk;

f32 func_8026B79C(Unk *arg0, f32 arg1, f32 arg2) {
    Vec d1;
    Vec d2;
    Vec v;
    Vec temp;

    if (arg0 == NULL) {
        return 0.0f;
    }
    if (arg0 != (Unk *)D_800B1E50) {
        d1.x = arg0->b->x - arg0->a->x;
        d1.y = arg0->b->y - arg0->a->y;
        d1.z = arg0->b->z - arg0->a->z;
        d2.x = arg0->c->x - arg0->b->x;
        d2.y = arg0->c->y - arg0->b->y;
        d2.z = arg0->c->z - arg0->b->z;
        D_80213274((f32 *)&D_800F1528);
    }
    v = ((Vec *)((s8 *)&D_800F1528 + 0))[0];
    D_800B1E50 = (s32)arg0;
    if (v.y != 0.0f) {
        temp = *arg0->a;
        return (((temp.y - arg2) * v.z) + ((temp.x - arg1) * v.x) + (temp.z * v.y)) / v.y;
    }
    return (arg0->a->z + arg0->b->z + arg0->c->z) * D_800A9E1C;
}
