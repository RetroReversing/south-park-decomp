extern f32 D_800A9F18;
extern f32 D_800A9F1C;
extern f32 D_800A9F20;
extern f32 D_800A9F24;
extern f32 D_800A9F28;
extern f32 D_800A9F2C;
extern f32 D_800B2138;
extern s16 D_800F1E68[];

void *func_802705AC(void *a0, s16 a1);
u16 func_8027E358(f32 a0);
f32 D_802156CC(f32 a0);

typedef struct {
    char pad0[0x70];
    u16 f70;
    u16 f72;
    u16 f74;
    s16 f76;
} Shooter;

void func_80270F68(u8 *a0, u8 *a1)
{
    Shooter *s0 = (Shooter *)a0;
    u8 *sub = (u8 *)a0 + 0x10;
    u8 *node = *(u8 **)((u8 *)a0 + 0xB0);
    u8 *s3 = *(u8 **)(node + 0x278C);
    s16 idx = *(s16 *)(a1 + 0x8);
    f32 fs0, fs1, k;
    f32 a, b;
    u8 *q;
    s32 t;
    s32 t0;
    s32 t1;
    s32 v;

    if (idx != -1) {
        u8 *p = func_802705AC(node, idx);
        *(s32 *)&s0->f70 = *(s32 *)(p + 0);
        *(s32 *)&s0->f74 = *(s32 *)(p + 4);
        *(s32 *)((u8 *)s0 + 0x78) = *(s32 *)(p + 8);
    } else {
        s0->f70 = func_8027E358((f32)*(s8 *)(a1 + 0xF));
    }

    if (!(*(u16 *)(a1 + 0x6) & 0x800) && *(s32 *)((u8 *)a0 + 0xAC) != 1 &&
        *(s32 *)(*(u8 **)((u8 *)a0 + 0xB0) + 0x279C) != 0) {
        f32 dist;

        a = (f32)s3[0] * D_800A9F18;
        b = (f32)s3[1] * D_800A9F18;
        fs0 = D_800A9F1C;
        if (a != D_800A9F1C) {
            fs0 = a;
            if (b != a) {
                fs0 = a + D_802156CC(b - a);
            }
        }
        q = *(u8 **)(*(u8 **)((u8 *)a0 + 0xB0) + 0x279C);
        fs1 = *(f32 *)(sub + 0x30) - *(f32 *)(q + 0x134);
        fs1 = fs1 * fs1;
        k = *(f32 *)(sub + 0x34) - *(f32 *)(q + 0x138);
        k = k * k;
        dist = *(f32 *)(sub + 0x38) - *(f32 *)(q + 0x13C);
        dist = dist * dist;
        dist = fs1 + k + dist;
        fs1 = 0.0f;
        if (!(dist >= D_800B2138)) {
            fs1 = D_800A9F20 - (dist / D_800B2138);
        }
        k = D_800A9F24 - fs1;
        t = *(s8 *)(sub + 0x40);
        if (t == 1) {
            fs1 = k * k;
            fs1 = D_800A9F28 - fs1;
        } else if (t == 0) {
            fs1 = D_800A9F28 - k;
        } else if (t == 2) {
            fs1 = k * k * k;
            fs1 = D_800A9F28 - fs1;
        } else {
            fs1 = D_800A9F28 - fs1;
        }
        *(f32 *)(sub + 0x1C) = fs1;
    } else {
        *(f32 *)(sub + 0x1C) = D_800A9F2C;
    }

    if (*(u16 *)(a1 + 0x6) & 4) {
        *(s32 *)(sub + 0x8) = (s32)func_8027E368(s0->f70);
        fs1 = func_8027E368(s0->f72);
        fs1 = fs1 - func_8027E368(s0->f74);
        *(f32 *)((u8 *)a0 + 0x80) = fs1 / (f32)s0->f76;
        *(f32 *)((u8 *)a0 + 0x7C) = func_8027E368(s0->f72);
        t0 = (s32)func_8027E368(s0->f70);
        if (t0 >= 0) {
            t1 = t0 * 2;
        } else {
            t1 = -t0 * 2;
        }
        *(s32 *)(sub + 0x8) = (s32)((f32)(s32)(D_800F1E68[t1] * *(f32 *)((u8 *)a0 + 0x7C)) * fs0);
        if (t0 < 0) {
            t1 = -t0 * 2;
        } else {
            t1 = t0 * 2;
        }
        s0->f70 = func_8027E358(D_800F1E68[t1] * fs0);
        *(s32 *)(sub + 0xC) = (s32)func_8027E368(s0->f70 & 0xFFFF);
    } else {
        t0 = (s32)func_8027E368(s0->f70);
        if (t0 < 0) {
            t1 = -t0 * 2;
        } else {
            t1 = t0 * 2;
        }
        v = (s32)(D_800F1E68[t1] * fs0);
        *(s32 *)(sub + 0x8) = v;
        *(s32 *)(sub + 0xC) = v;
    }
}
