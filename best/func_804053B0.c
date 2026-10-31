extern s32 D_80209B6C(s32 *);
extern s32 func_802A08B8(void *, void *, s32, u16);
extern s32 D_800C977C[];
extern s32 D_800CC760;
extern u8 D_800D77E6;
extern s32 D_8010DA90;
extern s32 D_8010DAF4;
extern s32 D_8010DB00;
extern s32 D_800BC478;
struct B { char pad[0x20]; void *ptr; };
s32 func_804053B0(struct B *a) {
    u16 val = *(u16 *)((u8 *)a->ptr + 0xA80);
    func_802A08B8(&D_8010DA90, &D_800BC478, D_800C977C[D_800D77E6], val);
    if (D_8010DAF4 == 0) return 0;
    if (D_8010DB00 != 0) return 0;
    D_80209B6C(&D_800CC760);
    D_8010DB00 = 1;
    return 1;
}
