s32 func_8029C920(void) { return (*(volatile u32*)0xA4040010 & 0x1C) != 0; }
void func_8029CA68(s32 arg0) { *(volatile u32*)0xA4040010 = arg0; D_8B53C0FC(); }
s32 func_8029CC68(void) { s32 x; s32 *p; x=func_802A0500(); p=*(s32**)0x800B3AE8; D_802A0520(x); return p[1]; }
extern s32 D_800B3A80; extern s32 D_800F62D8; extern s32 D_800F62E0;
void func_8029C550(void) { D_800B3A80=1; func_8029D588(&D_800F62E0,&D_800F62D8,1); func_8029DDA0(&D_800F62E0,0,0); }
