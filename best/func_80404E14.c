extern s32 D_800BF0D8;
void func_80404E14(s32 arg0)
{
  int new_var;
  s32 var_a1;
  s8 *var_v1;
  var_a1 = 0xF;
  new_var = 0x23;
  var_v1 = (&D_800BF0D8) + new_var;
  *((s32 *) (((char *) (&D_800BF0D8)) + 0)) = 0;
  *((s32 *) (((char *) (&D_800BF0D8)) + 4)) = 0;
  *((s32 *) (((char *) (&D_800BF0D8)) + 8)) = 0;
  *((s32 *) (((char *) (&D_800BF0D8)) + 0xC)) = 0;
  *((s32 *) (((char *) (&D_800BF0D8)) + 0x10)) = arg0;
  do
  {
    *var_v1 = 0;
    var_a1 -= 1;
    var_v1 -= 1;
  }
  while (var_a1 >= 0);
}
