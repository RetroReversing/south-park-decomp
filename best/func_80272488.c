s32 func_80295C28(s32);
s32 func_802964F0(s32, s16);
void func_80272488(s32 arg0, s16 arg1)
{
  s32 new_var4;
  s32 temp_s0;
  s16 *new_var;
  s32 temp_v1;
  int new_var3;
  s32 *new_var2;
  new_var4 = arg0;
  new_var2 = (arg1 * 0xB8) + new_var4;
  temp_v1 = *((s32 *) (((char *) (new_var2 + 4)) + 0xB0));
  new_var3 = temp_v1 + 0x84;
  temp_s0 = new_var3;
  new_var = (s16 *) (((char *) (temp_v1 + ((*new_var2) * 2))) + 0xDC);
  func_802964F0(temp_s0, *new_var);
  new_var2 = (s32 *) (((char *) new_var2) + 4);
  func_80295C28(temp_s0);
}
