extern void D_80212AB8(void*,void*); extern void D_802417F0(void*,void*,s32,f32,u32,s32); extern void D_8024220C(void*,void*,void*); extern void D_80253EB0(void*,void*,void*,s32,void*,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32); extern void func_8025A554(void*); extern u32 D_800AA8C0; extern f32 D_800ABA00; extern char D_800CE0FC[];
void func_8028ACE8(void *arg0) {
 s32 sp50[6],sp68[4],sp80,sp84,sp88,sp90,sp94,sp98; f32 delta; s32 *p0; void *s1; void *s2; s32 s0,flag; 
 s1=*(void**)((char*)arg0+0x2fc);
 if(*(u8*)s1==1 && (*(u32*)((char*)s1+0xf4)&0x18000000)) s2=*(void**)((char*)s1+0x1cc); else s2=0;
 *(s32*)((char*)arg0+0x10)=*(s32*)((char*)s1+0x10);
 if(*(u32*)((char*)s1+0xf4)&0x18000000) flag=(*(u16*)((char*)s1+0x16c)==0);
 else flag=(*(u32*)((char*)s1+0x168)&0x20);
 if(!flag) flag=((((u32)*(s32*)((char*)s1+0x338))>>2)^1)&1;
 delta=*(f32*)((char*)arg0+0x2f4)-D_800ABA00*(*(f32*)&D_800AA8C0);
 *(f32*)((char*)arg0+0x2f4)=delta;
 if(!flag) { if(delta<=0.0f) { D_802417F0(sp68,*(void**)((char*)arg0+0x2f8),6,0.0f,0x80000,0); *(void**)((char*)s1+0x270)=*(void**)((char*)arg0+0x2f8); D_8024220C(s1,(char*)s1+0x168,sp68); *(f32*)((char*)arg0+0x2f4)+=*(f32*)((char*)&D_800AA8C0+4); } }
 else {
  if(s2==0) s2=arg0;
  sp80=*(s32*)((char*)arg0+0x18); sp84=*(s32*)((char*)arg0+0x1c); sp88=*(s32*)((char*)arg0+0x20);
  sp90=*(s32*)((char*)s2+4); sp94=*(s32*)((char*)s2+8); sp98=*(s32*)((char*)s2+12); s0=*(s32*)((char*)s2+16);
  D_802417F0(sp50,arg0,0x2710,0.0f,0x80000,0); *(void**)((char*)s1+0x270)=arg0; D_8024220C(arg0,(char*)arg0+0x168,sp50);
  *(f32*)((char*)arg0+0x2f4)=0.0f; *(s32*)((char*)s1+0x338)&=~4;
  D_80212AB8(sp68,&sp80);
  D_80253EB0(D_800CE0FC,s2,s2,0,s2,0x7ed,sp80,sp84,sp88,sp68[0],sp68[1],sp68[2],sp68[3],sp90,sp94,sp98,s0,-8,1,0); func_8025A554(arg0);
 }
}
