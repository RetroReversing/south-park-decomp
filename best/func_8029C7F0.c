void *func_8029C708(void); s32 func_8029C920(s32); s32 func_8029C938(s32,s32,s32,s32); s32 func_8029CA38(s32); void func_8029CA68(s32); void func_802A0828(void*,s32); extern u32 D_A0000000;
void func_8029C7F0(void *arg0) {
 void *p=func_8029C708(); s32 x;
 if (*(u32*)((u8*)p+4)&1) {
  *(s32*)((u8*)p+0x18)=*(s32*)((u8*)p+0x38);
  *(s32*)((u8*)p+0x1c)=*(s32*)((u8*)p+0x3c);
  *(s32*)((u8*)arg0+4)=*(s32*)((u8*)arg0+4)&~1;
  if (*(u32*)((u8*)p+4)&4) {
    x=*(s32*)((u8*)arg0+0x38);
    *(s32*)((u8*)p+0x10)=*(s32*)((x+0xbfc)|0xA0000000);
  }
 }
 func_802A0828(p,0x40); func_8029CA68(0x2b00);
 while(func_8029CA38(0x04001000)==-1){}
 while(func_8029C938(1,0x04000fc0,(s32)p,0x40)==-1){}
 while(func_8029C920(1)!=0){}
 while(func_8029C938(1,0x04001000,*(s32*)((u8*)p+8),*(s32*)((u8*)p+0xc))==-1){}
}
