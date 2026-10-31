extern void *D_800D6358;
void *func_8025F6D0(s32 arg0) {
 void *p=D_800D6358;
 while(p) {
   if (*(s32 *)((u8 *)p+0xA54)==arg0) return p;
   p=*(void **)((u8 *)p+0x159C);
 }
 return 0;
}
extern f32 D_800A9A20;
void func_8025F708(void *arg0,f32 a1,f32 a2,f32 a3,f32 a4,s32 a5,s32 a6,s32 a7,s32 a8) {
 s32 t0=a6,t1=a7,t2=a8;
 *(s32 *)((u8 *)arg0+0xE0)=t0; *(s32 *)((u8 *)arg0+0xE4)=t1; *(s32 *)((u8 *)arg0+0xE8)=t2;
 *(f32 *)((u8 *)arg0+0xEC)=a4;
 *(s32 *)((u8 *)arg0+0xF0)=a5;
 *(s32 *)((u8 *)arg0+0x104)=a5; *(s32 *)((u8 *)arg0+0x118)=a5;
 *(f32 *)((u8 *)arg0+0xF4)=a1*D_800A9A20;
 *(f32 *)((u8 *)arg0+0x108)=a2*D_800A9A20;
 *(f32 *)((u8 *)arg0+0x11C)=a3*D_800A9A20;
}
extern void D_80213C6C(void *, f32 *);
extern f32 D_800A9A18;
void func_8025F630(void *arg0, f32 *arg2, f32 *arg3) {
 f32 sp10, t, u;
 D_80213C6C((u8 *)arg0+0x1EC,&sp10);
 t=*(f32 *)((u8 *)arg0+0x2A8);
 *arg2=sp10*D_800A9A18*t + t*D_800A9A18 + *(f32 *)((u8 *)arg0+0x2B0);
 u=*(f32 *)((u8 *)arg0+0x2AC);
 *arg3=(*(f32 *)((u8 *)arg0+0x14))*D_800A9A18*-u + u*D_800A9A18 + *(f32 *)((u8 *)arg0+0x2B4);
}
extern void D_802131C4(f32 *, void *, s32);
extern void func_8029AA80(f32);
void func_8025F82C(void *arg0,s32 arg1) {
 f32 v[3];
 D_802131C4(v,(u8 *)arg0+0x134,arg1);
 func_8029AA80(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
}
