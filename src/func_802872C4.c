extern f32 D_800AA55C, D_800AA560; extern s32 D_20E8EC; f32 D_80215BE0(f32,f32); s32 D_8021563C(void);
void func_802872C4(void *arg0, void *arg1) {
 f32 x=D_800AA55C, y=D_800AA560;
 *(s32*)((char*)arg1+0x68)=0;
 *(s32*)((char*)arg1+0x6c)=0;
 *(s32*)((char*)arg1+0x70)=0;
 *(f32*)((char*)arg1+0xa8)=D_80215BE0(x,y);
 *(f32*)((char*)arg1+0x160)=D_80215BE0(x,y);
 if(*(u16*)((char*)arg0+0xd8)==1000) {
  s32 v=D_8021563C();
  *(s32*)((char*)arg1+0xc8)=&D_20E8EC;
  v=v-(v/6)*6;
  *(s32*)((char*)arg1+0x17c)=v;
  *(s32*)((char*)arg1+0x180)=v;
 }
}
