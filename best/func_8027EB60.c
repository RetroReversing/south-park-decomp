s32 D_80210ADC(s32, s32);
s32 D_80221410(s32 *);
void func_8027EB60(void *arg0, void *arg1)
{
  f32 temp_fs0;
  f32 var_fv0;
  s16 temp_a0_2;
  s16 temp_a0_4;
  s32 *temp_a0;
  s32 temp_a0_3;
  s32 temp_fv0f;
  s32 temp_fv0f_2;
  s32 temp_fv0f_3;
  s32 temp_fv0f_4;
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v0;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_s4;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  temp_a0 = *((s32 **) (((char *) arg0) + 0x10));
  if (temp_a0 == NULL)
  {
    var_v0 = 0;
  }
  else
  {
    var_v0 = D_80221410(temp_a0) != 0;
  }
  if (var_v0 != 0)
  {
    var_s4 = *((s32 *) (((char *) arg0) + 0xC));
    temp_s1 = *(*((s32 **) (((char *) arg0) + 0x10)));
    temp_fs0 = *((f32 *) (((char *) arg0) + 0));
    temp_s0 = D_80210ADC(temp_s1, 1);
    temp_v0 = D_80210ADC(temp_s1, 5);
    *((s32 *) (((char *) arg1) + 0)) = (s32) (temp_s0 + 8);
    *((s32 *) (((char *) arg1) + 4)) = (s32) (D_80210ADC(temp_s1, 2) + 8);
    *((s32 *) (8 + ((char *) arg1))) = D_80210ADC(temp_v0, 1);
    *((s32 *) (((char *) arg1) + 0xC)) = D_80210ADC(temp_v0, 2);
    if (temp_fs0 >= 0.0f)
    {
      var_v0_2 = (s32) temp_fs0;
      goto block_8;
    }
    temp_fv0f = (s32) temp_fs0;
    var_fv0 = (f32) temp_fv0f;
    if (var_fv0 != temp_fs0)
    {
      var_v0_2 = temp_fv0f - 1;
      block_8:
      var_fv0 = (f32) var_v0_2;

    }
    *((f32 *) (((char *) arg1) + 0x20)) = (f32) (temp_fs0 - var_fv0);
    if (var_s4 == 0xFFFF)
    {
      var_s4 = 0;
      if (temp_fs0 >= 0.0f)
      {
        var_v1 = (s32) temp_fs0;
      }
      else
      {
        temp_fv0f_2 = (s32) temp_fs0;
        var_v1_2 = 1;
        if (((f32) temp_fv0f_2) == temp_fs0)
        {
          var_v1_2 = 0;
        }
        var_v1 = temp_fv0f_2 - var_v1_2;
      }
      temp_a0_2 = *((s16 *) (((char *) arg0) + 8));
      if (var_v1 >= temp_a0_2)
      {
        var_v1 = 0;
      }
      var_a1 = var_v1 + 1;
      if (var_a1 >= temp_a0_2)
      {
        var_a1 = 0;
      }
    }
    else
    {
      if (temp_fs0 >= 0.0f)
      {
        var_v1 = (s32) temp_fs0;
      }
      else
      {
        temp_fv0f_3 = (s32) temp_fs0;
        var_v1_3 = 1;
        if (((f32) temp_fv0f_3) == temp_fs0)
        {
          var_v1_3 = 0;
        }
        var_v1 = temp_fv0f_3 - var_v1_3;
      }
      temp_a0_3 = (*((s16 *) (((char *) arg0) + 8))) - 1;
      var_a1 = var_v1 + 1;
      if (var_v1 >= temp_a0_3)
      {
        var_v1 = *((s32 *) (((char *) arg0) + 0xC));
        var_a1 = var_v1 + 1;
      }
      if (var_a1 >= temp_a0_3)
      {
        var_a1 = *((s32 *) (((char *) arg0) + 0xC));
      }
    }
    *((s32 *) (((char *) arg1) + 0x10)) = var_v1;
    *((s32 *) (((char *) arg1) + 0x14)) = var_a1;
    if (temp_fs0 >= 0.0f)
    {
      var_v1_4 = (s32) temp_fs0;
    }
    else
    {
      temp_fv0f_4 = (s32) temp_fs0;
      var_v1_5 = 1;
      if (((f32) temp_fv0f_4) == temp_fs0)
      {
        var_v1_5 = 0;
      }
      var_v1_4 = temp_fv0f_4 - var_v1_5;
    }
    temp_a0_4 = *((s16 *) (((char *) arg0) + 8));
    if (var_v1_4 >= temp_a0_4)
    {
      var_v1_4 = var_s4;
    }
    var_a1_2 = var_v1_4 + 1;
    if (var_a1_2 >= temp_a0_4)
    {
      if (var_v1_4 || var_v1)
      {
        var_a1_2 = var_s4;
      }
      else
      {
        var_a1_2 = var_s4;
      }
    }
    *((s32 *) (((char *) arg1) + 0x18)) = var_v1_4;
    *((s32 *) (((char *) arg1) + 0x1C)) = var_a1_2;
  }
}
