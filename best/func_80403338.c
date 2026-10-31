s32 D_8021E710(void *, s32);
s32 *D_8022154C(s32, s32, s32, void *);
s32 func_80402148();
extern char D_800BC3C0[];
s32 func_80403338(void *arg0, void *arg1)
{
  int __repair_literal;
  s16 temp_v0;
  s16 temp_v1;
  s32 *temp_v0_2;
  s32 temp_s1;
  s32 temp_s3;
  s32 temp_s4;
  s32 temp_s5;
  s32 temp_s6;
  s32 var_a0;
  s32 var_a1;
  s32 var_v0;
  u16 temp_v0_3;
  void *var_s0;
  var_s0 = *((void **) (((char *) arg1) + 0x1C));
  if ((var_s0 != NULL) || ((var_s0 = *((void **) (((char *) (*((void **) (((char *) arg1) + 0x18)))) + 0x24)), var_s0 != NULL)))
  {
    var_a0 = 0;
    temp_v1 = *((s16 *) (((char *) var_s0) + 4));
    temp_s3 = *((s32 *) (((char *) var_s0) + 0x24));
    temp_s4 = *((s32 *) (((char *) arg1) + 0x20));
    temp_s5 = *((s32 *) (((char *) arg1) + 0x24));
    temp_s6 = *((s32 *) (((char *) arg1) + 0x28));
    var_a1 = (temp_v1 * 0x28) + 0x1D8;
    __repair_literal = 0;
    if (temp_v1 > __repair_literal)
    {
      var_s0 = *((s16 **) (((char *) var_s0) + 0));
      do
      {
        temp_v0 = *((s16 *) var_s0);
        if (temp_v0 == 4)
        {
          var_v0 = 0x430;
        }
        else
        {
          var_v0 = 0;
          if (temp_v0 == 5)
          {
            var_v0 = 0x1B8;
          }
        }
        var_a1 += var_v0;
        var_a0 += 1;
        var_s0 += 0x20;
      }
      while (var_a0 < temp_v1);
    }
    temp_v0_2 = D_8022154C(0, var_a1, 0x3B, D_800BC3C0 + 4);
    if (temp_v0_2 != NULL)
    {
      temp_s1 = *temp_v0_2;
      if (temp_s1 != 0)
      {
        func_80402148(temp_s1, temp_v0_2, var_s0, temp_s3, temp_s4, temp_s5, temp_s6, arg0);
        D_8021E710(arg0, temp_s1);
        temp_v0_3 = (*((u16 *) (((char *) arg0) + 0x14))) + 1;
        *((u16 *) (((char *) arg0) + 0x14)) = temp_v0_3;
        if (((s16) temp_v0_3) >= 4)
        {
          *((u16 *) (((char *) arg0) + 0x14)) = 0U;
        }
        return temp_s1;
      }
    }
    return 0;
  }
  return 0;
}
