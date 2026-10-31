extern s32 D_800BC3E0[]; extern f64 D_800BC408;
f32 func_80404300(void *arg) {
 s32 *obj; s32 type; void *data; s32 n; f64 d;
 obj=*(s32**)((u8*)arg+0x14);
 data=(void*)((s32(*)(void))(*(s32*)((u8*)obj+0x18)))();
 type=*(s32*)((u8*)obj+4);
 switch(type) {
 case 0: return 0.0f;
 case 8: return 0.0f;
 default: return 0.0f;
 case 1: return *(f32*)data;
 case 2: return (f32)*(s8*)data;
 case 3: return (f32)*(s16*)data;
 case 4: { s32 x=*(s32*)data; return (f32)x; }
 case 5: return (f32)*(u8*)data;
 case 6: return (f32)*(u16*)data;
 case 7: n=*(s32*)data; d=(f64)n; if(n<0)d+=D_800BC408; return (f32)d;
 }
}
