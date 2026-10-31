typedef struct P { f32 x, y, z; } P;
typedef struct Node {
    char pad[4];
    P *a;   /* 0x4 */
    P *b;   /* 0x8 */
    P *c;   /* 0xC */
} Node;

extern f32 D_800A9E5C;
extern f32 D_800A9E60;
extern Node *D_800B1E50;
extern P D_800F1528;

void D_802131C4(P *dst, P *a, P *b);
void D_80213274(P *out);

s32 func_8026C2F8(Node *arg0, P *arg1, P *arg2, f32 *arg3)
{
    P sp10, sp20, sp30, sp40;
    P v1, v2;
    f32 d;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != D_800B1E50) {
        v1.x = arg0->b->x - arg0->a->x;
        v1.z = arg0->b->z - arg0->a->z;
        v1.y = arg0->b->y - arg0->a->y;
        v2.x = arg0->c->x - arg0->b->x;
        v2.z = arg0->c->z - arg0->b->z;
        v2.y = arg0->c->y - arg0->b->y;
        D_80213274(&D_800F1528);
    }
    D_800B1E50 = arg0;
    sp10 = D_800F1528;
    D_802131C4(&sp20, arg2, arg1);
    d = (sp10.x * sp20.x) + (sp10.y * sp20.y) + (sp10.z * sp20.z);
    sp30.x = arg0->a->x;
    sp30.z = arg0->a->z;
    sp30.y = arg0->a->y;
    if (d >= 0.0f) {
        *arg3 = D_800A9E5C;
        return 0;
    }
    D_802131C4(&sp40, arg1, &sp30);
    d = -((sp10.x * sp40.x) + (sp10.y * sp40.y) + (sp10.z * sp40.z)) / d;
    *arg3 = d;
    if (d > 0.0f && d < D_800A9E60) {
        return 1;
    }
    return 0;
}
