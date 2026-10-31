void *func_8025F4AC(void *arg0, u8 *arg1)
{
  s32 a = *(s32 *)(arg1 + 0x26C);
  s32 b = *(s32 *)(arg1 + 0x270);
  s32 c = *(s32 *)(arg1 + 0x274);
  *(s32 *)((u8 *)arg0 + 0) = a;
  *(s32 *)((u8 *)arg0 + 4) = b;
  *(s32 *)((u8 *)arg0 + 8) = c;
  return arg0;
}
