typedef struct { f32 x, y, z, w; } Vec4;
typedef struct { s32 f0; Vec4 *f4; } Ent;
typedef struct { char pad[0x4C]; s32 flags; void *local; f32 x, y, z; s32 w; s32 unk60; char pad2[0x38]; s32 f9C; } Big;
extern f32 D_800AA180;
extern Ent D_800CDCFC[];
extern u8 D_27AE70[];
extern u8 D_27AEAC[];
void func_8027AFD0(void *, f32, f32, f32);
f32 func_8029AA80(f32);
s32 func_80277D48(void *, void *, f32 *);
s32 func_80277A20(void *, void *, f32 *);
void *D_80210ADC(s32, s32);
s32 D_802422D4(s32);
void func_80259518(void *, s32, s32, void *);
void func_8027AED0(void *);

typedef struct { s32 a, b; } Pair;
typedef struct { void *a; s32 b; } Res;

void func_8027A3B8(Big *s6) {
    s32 i, j, k, n, cnt;
    Vec4 *pa, *pb, *s1;
    Pair *out;
    Vec4 bb;
    f32 f, y; Vec4 *ent;
    f32 v;
    s32 found;
    Res *res;

    if (!(s6->flags & 0x200000)) return;
    if (((u8*)s6)[0x50] == 0) return;
    s1 = s6->local;
    if (s1->x == s6->x && s1->y == s6->y && s1->z == s6->z) return;
    v = s6->x;
    f = s6->z;
    bb.x = v; bb.y = s6->y; bb.z = f; bb.w = 0.0f;
    y = s6->w;
    bb.w = y;
    func_8027AFD0(&out, s1->x, s1->y, s1->z);
    f = -func_8029AA80(s1->x * s1->x + s1->y * s1->y + s1->z * s1->z);
    cnt = 0;
    if (D_800CDCFC[0].f0 > 0 && s6->f9C == 0) {
        for (i = 0; i < D_800CDCFC[0].f0; i++) {
            ent = D_800CDCFC[i].f4;
            if (ent->z < bb.z && bb.x < ent->w) {
                res = D_80210ADC(D_800CDCFC[i].f0, 0);
                if (res->b != -1) {
                    found = 0;
                }
            }
            if (s6->f9C != 0) break;
        }
    }
}
