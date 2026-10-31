s32 D_80296500(s32, s16);
s32 func_802964F0(s32, s16);
void func_80272FB4(void *arg0, s16 arg1)
{
  s32 temp_s0;
  char *new_var;
  s32 temp_s0_2;
  temp_s0 = *((s32 *) (((char *) arg0) + 0xB0));
  new_var = (char *) (temp_s0 + ((*((s32 *) (((char *) arg0) + 0))) * 2));
  temp_s0_2 = temp_s0 + 0x84;
  func_802964F0(temp_s0_2, *((s16 *) (new_var + 0xDC)));
  D_80296500(temp_s0_2, arg1);
}
