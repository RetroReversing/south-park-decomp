extern s32 D_80213AF4(void*,s32*,f32*);
extern s32 D_80213EBC(void*,s32,s32,s32);
extern s32 D_802145B0(void*,f32,f32,f32);
extern f32 D_802281F4(s32);
extern s32 func_8029A2CC(void*,s32);
extern s32 D_800B0CA0,D_800B0CB0;
extern f32 D_800A929C;
void func_8024BF80(void *arg0,void *arg1,void *arg2){
 s32 sp10[16]; s32 sp50[16]; f32 sp90[3]; f32 spa0[3]; void *s1; s32 v; char pad[8];
 s1=*(void**)((char*)arg1+0x154);v=*(s32*)((char*)s1+0xb8);
 if(v){func_8029A2CC(sp10,v+(D_800B0CA0<<6));func_8029A2CC(sp50,v+(D_800B0CB0<<6));}
 else {D_80213EBC(sp10,*(s32*)((char*)s1+4),*(s32*)((char*)s1+8),*(s32*)((char*)s1+0xc));D_80213EBC(sp50,*(s32*)((char*)s1+4),*(s32*)((char*)s1+8),*(s32*)((char*)s1+0xc));}
 D_802145B0(sp10,0.0f,D_802281F4((s32)arg0),0.0f);D_802145B0(sp50,0.0f,D_802281F4((s32)arg0),0.0f);
 D_80213AF4(sp10,(s32*)&D_800B0CA0+1,sp90);D_80213AF4(sp50,(s32*)&D_800B0CB0+1,spa0);
 ((f32*)arg2)[0]=(sp90[0]+spa0[0])*D_800A929C;((f32*)arg2)[1]=(sp90[1]+spa0[1])*D_800A929C;((f32*)arg2)[2]=(sp90[2]+spa0[2])*D_800A929C;
}
