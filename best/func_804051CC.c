extern s32 func_8040348C(void);
extern void func_802A08B8(s32);
extern s32 D_800CE204;
extern u8 D_800BC470[];
s32 func_804051CC(void *arg0) { u32 idx=D_800D77E6; u32 *base=*(u32**)((u8*)arg0+0x14); s32 value=base[idx]; s32 off=func_8040348C()-3; func_802A08B8(value+off); return 0; }
