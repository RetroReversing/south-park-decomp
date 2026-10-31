extern f32 D_800AA6F8;
extern f32 D_800AA6FC;
extern f32 D_800AA700;
extern f32 D_800AA704;
extern f32 D_800AA708;
extern f32 D_800AA70C;
extern f32 D_800AA710;
extern f32 D_800AA714;
extern f32 D_800AA718;
extern f32 D_800AA71C;
extern f32 D_800AA720;
extern f32 D_800AA724;
extern f32 D_800AA728;
extern f32 D_800AA72C;
extern f32 D_800AA730;
extern f32 D_800AA734;
extern u8 D_800CCA80[];

s32 D_80200C94(void *, void *);
f32 D_802157FC(f32, f32, f32);
f32 D_80215964(f32, f32, f32);
f32 D_80215BE0(f32, f32);
f32 D_802281F4(void *);
void D_8023E95C(void *, void *, s32);
void D_80241A44(void *, void *, void *);
void D_80241C54(void *, void *, s32, s32);
s32 D_80241EEC(void *,  s32,  s32);
f32 func_8026D63C(s32, s32, s32);

void func_80289040(void *arg0, void *arg1) {
    u8 sp18[0x88];
    u8 spA0[0x60];
    u8 *a0;
    u8 *a1;
    u8 *s3;
    u8 *s0;
    f32 v9c;
    f32 var_fs0;
    f32 tmp;
    s32 tv;
    void *p4;

    a0 = arg0;
    a1 = arg1;
    p4 = *(u8 **)(a0 + 0x14) + 0x14; s3=(u8 *)p4;
    D_80241EEC(sp18,  1,  1);
    D_80241A44(a0, a1, spA0);
    tmp = *(f32 *)(a0 + 0x1C);
    if (tmp > 0.0f) {
        *(f32 *)(a1 + 0xA8) = D_80215964(*(f32 *)(a1 + 0xA8), D_800AA6F8, 0.08f);
    } else if (tmp < 0.0f) {
        *(f32 *)(a1 + 0xA8) = D_80215964(*(f32 *)(a1 + 0xA8), D_800AA6FC, 0.3f);
    } else {
        *(f32 *)(a1 + 0xA8) = D_80215964(*(f32 *)(a1 + 0xA8), D_800AA700, 0.3f);
    }
    s0 = a1 + 0x98;
    *(f32 *)(a1 + 0x160) = D_80215964(*(f32 *)(a1 + 0x160), D_800AA704, 0.25f);
    var_fs0 = D_800AA708;
    *(s32 *)(s0 + 4) = 0;
    tv = D_80200C94(D_800CCA80, s0);
    if (tv != 0) {
        tmp = func_8026D63C(tv, *(s32 *)(a1 + 0x98), *(s32 *)(s0 + 8));
        var_fs0 = D_80215BE0(tmp, tmp + D_800AA70C);
    }
    v9c = D_80215964(*(f32 *)(a1 + 0x9C), var_fs0, 5.12f);
    *(f32 *)(a1 + 0x8C) = var_fs0;
    *(f32 *)(a1 + 0x9C) = v9c;
    p4 = *(void **)(sp18 + 0x48);
    if (p4 != NULL) {
        *(f32 *)(a1 + 0x6C) = D_802281F4(p4) * D_800AA710;
    }
    *(f32 *)(a1 + 0x154) = D_80215964(*(f32 *)(a1 + 0x154), *(f32 *)(a0 + 0x1C) * D_800AA714, 0.0698082f);
    *(f32 *)(a1 + 0x158) = D_80215964(*(f32 *)(a1 + 0x158), *(f32 *)(sp18 + 0x34) * D_800AA718, 0.174545f);
    tmp = D_802157FC(*(f32 *)(a0 + 0x1C), *(f32 *)(sp18 + 0x48), *(f32 *)(spA0 + 0x18) * D_800AA71C);
    *(f32 *)(a0 + 0x1C) = tmp;
    if (D_800AA720 < tmp) {
        *(f32 *)(a0 + 0x1C) = D_800AA720;
    } else if (tmp < D_800AA724) {
        *(f32 *)(a0 + 0x1C) = D_800AA724;
    }
    D_80241C54(a0, a1, *(s32 *)(a1 + 0x160), *(s32 *)(sp18 + 0x34));
    if (D_800AA728 < *(f32 *)(a1 + 0x3C) && p4 != NULL && **(s32 **)((u8 *)p4 + 0x14) == 0xB
        && *(f32 *)(spA0 - 4) < *(f32 *)(s3 + 0x34)) {
        f32 v1 = *(f32 *)(spA0 - 0x3C);
        if (v1 < 0.0f) {
            if (!(-v1 < D_800AA72C)) {
                return;
            }
        } else if (!(v1 < D_800AA730)) {
            return;
        }
        if (func_8026D63C(*(s32 *)(a0 + 0x10), *(s32 *)(a0 + 4), *(s32 *)(a0 + 0xC)) + D_800AA734 <= *(f32 *)(a0 + 8)) {
            D_8023E95C(a0, a1, 0x11);
        }
    }
}
