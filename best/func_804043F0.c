typedef struct { char pad[0x14]; void *p14; } A0;
extern f32 D_800BC434;
extern f32 D_800BC438;
extern f32 D_800BC43C;
extern void *jtbl_D_800BC410[];

void func_804043F0(A0 *a0, f32 f) {
    void *o = a0->p14;
    void (*fn)(void *, f32);
    void *r;
    s32 mode;

    fn = *(void (**)(void *, f32))((char *)o + 0x18);
    fn(o, f);
    r = 0;
    switch (*(s32 *)((char *)o + 4)) {
    case 1:
        *(f32 *)r = f;
        break;
    case 2:
        *(u8 *)r = (u8)f;
        break;
    case 3:
        *(u16 *)r = (u16)f;
        break;
    case 4:
        *(f32 *)r = (f32)(s32)f;
        break;
    case 5:
        *(u8 *)r = (u8)(s32)f;
        break;
    case 6:
        *(u16 *)r = (u16)(s32)f;
        break;
    case 7:
        *(u32 *)r = (u32)(s32)f;
        break;
    }
}
