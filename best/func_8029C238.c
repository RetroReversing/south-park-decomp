extern s32 func_8029C3D0(s32); extern u8 D_8010E858[0x100];
void func_8029C238(s32 n,s32 mode,u8 *src) {
 s32 i; s8 t[0x28]; u8 *base=D_8010E858, *dst;
 base[0x3c]=1;
 t[0]=-1; t[1]=0x23; t[2]=1; t[3]=3;
 *(s16*)(t+4)=(func_8029C3D0(mode&0xffff)&0xff)|(mode<<5);
 for(i=0;i<32;i++) *(u8 *)(t+6+i)=src[i];
 t[0x26]=-1;
 dst=base;
 if(n>0){i=0;do{*dst++=0;i++;}while(i<n);}
 if((s32)dst&3){u8 *s=(u8*)t;do{*(u32*)dst=*(u32*)s;dst+=4;s+=4;}while(s!=(u8*)t+0x30);}
 else {u32 *s=(u32*)t,*d=(u32*)dst;do{*d++=*s++;*d++=*s++;*d++=*s++;*d++=*s++;}while((u8*)s!=(u8*)t+0x30);}
 *(u32*)dst=*(u32*)(t+0x30);*(u32*)(dst+4)=*(u32*)(t+0x34);base[0x28]=0xfe;
}
