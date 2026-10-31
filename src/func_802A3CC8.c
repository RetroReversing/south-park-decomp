void func_802A3810(s32 addr, s32 val);
s32 func_802A3844(s32 addr);
s32 func_802A3A00(s32 a);
void func_802A3E14(s32 a0, s32 a1);
void func_802A2908(void *p);
void func_802A302C(void *p, void *q);

typedef struct {
    u8 pad0[0x10];
    s32 count;
} Sfa878;

extern Sfa878 D_800FA878;
extern u16 D_800B4B92;
extern u8 D_800FAB30[];

void func_802A3E14(s32 a0, s32 a1)
{
    s32 base = a0 & ~3;
    s32 sh = (~a0 & 3) << 3;
    s32 v = func_802A3844(base);
    v &= ~(0xFF << sh);
    v |= (a1 & 0xFF) << sh;
    func_802A3810(base, v);
}

void func_802A3CC8(s32 a0, s32 a1)
{
    s32 sh = (~a0 & 3) << 3;
    u32 *p = (u32 *)(a0 & ~3);
    *p = (*p & ~(0xFF << sh)) | ((a1 & 0xFF) << sh);
}

void func_802A423C(s32 a0, s32 a1, s32 n)
{
    s32 i;
    if (n != 0) {
        for (i = 0; i < n; i++) {
            func_802A3E14(a0, func_802A3A00(a1) & 0xFF);
            a0++;
            a1++;
        }
    }
}

void *func_802A36EC(void)
{
    void *res = NULL;
    u16 v;
    if (D_800FA878.count != 0) {
        func_802A2908(&D_800FA878);
        v = D_800B4B92 + 1;
        D_800B4B92 = v;
        if ((u32)(v & 0xFFFF) >= 6) {
            D_800B4B92 = 0;
        }
        res = &D_800FAB30[(D_800B4B92 << 9)];
        func_802A302C(res, &D_800FA878);
        D_800FA878.count--;
    }
    return res;
}
