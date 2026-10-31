s32 func_802A3A00(s32 a);
void func_802A3E14(s32 a0, s32 a1);

void func_802A423C(s32 dst, s32 arg1, s32 n)
{
  s32 src;
  s32 c;
  src = arg1;
  c = n - 1;
  if (n != 0)
  {
    do
    {
      func_802A3E14(dst++, func_802A3A00(src++) & 0xFF);
    }
    while (--c != -1);
  }
}
