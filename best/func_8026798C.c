extern void *D_802046B8(void *, void *, s32, s32);
extern void func_80268DB4(void *, void *, void *, void *);
extern void func_802676F8(void *, s32, s32, s32, s32, f32, f32);
extern void func_802672DC(void *, void *, s32, s32, f32, f32);
extern void D_80221CCC(s32, void *);
extern void D_80221864(s32, void *);
extern f32 D_800A9C4C, D_800A9C50, D_800A9C60, D_800A9C64, D_800A9C68, D_800A9C78;
extern f64 D_800A9C58, D_800A9C70;
extern u8 D_800CCA80[];
void func_8026798C(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 scaleX, f32 scaleY, s32 flag) {
char *__repair_addr;

 void *obj; void *data; u8 tiled; u8 *cur; s32 x, y, w, h, rowW, rowCount; f32 xx, yy, step;
 obj=D_802046B8(D_800CCA80,arg0,4,1);
 if(obj) {
  data=0; tiled=0; func_80268DB4(obj,arg1,&data,&tiled);
  if(data) {
   if(flag) { u16 *d=data; x=(s16)arg2-(s32)(d[2]*scaleX*D_800A9C4C); y=(s16)arg3-(s32)(d[3]*scaleY*D_800A9C4C); }
   if(tiled) {
    cur=(u8*)data+8; step=((u16*)data)[1]-D_800A9C50; yy=(s16)y;
    if(step!=0.0f) do {
     rowW=((u16*)data)[0]; xx=(s16)x;
     if(rowW!=0) do {
      w=*(s32*)cur;
__repair_addr = (char *)(cur+4);
 h=*(s32*)(__repair_addr);
      func_802676F8(cur+8,(s32)xx,(s32)yy,w,h,scaleX,scaleY);
      xx+=(f32)w*scaleX; cur+=(w*h)/2+8;
     } while(xx!=D_800A9C60);
     yy+=(f32)h*scaleY; step-=D_800A9C60;
    } while(step!=0.0f);
   } else {
    cur=(u8*)data+8; step=((u16*)data)[1]-D_800A9C68; yy=(s16)y;
    if(step!=0.0f) do {
     rowW=((u16*)data)[0]; xx=(s16)x;
     if(rowW!=0) do {
      w=*(s32*)cur; h=*(s32*)(cur+4); rowCount=w*h;
      func_802672DC(cur+8,cur+8+rowCount*2,(s32)xx,(s32)yy,scaleX,scaleY);
      xx+=(f32)w*scaleX; cur+=rowCount*3+8;
     } while(xx!=D_800A9C78);
     yy+=(f32)h*scaleY; step-=D_800A9C78;
    } while(step!=0.0f);
   }
  }
  D_80221CCC(0,obj); D_80221864(0,obj);
 }
}
