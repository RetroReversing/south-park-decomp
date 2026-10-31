void func_8026E1A8(void *arg0, s32 arg1, void *arg2)
{
  f32 temp_fv0f;
  f32 temp_fv0f_2;
  f32 temp_fv0f_3;
  f32 temp_fv0f_4;
  f32 temp_fv0f_5;
  f32 *new_var;
  f32 temp_fv0f_6;
  f32 var_fv0;
  f32 var_fv0_2;
  f32 var_fv0_3;
  f32 var_fv0_4;
  f32 var_fv0_5;
  f32 var_fv0_6;
  s32 var_v1;
  void *var_a2;
  var_a2 = arg2;
  var_v1 = 0;
  if (arg1 > 0)
  {
    do
    {
      var_fv0 = *((f32 *) (((char *) var_a2) + 0));
      new_var = (f32 *) (((char *) var_a2) + 8);
      temp_fv0f = *((f32 *) (((char *) arg0) + 0));
      if (!(var_fv0 <= temp_fv0f))
      {
        var_fv0 = temp_fv0f;
      }
      *((f32 *) (((char *) arg0) + 0)) = var_fv0;
      var_fv0_2 = *((f32 *) (((char *) var_a2) + 4));
      temp_fv0f_2 = *((f32 *) (((char *) arg0) + 4));
      if (!(var_fv0_2 <= temp_fv0f_2))
      {
        var_fv0_2 = temp_fv0f_2;
      }
      *((f32 *) (((char *) arg0) + 4)) = var_fv0_2;
      var_fv0_3 = *new_var;
      temp_fv0f_3 = *((f32 *) (((char *) arg0) + 8));
      if (!(var_fv0_3 <= temp_fv0f_3))
      {
        var_fv0_3 = temp_fv0f_3;
      }
      *((f32 *) (((char *) arg0) + 8)) = var_fv0_3;
      var_fv0_4 = *((f32 *) (((char *) var_a2) + 0));
      temp_fv0f_4 = *((f32 *) (((char *) arg0) + 0xC));
      if (!(temp_fv0f_4 <= var_fv0_4))
      {
        if (var_fv0_5)
        {
          var_fv0_4 = temp_fv0f_4;
        }
        else
        {
          var_fv0_4 = temp_fv0f_4;
        }
      }
      *((f32 *) (((char *) arg0) + 0xC)) = var_fv0_4;
      var_fv0_5 = *((f32 *) (((char *) var_a2) + 4));
      temp_fv0f_5 = *((f32 *) (((char *) arg0) + 0x10));
      if (!(temp_fv0f_5 <= var_fv0_5))
      {
        var_fv0_5 = temp_fv0f_5;
      }
      *((f32 *) (((char *) arg0) + 0x10)) = var_fv0_5;
      var_fv0_6 = *new_var;
      temp_fv0f_6 = *((f32 *) (((char *) arg0) + 0x14));
      if (!(temp_fv0f_6 <= var_fv0_6))
      {
        var_fv0_6 = temp_fv0f_6;
      }
      *((f32 *) (((char *) arg0) + 0x14)) = var_fv0_6;
      var_v1 += 1;
      var_a2 += 0xC;
    }
    while (var_v1 < arg1);
  }
}
