extern void *D_800F4864;
void func_8027D6A0(void *arg0) {
char *__repair_addr;

 s32 *node; u8 *src; s32 *in; s32 *dst; s32 sentinel; s32 first;
 node=(s32*)arg0; first=*node; sentinel=-1;
 if (first==0) return;
 src=(u8*)arg0+0x24;
 do {
  dst=D_800F4864; in=(s32*)*node;
  dst[0]=0; dst[5]=sentinel;
__repair_addr = (char *)((u8*)dst+0x84);

  *(s32*)(__repair_addr)=0; *(s32*)((u8*)dst+0x98)=0; *(s32*)((u8*)dst+0xac)=0; *(s32*)((u8*)dst+0xb0)=0; *(s32*)((u8*)dst+0xc0)=0;
  in[0]=*(s32*)(src-0x20); *((u8*)in+4)=src[-0x19]; *((u8*)in+5)=src[-0x15]; *((u8*)in+6)=src[-0x11];
  *(f32*)((u8*)in+8)=*(f32*)(src-0x10); *(f32*)((u8*)in+0xc)=*(f32*)(src-0xc); *(f32*)((u8*)in+0x10)=*(f32*)(src-8); *(f32*)((u8*)in+0x14)=*(f32*)(src-4); *(f32*)((u8*)in+0x18)=*(f32*)src;
  node=(s32*)((u8*)node+0x28); src+=0x28;
 } while(*node);
}
