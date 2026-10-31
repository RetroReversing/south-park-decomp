typedef struct { char pad[0x14]; void *p; } A0;
typedef struct { char pad[0x33]; s8 mode; char p34[0x2C]; f32 value60; char p64[0x24]; s32 x88,y8c,z90; char p94[0xC4]; f32 rate158; } A1;
typedef struct { char pad[0x4C]; f32 x,y,z,v; } P;
typedef struct { f32 a,b,c,d; } V4;
extern f32 D_800A927C, D_800A9280;
void D_802131C4(void *, s32, void *);
void D_80213224(void *, f32, void *, f32 *);
void D_80213AF4(void *, void *, void *);
void D_8021483C(void *, f32);
f32 D_80215964(f32, f32, s32);
f32 D_80299AE8(f32);
f32 func_8029A900(f32);
f32 func_8029AA80(f32);
void func_8024B4A0(A0 *a0, A1 *a1, s32 mode, s32 *arg3) {
    char reserve[0x38];
    P *p = (P *)((char *)a0->p + 0x14);
    f32 speed = p->y;
    f32 limit = a1->value60;
    f32 ratio;
    f32 tmp;
    f32 x,y,z;
    f32 target;
    f32 zero = 0.0f;
    V4 vec1, vec2, vec3;
    reserve[0] = 0;
    if (speed == 0.0f) {
        if (p->x == 0.0f) ratio = zero;
        else goto calc_ratio;
    } else {
calc_ratio:
        ratio = p->v / func_8029AA80(speed * speed + p->x * p->x);
    }
    if (mode == 1) {
        tmp = ratio;
        if (a1->mode == mode) tmp = -tmp;
        tmp = D_80215964(a1->rate158, tmp, 0x3E800000);
        limit += tmp;
        a1->rate158 = tmp;
        if (a1->mode == 0) {
            if (limit > D_800A927C) { a1->rate158 = 0.0f; a1->mode = mode; }
        } else if (limit < 0.0f) { a1->rate158 = 0.0f; a1->mode = 0; }
    } else if (mode == 2) {
        if (arg3) {
            target = 0.0f;
            if (p->z != 0.0f) {
                D_802131C4(&vec1, (s32)(arg3+1), &a1->x88);
                D_8021483C(&vec2, -p->z);
                D_80213AF4(&vec2, &vec1, &vec3);
                target = vec3.c / p->y;
            }
            tmp = target - limit;
            if (tmp > ratio) tmp = ratio;
            else if (tmp < -ratio) tmp = -ratio;
            tmp = D_80215964(a1->rate158, tmp, 0x3E800000);
            limit += tmp;
            a1->rate158 = tmp;
        }
    }
    if (limit > D_800A9280) limit = D_800A9280;
    if (limit < 0.0f) limit = 0.0f;
    a1->value60 = limit;
    x = a1->x88; y = a1->y8c; z = a1->z90;
    x += p->y * func_8029A900(p->z);
    y += p->x;
    z += p->y * D_80299AE8(p->z);
    D_80213224((char *)a1+0x50, limit, (char *)a1+0x88, &x);
}
