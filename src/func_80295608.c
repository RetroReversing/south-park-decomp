extern f32 D_800AACC0; s32 func_80295A14(void*); s16 func_802959E4(void*);
void func_80295608(void *arg0,s32 arg1,s32 arg2) {
 s32 v; s16 t;
 *(s32*)arg0=arg1; *(s32*)((char*)arg0+0x10)=arg2; *(s16*)((char*)arg0+0x1a)=0; *(s32*)((char*)arg0+0xc)=0; *(s32*)((char*)arg0+8)=arg1;
 if(func_80295A14(arg0)==0x4d546864) {
  func_80295A14(arg0);
  if(func_802959E4(arg0)==0) {
   if(func_802959E4(arg0)==1) {
    t=func_802959E4(arg0); *(s16*)((char*)arg0+0x18)=t;
    if(!(t&0x8000)) {
     *(f32*)((char*)arg0+0x14)=D_800AACC0/(f32)t;
     if(func_80295A14(arg0)==0x4d54726b) {
      func_80295A14(arg0); *(s32*)((char*)arg0+4)=*(s32*)((char*)arg0+8);
     }
    }
   }
  }
 }
}
