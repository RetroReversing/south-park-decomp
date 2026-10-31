s32 D_8021E710(void *, s32);
s32 *D_8022154C(s32, s32, s32, void *);
s32 func_80402148();
extern char D_800BC3C0[];
s32 func_80403BF4(void *arg0, void *arg1, void *arg2)
{
  char *var_v1;
  s16 temp_v0;
  s16 temp_v1;
  s32 *temp_v0_2;
  s32 temp_s0;
  void *new_var4;
  s32 temp_s3;
  s32 *new_var2;
  s32 temp_s4;
  s32 temp_s5;
  s32 temp_s6;
  char *new_var5;
  s32 var_a0;
  s32 var_a2;
  int new_var;
  s32 new_var3;
  s32 var_v0;
  u16 temp_v0_3;
  var_a0 = 0;
  new_var2 = (s32 *) (((char *) arg1) + 0x20);
  temp_v1 = *((s16 *) (((char *) arg2) + 4));
  temp_s3 = *((s32 *) (((char *) arg1) + 0x1C));
  temp_s4 = *new_var2;
  temp_s5 = *((s32 *) (((char *) arg1) + 0x24));
  temp_s6 = *((s32 *) (((char *) arg1) + 0x28));
  var_a2 = temp_v1 * 0x28;
  new_var = 0;
  new_var = temp_v1 > new_var;
  var_a2 = var_a2;
  var_a2 = var_a2 + 0x1D8;
  if (new_var)
  {
    var_v1 = *((s16 **) (((char *) arg2) + 0));
    do
    {
      temp_v0 = *((s16 *) var_v1);
      if (!(temp_v0 == 4))
      {
        var_v0 = 0;
 do { if (temp_v0 == 5) { var_v0 = 0x1B8; } } while (0);
      }
      else
      {
        var_v0 = 0x430;
      }
      var_a2 += var_v0;
      var_a0 += 1;
      var_v1 += 0x20;
    }
    while (var_a0 < temp_v1);
  }
  temp_v0_2 = D_8022154C(0, var_a2, 0x3B, D_800BC3C0 + 4);
  if (temp_v0_2 == NULL)
  {
    if (arg0 || temp_s0)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  temp_s0 = *temp_v0_2;
  if (temp_s0 == 0)
  {
    return 0;
  }
  func_80402148(temp_s0, temp_v0_2, arg2, temp_s3, new_var3 = temp_s4, temp_s5, temp_s6, arg0);
  new_var4 = arg0;
  D_8021E710(new_var4, temp_s0);
  temp_v0_3 = (*((u16 *) (((char *) arg0) + 0x14))) + 1;
  *((u16 *) (((char *) arg0) + 0x14)) = temp_v0_3;
  if (((s16) temp_v0_3) >= 4)
  {
    new_var5 = (char *) new_var4;
    *((u16 *) (new_var5 + 0x14)) = 0U;
  }
  return temp_s0;
}
