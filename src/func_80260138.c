s32 D_8021E76C(void *, s32);
s32 D_8021E930(void *, s32);
s32 func_8026021C(s32);
s32 func_80260138(void *arg0, void *arg1)
{
  long var_v0;
  void *temp_s0;
  void *var_a0;
  if ((*((s8 *) (((char *) arg1) + 0x510))) == 0)
  {
    return 0;
  }
  var_v0 = *((s32 *) (((char *) arg0) + 0xFFC));
  if (var_v0)
  {
    func_8026021C(var_v0);
    D_8021E930(arg0 + 0xFFC, var_v0);
    var_a0 = arg1 + 0xDD0;
    goto block_6;
  }
  var_v0 = *((s32 *) (((char *) arg1) + 0xDD0));
  var_v0 = var_v0;
  if (var_v0)
  {
    func_8026021C(var_v0);
    temp_s0 = arg1 + 0xDD0;
    D_8021E930(temp_s0, var_v0);
    var_a0 = temp_s0;
    block_6:
    var_v0 = var_v0;

    D_8021E76C(var_a0, var_v0);
  }
  return var_v0;
}
