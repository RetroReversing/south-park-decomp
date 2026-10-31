extern f32 D_800A9A8C,D_800A9A90;extern void *D_800CC760;extern s32 D_802096E0(void*,s8*,s32,s32,s32,s32);
void func_80260808(void *arg0) {
char *__repair_addr;

 s8 rgb[4]; f32 alpha; s32 ai;
 if (*(s8 *)((u8 *)arg0 + 0x511)) {
   rgb[0]=0; rgb[1]=0; rgb[2]=0;
__repair_addr = (char *)((u8 *)arg0+0x514);

   alpha=*(f32 *)(__repair_addr);
   if (alpha < 0.0f) ai=0;
   else if (D_800A9A8C < alpha) ai=-1;
   else if (!(alpha < 0.0f)) ai=(s32)(alpha * D_800A9A90);
   else ai=0;
   rgb[3]=ai;
   {
     f32 b=*(f32 *)((u8 *)arg0+0x2B0);
     f32 c=*(f32 *)((u8 *)arg0+0x2A8);
     f32 d=*(f32 *)((u8 *)arg0+0x2B4);
     f32 e=*(f32 *)((u8 *)arg0+0x2AC);
     D_802096E0(D_800CC760,rgb,(s32)b,(s32)d,(s32)(b+c),(s32)(d+e));
   }
 }
}
