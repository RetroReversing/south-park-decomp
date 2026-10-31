extern f32 D_800AA168;

void func_80279454(void *arg0) {
    f32 c = D_800AA168;
    *(s32 *)((s8 *)arg0 + 0x4) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(f32 *)arg0 = c;
}

void func_80279478(void *arg0, void *arg1) {
    s32 *p;
    p = *(s32 **)((s8 *)arg0 + 0x2C);
    if (p != NULL) {
        p[0] = *(s32 *)((s8 *)arg1 + 0x4);
        p[1] = *(s32 *)((s8 *)arg1 + 0x8);
        p[2] = *(s32 *)((s8 *)arg1 + 0xC);
    }
    p = *(s32 **)((s8 *)arg0 + 0x30);
    if (p != NULL) {
        s32 a = *(s32 *)((s8 *)arg1 + 0x10);
        p[0] = a;
    }
    p = *(s32 **)((s8 *)arg0 + 0x34);
    if (p != NULL) {
        p[0] = *(s32 *)((s8 *)arg0 + 0x38);
    }
    p = *(s32 **)((s8 *)arg0 + 0x3C);
    if (p != NULL) {
        p[0] = *(s32 *)((s8 *)arg0 + 0x40);
    }
}

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct {
    Vec3i pos;
    f32 a;
    f32 b;
} Vec5;

void func_8027A1EC(Vec5 *arg0, Vec3i *arg1, f32 arg2) {
    f32 sq = arg2 * arg2;
    arg0->pos = *arg1;
    arg0->a = arg2;
    arg0->b = sq;
}

void func_8027C578(void *arg0, void *arg1) {
    s32 *a = arg0;
    s32 *b = arg1;
    s32 t0 = a[0];
    s32 t1 = a[1];
    a[0] = b[0];
    a[1] = b[1];
    b[0] = t0;
    b[1] = t1;
}
