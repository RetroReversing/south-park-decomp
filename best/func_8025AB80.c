extern f32 D_800A9750;
extern f32 D_800A9754;
extern f32 D_800A9758;
extern f32 D_800A975C;
extern f32 D_800AA55C;

extern f32 func_8026AE9C(f32);
extern f32 func_8029A900(f32);
extern f32 func_8029AA80(f32);

typedef struct {
    f32 x, y, z, w;
} Vec4;

typedef struct {
    f32 unkC;
    f32 unk10;
} Node;

void func_8025AB80(u8 *arg0, Vec4 arg1, f32 d, f32 *out)
{
    f32 len;
    f32 spread;
    f32 val;
    Node *p;
    f32 f;

    D_802131C4(&arg1.x, (Vec4 *)&arg1.y, 0.0f);
    len = func_8029AA80(arg1.x * arg1.x + arg1.y * arg1.y + arg1.z * arg1.z);
    spread = len;
    if (spread < *(f32 *)(arg0 + 0x14)) {
        spread = D_800AA55C - func_8026AE9C(spread / *(f32 *)(arg0 + 0x14));
    }
    p = (Node *)(arg0 + 0x18);
    if (*(s32 *)p == 0) {
        val = -p->unkC;
    } else if (*(s32 *)p == 1) {
        val = func_8029A900(p->unk10 * D_800A9754) * p->unkC;
    } else {
        val = 0.0f;
    }
    out[0] += val * spread;
    p = (Node *)(arg0 + 0x2C);
    if (*(s32 *)p == 0) {
        val = -p->unkC;
    } else if (*(s32 *)p == 1) {
        val = func_8029A900(p->unk10 * D_800A9758) * p->unkC;
    } else {
        val = 0.0f;
    }
    out[1] += val * spread;
    p = (Node *)(arg0 + 0x40);
    if (*(s32 *)p == 0) {
        val = -p->unkC;
    } else if (*(s32 *)p == 1) {
        val = func_8029A900(p->unk10 * D_800A975C) * p->unkC;
    } else {
        val = 0.0f;
    }
    out[2] += val * spread;
}
