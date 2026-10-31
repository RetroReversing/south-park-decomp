void func_80295470(void *a,f32 b){
char *__repair_addr;
 void *p=*(void**)((u8*)a+0x18); if(p){f32 x=b**(f32*)((u8*)p+0x14);
__repair_addr = (char *)((u8*)a+0x24);
 *(s32*)(__repair_addr)=(s32)x;}else *(s32*)((u8*)a+0x24)=0x1e8; }
void func_8029540C(void *a,u8 *b){if(b[8]==255&&b[9]==0x51){s32 x=(b[11]<<16)|(b[12]<<8)|b[13];func_80295470(a,(f32)x);}}
extern f64 D_800AACC8; extern f32 D_800AACD0,D_800AACE0; extern f64 D_800AACD8;
f32 func_802956F4(void *a,s32 x,s32 y){f64 d=(f64)y; f32 n; if(y<0)d+=D_800AACC8; n=(f32)x*(f32)d; return n/((f32)*(s16*)((u8*)a+0x18)*D_800AACD0);}
s32 func_80295740(void*a,f32 b,s32 c){f64 d=(f64)c; f32 n; if(c<0)d+=D_800AACD8; n=(b*(f32)d)/D_800AACE0; if(D_800AACE0<=n)return ((s32)(n-D_800AACE0)|0x80000000);return (s32)n;}
