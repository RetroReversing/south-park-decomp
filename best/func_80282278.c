typedef struct { f32 x, y, z; } Vec3;

extern s32 D_800AB9FC;
extern u8 *D_800D7F68;
extern f32 D_800AA338, D_800AA33C, D_800AA340, D_800AA344;
extern f32 D_800AA348, D_800AA34C, D_800AA350, D_800AA354;

extern s32 func_8024E7E8(s32, s32, s32);
extern void func_8024E834(s32, void *);
extern f32 func_8026B290(void *, f32 *, f32 *);
extern void D_8024D9D0(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void D_8020B858(s32);
extern void D_80221864(s32, s32);
extern void D_802131C4(Vec3 *, Vec3 *, Vec3 *);
extern void D_80213274(Vec3 *, Vec3 *, Vec3 *);

typedef struct {
    char pad00[0xC];
    u8 *tex;
    char pad10[0xC];
    f32 u1C;
    f32 u20;
    char pad24[0x1E4];
    f32 u208;
    f32 u20C;
    f32 u210;
} Arg0;

void func_80282278(Arg0 *arg0, char *arg1)
{
char *__repair_addr;

    Vec3 pts[5];
    Vec3 base, pkt1, pkt2, e1, e2, nrm;
    Vec3 t1, t2;
    f32 spE8[3];
    f32 spF8[3];
    Vec3 *pt;
    u8 *tex;
    u8 *pkt;
    u8 *tinfo;
    s32 handle;
    s32 count;
    s32 i, j, k;
    s32 on;
    s32 sp130;
    f32 off, alpha2;
    f32 fs0, fs1, fs1f, fs2;
    u8 col1[3], col2[3];

    handle = func_8024E7E8((s32)(arg0 + 0x14), 0x18, 0);
    if (handle == 0) return;
    func_8024E834(handle, &count);
    if (count == 0) goto cleanup;
    tex = arg0->tex;
    pkt = D_800D7F68;
    *(u32 *)pkt = 0xE7000000;
__repair_addr = (char *)(pkt + 4);

    *(u32 *)(__repair_addr) = 0;
    tinfo = (u8 *)&count; /* placeholder, replaced below */
    tinfo = (u8 *)&t1;
    tinfo = (u8 *)&col1; /* placeholder */
    tinfo = (u8 *)&col2;
    tinfo = (u8 *)&sp130;
    tinfo = (u8 *)(&pts[0]);
    tinfo = 0;
    {
        u8 *info;
        info = (u8 *)&count + 0; /* placeholder */
        info = (u8 *)0;
        (void)info;
    }
    fs1f = D_800AA338;
    fs0 = arg0->u210;
    on = 1;
    if (!(*(f32 *)(arg1 + 0x270) <
          (*(f32 *)(arg1 + 0x27C) + *(f32 *)(arg1 + 0x288) +
           *(f32 *)(arg1 + 0x294) + *(f32 *)(arg1 + 0x2A0)) * D_800AA33C))
        on = 0;
    for (i = 0; i < 5; i++) {
        pts[i].x = *(f32 *)(arg1 + 0x26C + i * 0xC);
        pts[i].y = *(f32 *)(arg1 + 0x270 + i * 0xC);
        pts[i].z = *(f32 *)(arg1 + 0x274 + i * 0xC);
    }
    spE8[0] = pts[0].x; spE8[1] = fs0; spE8[2] = pts[0].z;
    for (i = 1; i < 5; i++) {
        pt = &pts[i];
        spF8[0] = pt->x; spF8[1] = fs0; spF8[2] = pt->z;
        off = func_8026B290(arg1 + 0x2F8, spE8, spF8);
        if (off >= 0.0f && off < D_800AA340) {
            pt->y = fs0;
            pt->x = pts[0].x + off * (pt->x - pts[0].x);
            pt->z = pts[0].z + off * (pt->z - pts[0].z);
        }
    }
    sp130 = (s32)fs0;
    fs1 = D_800AA344;
    fs2 = 0.0f;
    for (j = 0; j < 4; j++) {
        switch (j) {
        case 0:
            t1 = pts[1]; t2 = pts[3];
            break;
        case 1:
            t1 = pts[3]; t2 = pts[4];
            break;
        case 2:
            t1 = pts[4]; t2 = pts[2];
            break;
        default:
            t1 = pts[2]; t2 = pts[1];
            break;
        }
        base = pts[0];
        for (i = 0; i < 3; i++) {
            f32 *v = (f32 *)((u8 *)&base + i * 0xC);
            v[0] -= t1.x * fs1;
            v[2] -= t1.z * fs1;
            v[0] += arg0->u1C;
            v[2] += arg0->u20;
        }
        pkt1 = base; pkt2 = t1;
        D_802131C4(&e1, &pkt1, &t1);
        D_802131C4(&e2, &t2, &pkt2);
        D_80213274(&nrm, &e1, &e2);
        if (nrm.y <= fs2) {
            if (on != 1) goto next;
        } else if (on == 0) {
            goto next;
        }
        {
            f32 mx, mn;
            f32 tz;
            mx = 0.0f; mn = 0.0f; tz = 0.0f;
            (void)mx; (void)mn; (void)tz;
        }
next:
        ;
    }
cleanup:
    D_80221864(0, handle);
}
