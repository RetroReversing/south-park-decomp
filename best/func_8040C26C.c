s32 D_80209C78(s32 *, s32);
s32 D_8022D09C(s32 *);
extern s32 D_800CC760;
extern s32 D_800EE468;
extern s32 *D_8010E4F0;
s32 func_8040C26C(void)
{
  s32 *var_s0;
  int new_var;
  s32 var_s1;
  unsigned int new_var2;
  new_var2 = 0;
  var_s1 = new_var2;
  var_s0 = &D_800EE468;
  D_8010E4F0 = NULL;
  if (D_8022D09C(var_s0) != 0)
  {
    D_8010E4F0 = var_s0;
  }
  else
  {
    loop_1:
    var_s1 += 1;

    var_s0 += 0x230;
    if (var_s1 < 4)
    {
      goto loop_1;
    }
  }
  var_s1 = 0;
  var_s0 = &D_800CC760;
  D_80209C78(var_s0, var_s1);
  new_var = 0;
  return new_var;
}
