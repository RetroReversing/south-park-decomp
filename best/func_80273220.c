#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
void *func_802705DC();
void func_80273220(void *arg0, void *arg1){
char *__repair_addr;

 s16 id; void *data; f32 start,end; s32 ok;
__repair_addr = (char *)(arg0+0x28);

 *(s16 *)(__repair_addr)=0x40;
 id=*(s16 *)(arg1+0xC);
 if(id!=-1){
  data=func_802705DC(*(void **)(arg0+0xB0),id);
  *(u32 *)(arg0+0x88)=*(u32 *)(data);
  *(u32 *)(arg0+0x8C)=*(u32 *)(data+4);
  *(u32 *)(arg0+0x90)=*(u32 *)(data+8);
  start=func_8027E368(*(u16 *)(arg0+0x8A));
  end=func_8027E368(*(u16 *)(arg0+0x8C));
  *(f32 *)(arg0+0x98)=(start-end)/(f32)*(s16 *)(arg0+0x8E);
  *(f32 *)(arg0+0x94)=func_8027E368(*(u16 *)(arg0+0x8A));
  *(s32 *)(arg0+0x84)=1;
  *(s16 *)(arg0+0x28)=*(u16 *)(arg0+0x8A);
  return;
 }
 *(s32 *)(arg0+0x84)=0;
 if(*(s32 *)(arg0+0xA4)<0x100){
  if(*(s32 *)(arg0+0xAC)==0 && func_802706FC(*(void **)(arg0+0xB0))){
   *(s16 *)(arg0+0x28)=*(s8 *)(*(void **)(arg0+0xB0)+0x2798);
  }
 } else if(*(s32 *)(arg0+0xAC)==0 && func_802706FC(*(void **)(arg0+0xB0))){
  *(s16 *)(arg0+0x28)=func_80270B28(arg0+0x40,*(s32 *)(*(void **)(arg0+0xB0)+0x279C));
 }
}
