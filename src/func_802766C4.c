typedef struct 
{
  u8 state;
  char pad[0xF3];
  s32 flags;
} Obj;
s32 func_802766C4(void *arg0, Obj *arg1)
{
  s32 res = 0;
  if (arg1->state == 1)
  {
    res = 0;
    res = (arg1->flags & 0x18000000) != res;
  }
  return res;
}
