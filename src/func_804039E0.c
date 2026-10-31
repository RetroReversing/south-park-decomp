s32 D_8022D0BC(s32);
s32 D_8022D0D4(s32);
static inline int inline_fn(s32 arg0, s32 arg1)
{
  return arg0 + arg1;
}

s32 func_804039E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
  s32 temp_s0;
  s32 var_s0_2;
  s32 var_v0;
  var_s0_2 = arg1;
  if (D_8022D0BC(*((s32 *) (((char *) arg0) + 0x24))) != 0)
  {
    var_s0_2 -= arg2;
    if (var_s0_2 < arg3)
    {
      var_s0_2 = arg3;
      if (arg5 != 0)
      {
        var_s0_2 = arg4;
      }
    }
  }
  var_v0 = var_s0_2;
  temp_s0 = 0;
  if (D_8022D0D4(*((s32 *) (((char *) arg0) + 0x24))) != temp_s0)
  {
    temp_s0 = arg2;
    temp_s0 = inline_fn(var_s0_2, temp_s0);
    var_v0 = temp_s0;
    if (arg4 < temp_s0)
    {
      var_s0_2 = arg4;
      if (arg5 != 0)
      {
        var_s0_2 = arg3;
      }
      var_v0 = var_s0_2;
    }
  }
  return var_v0;
}
