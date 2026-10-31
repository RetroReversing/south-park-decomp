s32 func_8029C418(void*,void*); void func_8029C5A4(void); void func_8029C610(void); void func_8029C638(s32,void*); void func_8029DC78(s32,s32,s32);
extern s32 D_800B3A70[]; extern s8 D_800F6090; extern u8 D_800F6098[],D_800F6198[],D_8010E858[];
typedef struct { u8 b[0x28]; } CopyRec;
u32 func_8029B5BC(void *arg0) {
 s32 result=5; s32 i,n; u8 *src; CopyRec local;
 if(D_800B3A70[*(s32*)((u8*)arg0+8)]!=0) {
 func_8029C5A4(); D_800F6090=3;
 func_8029C638(1,D_800F6098+(*(s32*)((u8*)arg0+8)<<6));
 func_8029DC78(*(s32*)((u8*)arg0+4),0,1);
 func_8029C638(0,D_8010E858); func_8029DC78(*(s32*)((u8*)arg0+4),0,1);
 n=*(s32*)((u8*)arg0+8); src=D_8010E858; if(n>0) src+=n*4;
 for(i=0;i<0x28;i++) local.b[i]=src[i];
 result=(local.b[2]&0xC0)>>4;
 if(result==0 && (func_8029C418(D_800F6198,src)&0xFF)!=local.b[0x26]) result=4;
 func_8029C610();
 }
 return result;
}
