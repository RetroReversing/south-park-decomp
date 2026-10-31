extern void func_8026624C(void); extern void func_80266B34(s32,s32,s32,s32); extern void func_8026798C(s32,s32,s16,s16,f32,f32,s32); extern void func_80268E18(s32,s32,s32*,s32*); extern void func_80269010(f32,f32); extern void func_80269028(s32); extern f32 func_8029A900(f32,s32); extern void func_80402948(void*,s32);
extern f32 D_800BC640[]; extern f32 D_800BC648; extern u32 D_800BEE18; extern s32 D_800BEE1C; extern s32 D_800C9998[]; extern u8 D_800D77E6; extern s32 D_800F150C;
void func_80407040(void *arg0,s32 arg1) {
 s32 sp20,sp24; f32 f0,f1,f0f,fs0f,fs1; s32 a,b,c; void *obj;
 sp20=0;sp24=0;func_80269028(255);func_80268E18(100,0,&sp20,&sp24);
 obj=*(void**)((char*)arg0+0x3C);
 fs1=*(f32*)((char*)obj+0xB4)*D_800BC640[0]; f0f=*(f32*)((char*)obj+0xB0);
 f1=(f32)sp20; f1=f1*f0f; a=(s32)f1;
 fs0f=D_800BC640[1]; f0f=*(f32*)((char*)arg0+0x34); f0f=f0f**(f32*)((char*)arg0+0x38); f0f=f0f*fs0f;
 f1=(f32)sp24; f1=f1**(f32*)((char*)obj+0xB4); b=(s32)f1; sp24=b;
 c=D_800BEE18-a; c=(c+((u32)c>>31))>>1; sp20=a;
 f0=(f32)-b;
 f1=func_8029A900(f0f,a); f1=f1*(fs1-f0); f1=f1+f0;
 func_8026798C(100,0,(s16)c,(s16)(s32)f1,*(f32*)((char*)obj+0xB0),*(f32*)((char*)obj+0xB4),0);
 f0=(f32)D_800BEE1C; f1=f0-*(f32*)((char*)obj+0xB4)*D_800BC648;
 c=(D_800BEE18+((u32)D_800BEE18>>31))>>1;
 f0f=*(f32*)((char*)arg0+0x34); f0f=f0f**(f32*)((char*)arg0+0x38); f0f=f0f*fs0f; f0f=func_8029A900(f0f,0); f0f=f0f*(f1-f0); f0=f0+f0f; b=(s32)f0;
 func_8026624C();D_800F150C=1;func_80269010(*(f32*)((char*)obj+0xB0),*(f32*)((char*)obj+0xB4));func_80266B34(D_800C9998[D_800D77E6],c,b,255);func_80402948(arg0,arg1);
}
