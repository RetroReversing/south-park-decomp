extern u8 D_800CE611[];
s8 func_80268BC0(s32 arg0);
inline int inline_fn(u8 arg0)
{
  return arg0 * 3;
}

void func_802697F8(u8 *arg0, u8 *arg1, u8 *arg2)
{
  u8 i = 0;
  u8 v;
  do
  {
    arg2[i * 2] = 0xFF;
    i++;
  }
  while (i < 0xFF);
  i = 0;
  do
  {
    v = arg1[inline_fn(i)];
    if (v < 0xFF)
    {
      arg2[v * 2] = arg1[inline_fn(i) + 2];
      arg2[(v * 2) + 1] = arg1[inline_fn(i) + 1];
    }
    i++;
  }
  while (v < 0xFF);
}

void func_80269A98(void *arg0, s32 arg1, s32 arg2);
