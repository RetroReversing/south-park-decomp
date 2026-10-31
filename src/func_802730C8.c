s32 func_80295C28(s32);
s32 func_802964F0(s32, s16);
void func_802730C8(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  s32 temp_v1;
  temp_v1 = *((s32 *) (((char *) arg0) + 0xB0));
  temp_s0 = temp_v1 + 0x84;
  new_var = ((char *) (temp_v1 + ((*((s32 *) (((char *) arg0) + 0))) * 2))) + 0xDC;
  func_802964F0(temp_s0, *((s16 *) new_var));
  func_80295C28(temp_s0);
}
