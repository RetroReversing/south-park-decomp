typedef struct { u8 pad[0x14]; void *items; } Hdr;
void func_8024E8E0(void *, s32, s8, s32);
s32 func_8025764C(void);
void func_802630B0(void *, void *, s32, s32, s32, s32, s32, s32, s32);
void func_80273DCC(s32, s32, s32, s32, s32, s32);
void func_80257334(u8 *arg0) {
    Hdr *hdr = *(Hdr **)(arg0 + 0xF8);
    s32 idx = 0xA;
    s32 v70, v8C, sp28, sp2C;
    s16 vA8;
    if (func_8025764C() == 0) idx=0xC;
    v70 = *(u16 *)((u8 *)hdr->items + idx*2 + 0x70);
    v8C = *(u16 *)((u8 *)hdr->items + idx*2 + 0x8C);
    sp28 = ((s32 *)hdr->items)[idx*2];
    sp2C = ((s32 *)hdr->items)[idx*2+1];
    vA8 = *(u16 *)((u8 *)hdr->items + idx*2 + 0xA8);
    if (v8C != 0xFFFF)
        func_802630B0(arg0,arg0,v8C,-1,*(s32 *)(arg0+4),*(s32 *)(arg0+8),*(s32 *)(arg0+0xC),sp28,sp2C);
    if (v70 != 0xFFFF)
        func_8024E8E0(arg0,v70,*(s8 *)(arg0+0x1A8),1);
    if ((u16)vA8 != 0xFFFF)
        func_80273DCC(vA8,*(s32 *)(arg0+4),*(s32 *)(arg0+8),*(s32 *)(arg0+0xC),0,0);
}
