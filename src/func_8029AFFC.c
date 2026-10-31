extern s8 D_800F6050;
void func_8029AFFC(void)
{
  s32 var_v0;
  unsigned char new_var;
  unsigned int new_var2;
  s8 *var_v1;
  var_v1 = &D_800F6050;
  *((s32 *) (((char *) (&D_800F6050)) + 0x3C)) = 1;
  new_var = 0xFD;
  new_var2 = 0xFE;
  var_v0 = 3;
  do
  {
    *var_v1 = new_var;
    var_v0 -= 1;
    var_v1 += 1;
  }
  while (var_v0 >= 0);
  *var_v1 = new_var2;
}
