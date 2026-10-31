s32 func_8025D55C(void *);
s32 func_802832C8(void *);
void func_8025F92C(void *arg0)
{
  s32 var_s0;
  s32 var_s1;
  int new_var;
  var_s0 = 0;
  new_var = 0;
  if ((*((s32 *) (((char *) arg0) + 8))) > new_var)
  {
    var_s1 = 0;
    do
    {
      var_s0 += 1;
      func_802832C8((var_s1 + (*((s32 *) (((char *) arg0) + 4)))) + 0x540);
      var_s1 += 0xFB0;
    }
    while (var_s0 < (*((s32 *) (((char *) arg0) + 8))));
  }
  func_802832C8(arg0 + 0x580);
  func_8025D55C(arg0);
}
