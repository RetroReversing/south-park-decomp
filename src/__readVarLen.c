u8 func_80291B40(void *a, s32 b);
s32 __readVarLen(void *a, s32 b)
{
  s32 result;
  int x;
  result = func_80291B40(a, b);
  x = result;
  if (x & 0x80)
  {
    result = x & 0x7F;
    do
    {
      x = func_80291B40(a, b);
      result = (result << 7) + (x & 0x7F);
    }
    while (x & 0x80);
  }
  return result;
}
