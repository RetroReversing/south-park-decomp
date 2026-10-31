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
struct Node {
    char pad0[4];
    Node *next;  /* 0x4 */
    f32 f8;      /* 0x8 */
    f32 fC;      /* 0xC */
    s32 s10;     /* 0x10 */
    s32 s14;     /* 0x14 */
    s32 s18;     /* 0x18 */
    u8 b1C;      /* 0x1C */
    char pad1D[3];
    s32 s20;     /* 0x20 */
};

typedef struct {
    char pad0[0xFFC];
    Node *n;     /* 0xFFC */
} GObj;

typedef struct {
    char pad0[0x510];
    s8 flag;     /* 0x510 */
    char pad1[0xDD0 - 0x511];
    Node *list;  /* 0xDD0 */
} Arg1;

extern f32 D_800A9A44;
extern f32 D_800A9A48;

void *func_8026021C();
void *D_8021E930(Node **, Node *);
void *D_8021E76C(Node **, Node *);

Node *func_8025FEC4(GObj *arg0, Arg1 *arg1, s32 arg2, s32 arg3, f32 arg4) {
    Node *n;
    Node *m;
    Node **p;

    n = arg1->list;
    while (n != NULL) {
        if (n->s18 == arg3) {
            break;
        }
        n = n->next;
    }
    if (n == NULL) {
        if (arg1->flag != 0) {
            m = arg0->n;
            if (m != NULL) {
                func_8026021C(m);
                D_8021E930(&arg0->n, m);
                D_8021E76C(&arg0->n, m);
                n = m;
            } else {
                m = arg1->list;
                if (m != NULL) {
                    func_8026021C(m);
                    D_8021E930(&arg1->list, m);
                    D_8021E76C(&arg1->list, m);
                    n = m;
                }
            }
        }
        if (n != NULL) {
            n->s10 = 1;
            n->b1C = 0;
            n->s20 = arg2;
            n->s14 = 0;
            n->s18 = -1;
            n->fC = D_800A9A44;
        }
    }
    if (n != NULL) {
        if (n->s10 == 2) {
            n->f8 = n->fC;
        }
        arg4 = arg4 * D_800A9A48;
        n->s20 = arg2;
        n->s18 = arg3;
        n->fC = arg4;
    }
    return n;
}
