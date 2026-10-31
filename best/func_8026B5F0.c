typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Node {
    char pad0[4];
    void *unk4;   /* 0x4 */
    void *unk8;   /* 0x8 */
    void *unkC;   /* 0xC */
} Node;

extern f32 D_800A9E14;
extern f32 D_800A9E18;
extern void *D_800B1E50;
extern void *D_800B1E54;
extern Vec3 D_800F1528;
extern f32 D_800F152C;
extern s32 D_800F1530;
extern Vec3 D_800F1538;

void D_80213274(Vec3 *out, Vec3 *a, Vec3 *b);
void D_802132D8(Vec3 *v);

Vec3 *func_8026B5F0(Vec3 *out, Node *node) {
    Vec3 a;
    Vec3 b;

    if (node == NULL) {
        D_800F1538.x = 0.0f;
        D_800F1538.y = D_800A9E14;
        D_800F1538.z = 0.0f;
    } else if (node != D_800B1E54) {
        if (node == NULL) {
            D_800F1528.x = 0.0f;
            D_800F1528.y = D_800A9E18;
            D_800F1528.z = 0.0f;
        } else if (node != D_800B1E50) {
            a.x = ((Vec3 *)node->unk8)->x - ((Vec3 *)node->unk4)->x;
            a.y = ((Vec3 *)node->unk8)->y - ((Vec3 *)node->unk4)->y;
            a.z = ((Vec3 *)node->unk8)->z - ((Vec3 *)node->unk4)->z;
            b.x = ((Vec3 *)node->unkC)->x - ((Vec3 *)node->unk8)->x;
            b.y = ((Vec3 *)node->unkC)->y - ((Vec3 *)node->unk8)->y;
            b.z = ((Vec3 *)node->unkC)->z - ((Vec3 *)node->unk8)->z;
            D_80213274(&D_800F1528, &b, &a);
        }
        D_800B1E50 = node;
        D_800F1538 = D_800F1528;
        D_802132D8(&D_800F1538);
    }
    *out = D_800F1538;
    D_800B1E54 = node;
    return out;
}
