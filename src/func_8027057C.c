s32 func_802705AC(void *arg0,s32 arg1){return *(s32*)((u8*)arg0+0x2774)+arg1*12;}
extern f64 D_800A9EF0;void func_8027057C(void *arg0,s32 arg1){
char *__repair_addr;
f64 d=(f64)arg1;if(arg1<0)d+=D_800A9EF0;
__repair_addr = (char *)((u8*)arg0+0x27A4);
*(f32*)(__repair_addr)=(f32)d;}
extern s32 D_800B1E80,D_800D78F0;extern void *func_8025FB20();extern void func_8026F7BC();
void func_802704C4(void *arg0){f32 a,b,c;void *p,*q;if(D_800B1E80&&*(s32*)((u8*)arg0+0x27B4)&&D_800D78F0==13&&*(s32*)((u8*)arg0+0x134)>0){a=b=c=0.0f;p=func_8025FB20((u8*)&D_800D78F0-0x13F8,&a);q=(u8*)p+0x134;if((*(u32*)((u8*)arg0+0x104)&3)==0)func_8026F7BC(arg0,*(s32*)((u8*)arg0+0x134),*(s32*)((u8*)p+0x134),*(s32*)((u8*)q+4),*(s32*)((u8*)q+8),0,0,-1);}}
extern s32 D_802A0520();extern s32 func_802A0500();extern s32 func_8029DDA0();
void func_802703E8(void *arg0){s32 id=func_802A0500();void *s=(u8*)arg0+0x110;s32 v=*(s32*)((u8*)s+0x1C)-1;*(s32*)((u8*)s+0x1C)=v;if(v){D_802A0520(id);func_8029DDA0(s,0,1);}else D_802A0520(id);}
