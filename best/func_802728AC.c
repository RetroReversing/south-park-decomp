struct Packed3 { s32 x; s32 y; s32 z; } __attribute__((packed));
extern void func_80270C68(void);
extern s32 func_80270F68(void *,void *,s32);
extern void *func_802705DC(void *,s16);
extern f32 func_8027E368(s32);
void func_802728AC(void *arg0, void *arg1, s32 arg2) {
char *__repair_addr;

 s16 id; void *v; f32 x;
 func_80270C68();func_80270F68(arg0,arg1,arg2);
__repair_addr = (char *)((u8 *)arg0+0x28);

 *(u16 *)(__repair_addr)=0x40;
 id=*(s16 *)((u8 *)arg1+0xc);
 if(id!=-1) {
  v=func_802705DC(*(void **)((u8 *)arg0+0xb0),id);
  *(struct Packed3 *)((u8 *)arg0+0x88)=*(struct Packed3 *)v;
  x=func_8027E368(*(u16 *)((u8 *)arg0+0x8a));
  *(f32 *)((u8 *)arg0+0x98)=(x-func_8027E368(*(u16 *)((u8 *)arg0+0x8c)))/(f32)*(s16 *)((u8 *)arg0+0x8e);
  *(f32 *)((u8 *)arg0+0x94)=func_8027E368(*(u16 *)((u8 *)arg0+0x8a));
  *(s32 *)((u8 *)arg0+0x84)=1;
  *(u16 *)((u8 *)arg0+0x28)=*(u16 *)((u8 *)arg0+0x8a);
  return;
 }
 *(s32 *)((u8 *)arg0+0x84)=0;
 if(*(s32 *)((u8 *)arg0+0xa4)<0x100) {
  if(*(s32 *)((u8 *)arg0+0xac)==0 && func_802706FC(*(void **)((u8 *)arg0+0xb0)))
   *(u16 *)((u8 *)arg0+0x28)=*(s8 *)((u8 *)*(void **)((u8 *)arg0+0xb0)+0x2798);
 } else if(*(s32 *)((u8 *)arg0+0xac)==0 && func_802706FC(*(void **)((u8 *)arg0+0xb0))) {
  *(u16 *)((u8 *)arg0+0x28)=func_80270B28((u8 *)arg0+0x40,*(s32 *)((u8 *)*(void **)((u8 *)arg0+0xb0)+0x279c));
 }
}
