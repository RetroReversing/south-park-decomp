extern f32 D_800BC260; extern f32 D_800BC220,D_800BC228,D_800BC230; extern u8 D_8010DA08,D_8010DA48; extern s32 D_800BC238[]; extern void func_802A08B8(void*,void*,...);
typedef struct { u8 p[4]; s32 type; u8 pad[0xC]; f32 scale; } Desc;
typedef struct { u8 pad[0x14]; Desc *desc; } A;
void *func_80400DB8(A *a) {
    Desc *p = a->desc;
    void *value = ((void *(*)(void))*(void **)((u8*)p+0x18))();
    s32 type = p->type;
    f32 v;
    switch (type) {
    case 0: v=0.0f; break;
    case 1: v=*(f32*)value; break;
    case 2: v=(f32)*(s8*)value; break;
    case 3: v=(f32)*(s16*)value; break;
    case 4: v=(f32)*(s32*)value; break;
    case 5: v=(f32)*(u8*)value; break;
    case 6: v=(f32)*(u16*)value; break;
    case 7: v=(f32)*(s32*)value; break;
    default: v=(f32)*(s32*)value + D_800BC260; break;
    }
    v /= p->scale;
    func_802A08B8(&D_8010DA48, &D_800BC220, (f64)v);
    if (*(s32*)p) func_802A08B8(&D_8010DA08, &D_800BC228, &D_8010DA48);
    else func_802A08B8(&D_8010DA08, &D_800BC230, &D_8010DA48);
    return &D_8010DA08;
}
