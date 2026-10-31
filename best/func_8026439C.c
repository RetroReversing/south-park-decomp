extern void D_80242418(u8 *, void *);
void func_80264A5C(s32 unused, u8 *p) { if (p && *p == 1) D_80242418(p, p + 0x168); }

extern s32 D_800D7910;
extern void D_80242360(u8 *, void *, s32);
void func_80264A14(s32 unused, u8 *p, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) { if (!D_800D7910 && p && *p == 1) D_80242360(p, p + 0x168, a6); }

extern s32 func_8026349C(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_8026439C(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7) { func_8026349C(a0,a1,a2,a3,a4,a5,a6,a7,1,1,0x400000); }
void func_80264344(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7) { func_8026349C(a0,a1,a2,a3,a4,a5,a6,a7,1,0,0x400000); }
