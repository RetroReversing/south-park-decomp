s32 func_8026ADD8(u8 *arg0, s32 arg1)
{
  s32 byte = arg1 / 8;
  s32 bit = arg1 % 8;
  int new_var;
  s32 v;
  new_var = 1 << bit;
  return (arg0[byte] & new_var) != 0;
}

void func_8026AE10(u8 *arg0, s32 arg1, s32 arg2);
void func_8026AE64(u8 *arg0, s32 arg1);
