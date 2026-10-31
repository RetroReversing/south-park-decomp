void func_802964C8(void *arg0,s16 arg1,s32 arg2){ s32 index=arg1; s32 *base=*(s32**)((u8*)arg0+0x40); u8 value=arg2; *(s16*)((u8*)base+index*0x30+0x20)=value; }
extern f64 D_800AAD30; extern s32 D_800AAD18,D_800AAD1C; s32 func_8029D580(s32*,s32*,s32);
s32 func_802962F0(s32 arg0,f32 arg1){ f64 d; if(arg1==0.0f) func_8029D580(&D_800AAD18,&D_800AAD1C,0x11d); d=(f64)((f32)arg0/arg1); if(D_800AAD30<d) return 0x7fffffff; return (s32)d; }
