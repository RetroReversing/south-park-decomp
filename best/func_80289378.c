extern f32 D_800AA738,D_800AA73C,D_800AA740,D_800AA744,D_800AA748,D_800AA74C,D_800AA750,D_800AA754,D_800AA758,D_800AA75C,D_800AA760,D_800AA764,D_800AA768,D_800AA76C,D_800AA770,D_800AA774,D_800AA778,D_800AA77C,D_800AA780,D_800AA784,D_800AA788,D_800ABA00;
extern u8 D_800CCA80[];
extern f32 D_80215964(f32,f32,s32); extern f32 D_80215BE0(f32,f32);
extern void D_80241EEC(void*,void*,void*,s32,...); extern void D_80241A44(void*,void*,void*);
extern void D_80241C54(void*,void*,f32,f32); extern void D_8023E95C(void*,void*,s32);
extern s32 D_80200C94(void*,void*); extern f32 D_802157FC(f32,f32,f32);
extern f32 func_8029A900(f32); extern f32 D_80299AE8(f32); extern f32 func_8026D63C(s32,f32,s32);

void func_80289378(void *a, void *b) {
    f32 *p;
    f32 x, y;
    void *o;
    u8 z[0xe8];
    s32 v;

    D_80215964(*(f32*)((char*)b+0xa8), D_800AA73C, *(s32*)&D_800AA738);
    D_80215964(*(f32*)((char*)b+0x160), D_800AA740, *(s32*)&D_800AA738);
    *(f32*)((char*)b+0x160) = x;
    *(f32*)((char*)b+0xa8) = x;
    D_80241EEC(a, b, z, 1, 1);
    D_80241A44(a, b, z+0x88);
    *(f32*)((char*)b+0x154) = D_80215964(*(f32*)((char*)b+0x154), *(f32*)((char*)a+0x1c)*D_800AA744, 0x3D8EFA36);
    *(f32*)((char*)b+0x158) = D_80215964(*(f32*)((char*)b+0x158), *(f32*)(z+0x4c)*D_800AA748, 0x3E32B8C4);
    x = D_802157FC(*(f32*)((char*)a+0x1c), *(f32*)(z+0x60), *(f32*)(z+0xa0)*D_800AA74C);
    if (D_800AA750 < x) x = D_800AA750;
    else if (x < D_800AA754) x = D_800AA754;
    *(f32*)((char*)a+0x1c) = x;
    D_80241C54(a, b, *(f32*)((char*)b+0x160), *(f32*)(z+0x4c));
    *(f32*)((char*)b+0x17c) = *(f32*)((char*)b+0x17c) - D_800ABA00;
    if (*(f32*)((char*)b+0x17c) <= 0.0f) {
        o = *(void**)((char*)b+0x180);
        if (o != 0) {
            x = D_80215BE0(D_800AA758, D_800AA75C);
            y = D_80215BE0(D_800AA760, D_800AA768) + D_800AA764;
            y = *(f32*)((char*)o+0x70) + D_800AA76C + y;
            *(f32*)((char*)b+0x98) = *(f32*)((char*)o+4) + x * func_8029A900(y);
            *(f32*)((char*)b+0xa0) = *(f32*)((char*)o+0xc) + x * D_80299AE8(y);
            *(f32*)((char*)b+0x9c) = 0.0f;
            v = D_80200C94(D_800CCA80, (char*)b+0x98);
            x = D_800AA770;
            if (v != 0) {
                y = func_8026D63C(v, *(f32*)((char*)b+0x98), *(s32*)((char*)b+0xa0));
                x = D_80215BE0(y, y + D_800AA774);
            }
            *(f32*)((char*)b+0x9c) = x;
            *(f32*)((char*)b+0x8c) = x;
        }
        *(f32*)((char*)b+0x17c) = D_80215BE0(D_800AA778, D_800AA77C);
    }
    if (*(f32*)((char*)b+0x3c) > D_800AA780) {
        if (*(f32*)(z+0x84) < D_800AA784 || *(f32*)((char*)b+0x3c) > D_800AA788) {
            *(u32*)((char*)b+0x180) = 0;
            D_8023E95C(a, b, 4);
        }
    }
}
