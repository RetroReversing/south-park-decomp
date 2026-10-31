extern char D_24B348[], D_24BB04[], D_24BD28[], D_24BDB0[], D_800B0BA0[]; extern s32 D_800CCA84; extern void D_8023E95C(void*,void*,s32); extern void func_8027EF04(void*);
void func_8024B9F8(void *arg0,void *arg1) {
 void *p=*(void**)((char*)arg0+0x14);
 *(void**)((char*)arg1+0x28)=D_800B0BA0;
 *(void**)((char*)arg1+0xc4)=D_24BB04;
 *(void**)((char*)arg1+0xcc)=D_24BDB0;
 *(void**)((char*)arg1+0xd8)=D_24B348;
 *(void**)((char*)arg1+0xdc)=D_24BD28;
 *(s32*)((char*)arg1+0x154)=0;
 *(s32*)((char*)arg1+0x158)=0;
 *(f32*)((char*)arg1+0x60)=*(f32*)((char*)p+0x70);
 if (*(u32*)((char*)p+0x14)&0x1000) { u32 f=*(u32*)((char*)arg0+0xf4); f &=0xffefffff; f &=0xffff7fff; *(u32*)((char*)arg0+0xf4)=f; }
 if (*(u32*)((char*)p+0x14)&0x800) { *(u32*)((char*)arg0+0xf4)&=0xffff7fff; D_8023E95C(arg0,arg1,0); } else D_8023E95C(arg0,arg1,1);
 *(s8*)((char*)arg1+0x33)=0; if(!D_800CCA84) func_8027EF04((char*)arg0+0xf8);
}
