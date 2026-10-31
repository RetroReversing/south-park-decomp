extern s32 D_80211240(void*,void*,void*); extern s32 D_802137A8(void*,s32); extern s32 D_80213EBC(void*,f32,f32,f32); extern s32 D_802145B0(void*,f32,f32,f32); extern s32 D_802145E4(void*,s32,s32,s32); extern s32 D_80214A28(void*,s32); extern s32 D_80214C00(void*,f32); extern s32 D_80214ED4(void*); extern s32 D_80215200(void*,void*,f32*); extern s32 D_802153AC(void*,void*); extern f32 D_802281F4(void*); extern f32 D_80299AE8(f32); extern f32 func_8029A900(f32); extern f32 D_800A9298,D_800DD974;
void func_8024BDF8(void *arg0, void *arg1) {
 char sp10[0x40]; char sp50[0x40]; f32 sp90[4]; char spa0[0x10]; char spb0[0x10];
 f32 scale, fv; void *s1;
 scale=D_800A9298;
 D_80213EBC(sp50,0.0f,-D_802281F4(arg0)*scale,0.0f);
 D_80214C00(sp50,-*(f32*)((char*)arg1+0x15c));
 D_80214A28(sp50,*(s32*)((char*)arg1+0x158));
 D_80214C00(sp50,*(f32*)((char*)arg1+0x15c));
 D_802145B0(sp50,0.0f,D_802281F4(arg0)*scale,0.0f);
 fv=func_8029A900(*(f32*)((char*)arg0+0x70)*scale);
 sp90[0]=0.0f;sp90[1]=fv;sp90[2]=0.0f;
 D_800DD974=fv;
 sp90[3]=D_80299AE8(*(f32*)((char*)arg0+0x70)*scale);
 D_80215200(spa0,(char*)arg0+0x40,sp90);
 D_80215200(spb0,spa0,(f32*)((char*)arg0+0x50));
 D_802153AC(spb0,sp10);
 s1=(char*)arg0+0x78;
 D_80211240(s1,sp50,sp10);
 D_802145E4(s1,*(s32*)((char*)arg0+0x34),*(s32*)((char*)arg0+0x38),*(s32*)((char*)arg0+0x3c));
 D_802137A8((char*)arg0+4,0x469c4000);
 D_802145B0(s1,*(s32*)((char*)arg0+4),*(s32*)((char*)arg0+8),*(s32*)((char*)arg0+0xc));
 D_80214ED4(s1);
}
