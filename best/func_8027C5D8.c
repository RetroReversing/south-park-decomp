#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef struct Node Node;
typedef struct Obj Obj;
typedef struct Ctx Ctx;
typedef struct Obj2 Obj2;

struct Obj2 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    char pad10[0x2C];
    f32 unk3C;
    char pad40[0x8];
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    f32 unk58;
    char pad5C[4];
    f32 unk60;
};

struct Node {
    f32 x;
    f32 y;
    f32 z;
    u16 u0C;
    u16 flags;
    char pad0E[2];
    Node *unk10;
    Node *unk14;
    Node *unk18;
};

struct Ctx {
    Obj2 *node;
    Node *a;
    Node *b;
    char pad0C[0x2C];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    char pad4C[0x4];
    f32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    Node *unk6C;
    s32 unk70;
    f32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
};

extern Ctx *D_800F4820;
extern f32 D_800AA1C8;
extern u8 D_801029B0[];
void *func_80278A3C();

void func_8027C5D8(Node *arg0) {
    s32 i;
    Ctx *g;
    u8 flags0, flags1, flags2;
    Node *n, *n1, *n2;
    f32 t, a, b;

    if ((u32)arg0 >= (u32)D_801029B0) return;
    i = 0;
    flags0 = 0;
    flags1 = 0;
    flags2 = 0;
    while (i < 3) {
        g = D_800F4820;
        n = (&arg0->unk10)[i];
        g->unk6C = n;
        if (n != 0) {
            if (!(n->flags & 0x8000)) {
                if (!(arg0->flags & 0x20)) {
                    g->unk6C = func_80278A3C(g->node, arg0, i, &g->node->unk48);
                } else if (n->unk10 != arg0 && n->unk14 != arg0 && n->unk18 != arg0) {
                    i++;
                    continue;
                }
            } else {
                i++;
                continue;
            }
        }
        g = D_800F4820;
        n = g->unk6C;
        n1 = g->a = (&arg0->unk10)[i];
        n2 = g->b = (&arg0->unk10)[i != 2 ? i + 1 : 0];
        if (n1->x <= g->unk74 && n2->x <= g->unk74) { i++; continue; }
        if (g->unk7C <= n1->x && g->unk7C <= n2->x) { i++; continue; }
        if (n1->z <= g->unk78 && n2->z <= g->unk78) { i++; continue; }
        if (g->unk80 <= n1->z && g->unk80 <= n2->z) { i++; continue; }
        if (n != 0) {
            func_8027C5D8(n);
            i++;
            continue;
        }
        g->unk3C = n2->z - n1->z;
        g->unk44 = n1->x - n2->x;
        a = g->node->unk4 - n1->x;
        g->unk48 = a;
        t = g->unk3C * a;
        a = g->node->unkC - n1->z;
        t += g->unk44 * a;
        g->unk50 = a;
        g->unk5C = t;
        if (!(t >= 0.0f)) { i++; continue; }
        b = g->node->unk58;
        g->unk40 = -g->node->unk60;
        g->unk48 = b;
        a = n2->x - n1->x;
        b = g->unk40 * a;
        a = (n2->z - n1->z) * g->unk48;
        b = b + a;
        g->unk60 = b;
        if (b >= 0.0f) { i++; continue; }
        g->unk70 = 0;
        if (flags0 == 0) { flags0 = 1; }
        (void)flags1; (void)flags2;
    }
}
