extern f32 D_800AA168;

void func_80279454(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x4) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(f32 *)arg0 = D_800AA168;
}

void func_80279478(void *arg0, void *arg1) {
    s32 *p;
    p = *(s32 **)((s8 *)arg0 + 0x2C);
    if (p != NULL) {
        s32 *s = (s32 *)((s8 *)arg1 + 4);
        s32 a = s[0];
        s32 b = s[1];
        s32 c = s[2];
        p[0] = a;
        p[1] = b;
        p[2] = c;
    }
    p = *(s32 **)((s8 *)arg0 + 0x30);
    if (p != NULL) {
        p[0] = *(s32 *)((s8 *)arg1 + 0x10);
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

void func_8027A1EC(void *arg0, void *arg1, f32 arg2) {
    s32 *d = arg0;
    s32 *s = arg1;
    f32 sq = arg2 * arg2;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    *(f32 *)((s8 *)arg0 + 0xC) = arg2;
    *(f32 *)((s8 *)arg0 + 0x10) = sq;
}

void func_8027C578(void *arg0, void *arg1) {
    s32 *a = arg0;
    s32 *b = arg1;
    s32 t0, t1;
    t0 = a[0];
    t1 = a[1];
    b[0] = t0;
    b[1] = t1;
    t0 = b[0];
    t1 = b[1];
    a[0] = t0;
    a[1] = t1;
}
