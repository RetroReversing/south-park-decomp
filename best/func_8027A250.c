extern f32 D_800AA178;
s32 func_8029AA80(f32 a, f32 b);

typedef struct { f32 x; char pad[4]; f32 z; } SVec;

s32 func_8027A250(SVec *a0, SVec *a1, SVec *a2) {
    f32 dx, dz, ox, oz, len, t, half, d, nx, nz;
    f32 qx, qz, rad;

    dx = a2->x - a1->x;
    dz = a2->z - a1->z;
    ox = a0->x - a1->x;
    oz = a0->z - a1->z;
    len = dx * dx + dz * dz;
    func_8029AA80(ox, oz);
    if (oz == 0.0f) {
        return 0;
    }
    t = D_800AA178 / oz;
    dx *= t;
    dz *= t;
    half = ox * dx + oz * dz;
    nx = ox - dx * half;
    nz = oz - dz * half;
    qx = nx * nx;
    qz = nz * nz;
    rad = qx + qz;
    if (!(a0->x - rad > 0.0f)) {
        return 0;
    }
    d = func_8029AA80(half, t);
    d = (d - half) * t;
    if (!(d >= 0.0f)) {
        return 0;
    }
    if (d <= D_800AA178) {
        return 1;
    }
    return 0;
}
