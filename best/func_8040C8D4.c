extern void func_8026624C(void);
extern void func_80266B34(void *, s32, s32, s32);
extern void func_80268FF8(s32,s32,s32);
extern void func_80269010(f32,f32);
extern void func_802A08B8(void *,void *,u8);
extern s32 D_800F14F0,D_800F1508,D_800F150C,D_8010E760;
extern void *D_8010E768[];
extern f32 D_800BE2B0,D_800BE2B4,D_800BE2B8,D_800BE2BC,D_800BE2C0,D_800BE2C4,D_800BE2C8;
extern u8 D_800BE278[],D_800BE280[],D_800BE284[],D_800BE288[],D_800BE28C[];
extern u8 D_800BE290[],D_800BE294[],D_800BE298[],D_800BE29C[],D_800BE2A0[],D_800BE2A8[];
extern u8 D_800ADDD4[];
void func_8040C8D4(void *arg0) {
int __repair_literal;

 u8 *p=*(u8 **)((u8*)arg0+0x3C), *obj;
 s32 x,y,i;
 f32 scale;
 u8 icon[8];
 func_8026624C();
 D_800F150C=1; D_800F14F0=1;
 func_80269010(*(f32*)(p+0xB0),*(f32*)(p+0xB4));
 D_800F1508=1;
 x=(s32)(*(f32*)(p+0xB0)*D_800BE2B0+*(f32*)(p+0x2B0));
 y=(s32)(*(f32*)(p+0xB4)*D_800BE2B4+*(f32*)(p+0x2B4));
 func_80268FF8(255,255,255); func_80266B34(D_800BE278,x,y,255);
 x=(s32)(*(f32*)(p+0xB0)*D_800BE2B4+*(f32*)(p+0x2B0));
 y=(s32)(*(f32*)(p+0xB4)*D_800BE2B8+*(f32*)(p+0x2B4));
 for(i=0;i<D_8010E760;i++){
  obj=D_8010E768[i];
  func_80268FF8(255,255,0); D_800F1508=0; D_800F150C=1;
  switch(i){case 0:func_80266B34(D_800BE280,x,y,255);break;case 1:func_80266B34(D_800BE284,x,y,255);break;case 2:func_80266B34(D_800BE288,x,y,255);break;case 3:func_80266B34(D_800BE28C,x,y,255);}
  D_800F150C=2;
  scale=*(f32*)(p+0xB0)*D_800BE2BC;
  switch(i){case 0:func_80266B34(D_800BE290,x+(s32)scale,y,255);break;case 1:func_80266B34(D_800BE294,x+(s32)scale,y,255);break;case 2:func_80266B34(D_800BE298,x+(s32)scale,y,255);break;case 3:func_80266B34(D_800BE29C,x+(s32)scale,y,255);}
  D_800F150C=1;
__repair_literal = 4;

  func_80266B34(*(void **)(*(u32 *)(D_800ADDD4+(*(s8*)(obj+3))*12)+D_800D77E6*__repair_literal),x+(s32)(*(f32*)(p+0xB0)*D_800BE2C0),y,255);
  func_80268FF8(0,255,255);
  func_802A08B8(icon,*(u8*)(obj+6)==1?D_800BE2A0:D_800BE2A8,*(u8*)(obj+6));
  func_80266B34(icon,x+(s32)(*(f32*)(p+0xB0)*D_800BE2C4),y,255);
  y+=(s32)(*(f32*)(p+0xB4)*D_800BE2C8);
 }
}
