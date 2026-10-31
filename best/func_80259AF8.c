extern s16 D_80203A94(void *list, s32 id);
extern s32 D_80204858(void *list, s16 id);
extern void D_8021E930(void *slot, void *p);
extern void D_8021E710(void *slot, void *p);

extern f32 D_800A9710;
extern f32 D_800A9714;
extern u8 D_800AB9F7;
extern char D_800CCA80;
extern void D_800F13B0(void);

typedef struct {
    char pad0[8];
    s32 *p8;
    char pad1[0x10];
    s32 *p1C;
} Head;

typedef struct {
    s16 id;          /* 0x0 */
    s16 mode;        /* 0x2 */
    s32 a4;          /* 0x4 */
    s32 a8;          /* 0x8 */
    s32 aC;          /* 0xC */
    s32 a10;         /* 0x10 */
    void *fn;        /* 0x14 */
    s32 a18;         /* 0x18 */
    s32 a1C;
    s32 a20;
    s32 a24;
    s32 a28;
    s32 a2C;
    s32 a30;
    s32 a34;
    char pad38[0x138 - 0x38];
    s32 b138;
    f32 b13C;
    s32 b140;
    s32 b144;
    s32 b148;
    f32 b14C;
    f32 b150;
    f32 b154;
    f32 b158;
    f32 b15C;
    f32 b160;
    s32 b164;
    s32 b168;
    s32 b16C;
    s32 b170;
    char pad174[0x1AC - 0x174];
    s8 b1AC;
    s8 b1AD;
    char pad1AE[2];
    s32 b1B0;
    s32 b1B4;
    s32 *b1B8;
} Ent;

typedef struct {
    s32 v34;
    s32 v38;
    s32 v3C;
    f32 fx;
    f32 fy;
    f32 fz;
    s32 v4C;
    s32 v50;
} Args;

Ent *func_80259AF8(Head *head, s32 *cnt, s32 id, Args *a) {
    Ent *p;
    s32 v;
    s16 r;
    s32 t;

    r = D_80203A94(&D_800CCA80, id);
    if (r == -1) {
        return NULL;
    }
    p = (Ent *)head->p8;
    if (p != NULL) {
        D_8021E930(&head->p8, p);
        D_8021E710(&head->p1C, p);
        p->a18 = 0;
        p->a1C = 0;
        p->a20 = 0;
        p->a24 = 0;
        p->a28 = 0;
        p->a2C = 0;
        p->a30 = 0;
        p->b1B0 = 0;
        p->b1B4 |= 1;
    }
    if (p == NULL) {
        return NULL;
    }
    v = D_80204858(&D_800CCA80, r);
    p->b1B8 = cnt;
    if (cnt != NULL) {
        *cnt += 1;
    }
    p->fn = &D_800F13B0;
    p->mode = r;
    p->b1B0 = a->v50;
    p->a4 = a->fx;
    p->a8 = a->fy;
    p->aC = a->fz;
    p->b144 = 0;
    p->b148 = 0;
    p->b138 = 0;
    p->b140 = 0;
    p->b13C = D_800A9710;
    p->b14C = a->fx - D_800A9714;
    p->b150 = a->fy - D_800A9714;
    p->b154 = a->fz - D_800A9714;
    p->b158 = a->fx + D_800A9714;
    p->b15C = a->fy + D_800A9714;
    p->b160 = a->fz + D_800A9714;
    p->a34 = v;
    p->b164 = 0;
    p->b170 = 0;
    p->b16C = 0x1A;
    p->a10 = a->v4C;
    p->a18 = a->v34;
    p->a1C = a->v38;
    p->a20 = a->v3C;
    t = D_800AB9F7 - 1;
    p->b1AD = t;
    p->b1AC = t;
    return p;
}
