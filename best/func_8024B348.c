typedef struct Vec3 { f32 x, y, z; } Vec3;

f32 func_8029A900(f32);
f32 D_80299AE8(f32);
void D_80215200(void *, void *, void *);
void D_802153AC(void *, void *);
void D_802145E4(void *, s32, s32, s32);
void D_802137A8(void *, s32);
void D_802145B0(void *, s32, s32, s32);
void D_80214ED4(void *);

extern f32 D_800A9270;
extern f32 D_800A9274;
extern f32 D_800A9278;
extern f32 D_800DD974;

void func_8024B348(u8 *arg0, u8 *arg1) {
    u8 *s0;
    u8 *s1;
    Vec3 v10;
    Vec3 v20;
    f32 fs0;

    if (*(s32 *)(*(u8 **)(arg0 + 0x14) + 0x44) == -1) {
        fs0 = D_800A9270;
        v10.y = func_8029A900(*(f32 *)(arg0 + 0x70) * fs0);
        v10.x = 0.0f;
        v10.z = 0.0f;
        D_800DD974 = v10.y;
        v10.z = D_80299AE8(*(f32 *)(arg0 + 0x70) * fs0);
    } else {
        D_800DD974 = func_8029A900(*(f32 *)(arg1 + 0x84) * D_800A9274);
    }
    v10.x = 0.0f;
    v10.z = 0.0f;
    v10.y = D_800DD974;
    v10.z = D_80299AE8(*(f32 *)(arg1 + 0x84) * D_800A9278);
    s1 = arg0 + 0x20;
    D_80215200(s1, arg0 + 0x40, &v10);
    D_80215200(s1 + 0x10, s1, arg0 + 0x50);
    s0 = arg0 + 0x78;
    D_802153AC(s1 + 0x10, s0);
    D_802145E4(s0, *(s32 *)(arg0 + 0x34), *(s32 *)(arg0 + 0x38), *(s32 *)(arg0 + 0x3C));
    D_802137A8(arg0 + 4, 0x469C4000);
    D_802145B0(s0, *(s32 *)(arg0 + 4), *(s32 *)(arg0 + 8), *(s32 *)(arg0 + 0xC));
    D_80214ED4(s0);
}
