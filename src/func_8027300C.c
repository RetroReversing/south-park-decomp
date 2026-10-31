s32 func_80296478(s32, f32);
s32 func_802964F0(s32, s16);
void func_8027300C(void *arg0, f32 arg1)
{
  s32 temp_s0;
  char *new_var;
  s32 temp_s0_2;
  temp_s0 = *((s32 *) (((char *) arg0) + 0xB0));
  temp_s0_2 = temp_s0 + 0x84;
  func_802964F0(temp_s0_2, *((s16 *) ((new_var = (char *) (temp_s0 + ((*((s32 *) (((char *) arg0) + 0))) * 2))) + 0xDC)));
  func_80296478(temp_s0_2, arg1 * (*((f32 *) (((char *) arg0) + 0x30))));
}
