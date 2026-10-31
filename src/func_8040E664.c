typedef struct Node { s32 flags; f32 val; char pad[0xC]; } Node;
extern Node D_800CA650;
extern s32 D_8010E7C8, D_8010E7D0, D_8010E7D8, D_8010E7DC, D_8010E7E0;
extern f32 D_8010E7D4;
extern s32 D_8010E7CC;

void func_8040E664(void) {
    Node *base;
    Node *t;
    s32 f;
    f32 v;

    D_8010E7E0 = 1;
    base = &D_800CA650;
    D_8010E7C8 = (s32)base;
    D_8010E7D0 = 0;
    D_8010E7CC = 0;
    D_8010E7D8 = 0xB4;
    D_8010E7DC = 0;
    t = base;
    f = t->flags;
    if (!(f & 2)) {
        do {
            t = t + 1;
        } while (!(t->flags & 2));
    }
    v = t->val;
    D_8010E7D4 = v;
}
