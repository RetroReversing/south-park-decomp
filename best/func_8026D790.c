typedef struct V3 { f32 x, z, y; } V3;
typedef struct Node { char pad[4]; V3 *p4; V3 *p8; V3 *pC; } Node;

extern f32 D_800A9EB0;
extern Node *D_800B1E50;
extern V3 D_800F1528;

void func_80213274(V3 *out, V3 *a, V3 *b);

V3 *func_8026D790(V3 *out, Node *arg1) {
    V3 a, b;
    if (arg1 == NULL) {
        D_800F1528.x = 0.0f;
        D_800F1528.z = D_800A9EB0;
        D_800F1528.y = 0.0f;
    } else if (arg1 != D_800B1E50) {
        a.x = arg1->p8->x - arg1->p4->x;
        a.z = arg1->p8->z - arg1->p4->z;
        a.y = arg1->p8->y - arg1->p4->y;
        b.x = arg1->pC->x - arg1->p8->x;
        b.z = arg1->pC->z - arg1->p8->z;
        b.y = arg1->pC->y - arg1->p8->y;
        func_80213274(&D_800F1528, &b, &a);
    }
    *out = D_800F1528;
    D_800B1E50 = arg1;
    return out;
}
