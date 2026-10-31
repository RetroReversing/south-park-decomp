extern void func_8026624C(void); extern void func_80266B34(s32,s32,s32,s32); extern void func_80268FF8(s32,s32,s32); extern void func_80269010(f32,f32); extern void func_802A08B8(void*,void*,u8); extern void *D_8020982C(void*);
extern s32 D_800ADDD4[]; extern f32 D_800B3648; extern f32 D_800BE2E0[]; extern unsigned char D_800BE2A0[],D_800BE2A8[]; extern f32 D_800BE2E8,D_800BE2EC,D_800BE2F0,D_800BE2F4,D_800BE2F8; extern s32 D_800BEE18,D_800BEE1C; extern char D_800CC760; extern u8 D_800D77E6; extern s32 D_800F14F0,D_800F1508,D_800F150C,D_8010E760; extern void *D_8010E768[];
void func_8040D2EC(void) {
 s32 i,j,k,width,start,shade; f32 sx,sy,step,x; void *base,*rec; u8 out[0x40];
 i=0;func_8026624C();
 base=&D_800CC760;
 shade=(s32)(D_800B3648*D_800BE2E0[1]);
 D_800F150C=1;D_800F14F0=1;D_800F1508=0;
 base=D_8020982C(base);sx=*(f32*)((char*)base+0xb0)*D_800BE2E8;
 base=D_8020982C(&D_800CC760);sy=*(f32*)((char*)base+0xb4)*D_800BE2EC;
 start=D_800BEE1C-(s32)((f32)(D_8010E760*16)*sy)-(s32)(sy*D_800BE2F0);
 func_80269010(sx,sy);func_80268FF8(0,255,255);
 if(D_8010E760>0) {
  step=sx*D_800BE2F0;step=step+20.0f;width=(s32)step;
  do {
   rec=D_8010E768[i];D_800F150C=1;
   j=*(s8*)((char*)rec+3);k=*(s32*)((char*)D_800ADDD4+j*12);k=*(s32*)((char*)k+D_800D77E6*4);
   func_80266B34(k,width,start,shade&255);
   j=*(u8*)((char*)rec+6);
   if(j==1)func_802A08B8(out,D_800BE2A0,j);else func_802A08B8(out,D_800BE2A8,j);
   step=sx*D_800BE2F4;step=(f32)D_800BEE18-step;width=(s32)step;
   func_80266B34((s32)out,width,start,shade&255);
   step=sy*D_800BE2F8;start=(s32)((f32)start+step);
   i++;
  }while(i<D_8010E760);
 }
}
