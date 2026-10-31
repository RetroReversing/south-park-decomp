s32 func_80296428(s32, s32);
s32 func_802964F0(s32, s16);
void func_80273074(void *arg0, s32 arg1)
{
  s32 temp_s0;
  s32 temp_s0_2;
  int new_var;
  temp_s0 = *((s32 *) (((char *) arg0) + 0xB0));
  temp_s0_2 = temp_s0 + 0x84;
  new_var = 2;
  func_802964F0(temp_s0_2, *((s16 *) (((char *) (temp_s0 + ((*((s32 *) (((char *) arg0) + 0))) * new_var))) + 0xDC)));
  func_80296428(temp_s0_2, arg1 & 0xFF);
}
