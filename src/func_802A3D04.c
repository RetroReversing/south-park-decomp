u32 func_802A3844(s32); s32 func_802A3A00(s32); s32 func_802A3CC8(s32,u32);
void func_802A3D04(s32 arg0,s32 arg1,u32 arg2) {
 s32 src=arg0; s32 dst=arg1; u32 n=arg2; u32 word;
 while(n!=0 && (src&3)!=0) {
   func_802A3CC8(dst++,func_802A3A00(src++)&255);
   n--;
 }
 while(n>=4) {
  word=func_802A3844(src);
  func_802A3CC8(dst++,word>>24);
  func_802A3CC8(dst++,(word>>16)&255);
  func_802A3CC8(dst++,(word>>8)&255);
  func_802A3CC8(dst++,word&255);
  src+=4; n-=4;
 }
 while(n) {func_802A3CC8(dst++,func_802A3A00(src++)&255); n--;}
}
