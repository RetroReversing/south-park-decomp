typedef struct { f32 x, y, z; } Vec;
typedef struct { char p[8]; f32 x; f32 z; } Unk110;
void D_802131C4(Vec *dst, void *a, void *b);
void D_802131F8(Vec *dst, void *a, f32 s);
void D_802132D8(Vec *a);
void func_80273DCC(s32 a, f32 x, f32 y, f32 z, void *p, s32 b);
extern f32 D_800A9370, D_800A9374;
u64 D_8029D708(void);
u64 func_802A6AF0(u64 a, s32 b, s32 c, s32 d);
s32 func_802A7570(u64 a, u32 b, s32 c, s32 d);
f32 func_802A75B8(u64 a, u32 b);

typedef struct {
    Vec pos;
    char pad0C[0x14];
    s32 unk20;
    char pad24[0x1C];
    s32 unk40;
    char pad44[0xB4];
    void *unkF8;
    char padFC[0xC];
    void *unk108;
    Unk110 *unk110;
    char pad114[0x1C];
    f32 unk130;
    char pad134[0x18];
    Vec unk14C;
    f32 unk158;
    f32 unk15C;
    char pad160[8];
    f32 unk168;
    char pad16C[0x48];
    f32 unk1B4;
    u64 unk1C0;
    u64 unk1C8;
    Vec unk1D0;
    f32 unk1DC;
} Actor;

void func_8024EE6C(Actor *arg0) {
    Vec sp18, sp28, sp38, sp48, sp58;
    Unk110 *s2;
    f32 fs0;
    u64 now;
    s32 dd;
    s32 zero;
    u32 a2, a3;
    u32 lo, hi;
    zero = 0;
    a3 = 0xBB8;
    switch (arg0->pos.x != 0.0f ? 0 : 1) {
    default:
        goto end;
    case 1:
        break;
    }
    s2 = arg0->unk110;
    if (s2 == NULL) {
        goto end;
    }
    now = D_8029D708();
    lo = (u32)now - (u32)arg0->unk1C8;
    hi = (u32)(now >> 32) - (u32)arg0->unk1C0;
    a2 = (hi * 64) | (lo >> 26);
    a3 = lo << 6;
    now = func_802A6AF0(a2, a3, zero, 0xBB8);
    dd = func_802A7570(now, (u32)now, zero, zero);
    if (dd <= 0) {
        fs0 = func_802A75B8(now, (u32)now) * 2.0f;
    } else {
        fs0 = func_802A75B8(now, (u32)now);
    }
    fs0 *= D_800A9370;
    D_802131C4(&sp18, &s2->x, &arg0->pos);
    D_802131C4(&sp28, &s2->x, &arg0->pos);
    D_802131F8(&sp48, &sp18, fs0);
    D_802132D8(&sp48);
    func_80273DCC(0x19C, arg0->pos.x, arg0->pos.y, arg0->pos.z, &arg0->pos, 0);
end:
    ;
}
