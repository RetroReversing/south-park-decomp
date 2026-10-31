extern f32 D_800AB420,D_800AB424,D_800AB428,D_800AB42C;
extern f32 D_800F9C70[],D_800F9E70[],D_800FA070[],D_800FA270[]; extern s32 D_800FA470[];
extern f32 D_80299AE8(f32); extern f32 func_8029A900(f32);
void func_802A2A94(void) {
 f32 a,b,c,d,e,f,g; s16 i=0,si,j;
 a=D_800AB420; b=D_800AB424; c=D_800AB428;
 do {
  si=i; g=(((f32)si*a)+b)*c;
  D_800F9C70[si]=D_80299AE8(g);
  j=i+1; i=j;
  D_800F9E70[si]=func_8029A900(g);
  D_800FA470[si]=0;
 } while(i<128);
 i=0; d=D_800AB42C;
 do {
  si=i; e=(f32)si*d; f=D_80299AE8(e); g=func_8029A900(e);
  j=i+1; i=j;
  D_800FA070[si]=f+g; D_800FA270[si]=g-f;
 } while(i<128);
}
