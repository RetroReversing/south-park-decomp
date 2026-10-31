extern void *D_800F4864; void D_87CAD7B8(); void func_8027D7B0();
void func_8027D73C(void) { D_87CAD7B8(); }
void func_8027D740(s32 a,s32 b,s32 c,s32 d) { func_8027D7B0(a,b,c,d); }
void func_8027D6A0(void **arg0) {
 s32 *node; s32 *dst; s32 *in; s32 *out;
 node=(s32*)arg0;
 if (*node != 0) {
  out=(s32*)((u8*)arg0+0x24);
  do {
   dst=*(s32**)D_800F4864; in=(s32*)*node;
   dst[0]=0; dst[5]=-1; *(s32*)((u8*)dst+0x84)=0; *(s32*)((u8*)dst+0x98)=0; *(s32*)((u8*)dst+0xac)=0; *(s32*)((u8*)dst+0xb0)=0; *(s32*)((u8*)dst+0xc0)=0;
   in[0]=out[-8]; *((u8*)in+4)=*((u8*)out-0x19); *((u8*)in+5)=*((u8*)out-0x15); *((u8*)in+6)=*((u8*)out-0x11);
   *(f32*)((u8*)in+8)=*(f32*)((u8*)out-0x10); *(f32*)((u8*)in+0xc)=*(f32*)((u8*)out-0xc); *(f32*)((u8*)in+0x10)=*(f32*)((u8*)out-8); *(f32*)((u8*)in+0x14)=*(f32*)((u8*)out-4); *(f32*)((u8*)in+0x18)=*(f32*)out;
   node=(s32*)((u8*)node+0x28); out=(s32*)((u8*)out+0x28);
  } while(*node);
 }
}
void func_8027D674(void) { s32 *p=D_800F4864; p[0]=0;p[5]=-1;*(s32*)((u8*)p+0x84)=0;*(s32*)((u8*)p+0x98)=0;*(s32*)((u8*)p+0xac)=0;*(s32*)((u8*)p+0xb0)=0;*(s32*)((u8*)p+0xc0)=0; }
