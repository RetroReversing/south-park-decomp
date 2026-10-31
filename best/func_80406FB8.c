extern u8 D_800EE468[];
extern u8 D_800D7801[];
s32 func_80406FB8(void) {
 s32 i=0, count=i, off=i, bofs=i;
 for (; i<4; i++) {
  if (*(s32*)(D_800EE468+off)!=0) {
   if (D_800D7801[bofs]==0) { count=0; break; }
   count++;
  }
  bofs+=0x12; off+=0x230;
 }
 return count;
}
