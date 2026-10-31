s32 func_8024C0F4(s32 a,s32*b){return b[0x154/4];}
extern s8 D_800F4D5C; void func_8024C23C(void){D_800F4D5C=2;}
s32 D_8023E95C(s32);
void func_8024BDB0(s32 x, void *a1, void *a2){s32 v1=*(u16*)((u8*)a1+4); s32 t=v1-*(s32*)((u8*)a2+4); s32 v0; if(t<0) v0=0; else v0=v1-*(u16*)((u8*)a2+6); *(u16*)((u8*)a1+4)=v0; if((v0&0xffff)==0) D_8023E95C(0x43);}
s32 D_80214A28(s32,s32); s32 D_80214DD0(s32,f32);
void func_8024BD28(s32 arg0, void *arg1){void *obj=*(void**)arg1; void *node=*(void**)((u8*)obj+0x14); void *s1=(u8*)node+0x14; s32 t=*(s32*)((u8*)arg1+0x7c); if(t==*(s32*)((u8*)s1+0x2c)) D_80214A28(arg0,*(s32*)((u8*)obj+0x2bc)); t=*(s32*)((u8*)arg1+0x7c); if(t==*(s32*)((u8*)s1+0x30)){obj=*(void**)arg1; D_80214DD0(arg0,*(f32*)((u8*)obj+0x1ec)-*(f32*)((u8*)obj+0x70));}}
