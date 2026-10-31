s32 func_802623C4(s32, void *, void *);
s32 func_80262770(void *);
extern s32 D_800A9AB0;
extern f32 D_800A9AB8;
extern s32 D_800ABA00;
extern f32 D_800ABA08;
s32 func_80260EBC(s32 arg0, void *arg1)
{
  f32 temp_fs0f;
  f32 temp_fs1;
  f32 temp_fs1f;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0f;
  s32 temp_v0;
  s32 var_v0;
  void *temp_s1;
  void *temp_v1;
  void *var_a2;
  temp_fs1f = *((f32 *) (((char *) (&D_800ABA00)) + 0));
  if ((*((s32 *) (((char *) arg1) + 0x3C))) & 2)
  {
    *((f32 *) (((char *) (&D_800ABA00)) + 0)) = (f32) (temp_fs1f * D_800ABA08);
  }
  if ((*((s32 *) (((char *) arg1) + 0x3C))) & 1)
  {
    *((f32 *) (((char *) (&D_800ABA00)) + 0)) = (f32) ((*((f32 *) (((char *) (&D_800ABA00)) + 0))) * (*((f32 *) (((char *) (&D_800ABA00)) + 4))));
  }
  if ((*((s32 *) (((char *) arg1) + 0x3C))) & 8)
  {
    temp_v0 = (*((s32 *) (((char *) arg1) + 0x50))) + 1;
    *((s32 *) (((char *) arg1) + 0x50)) = temp_v0;
    if (temp_v0 >= 3)
    {
      *((void **) (((char *) arg1) + 0x1C)) = NULL;
    }
  }
  if ((*((f32 *) (((char *) arg1) + 0x2C))) >= 0.0f)
  {
    *((f32 *) (((char *) arg1) + 0x30)) = (f32) ((*((f32 *) (((char *) arg1) + 0x30))) + (*((f32 *) (((char *) (&D_800ABA00)) + 0))));
  }
  temp_fv0 = (*((f32 *) (((char *) arg1) + 0x24))) - (*((f32 *) (((char *) (&D_800ABA00)) + 0)));
  *((f32 *) (((char *) arg1) + 0x24)) = temp_fv0;
  if (temp_fv0 < 0.0f)
  {
    *((f32 *) (((char *) arg1) + 0x24)) = 0.0f;
  }
  var_a2 = *((void **) (((char *) arg1) + 0x40));
  if (var_a2 != NULL)
  {
    temp_fs1 = *((f32 *) (((char *) (&D_800A9AB0)) + 4));
    temp_fs0f = D_800A9AB8;
    do
    {
      temp_s1 = *((void **) (((char *) var_a2) + 4));
      if (((*((f32 *) (((char *) arg1) + 0x24))) <= 0.0f) && ((*((f32 *) (((char *) var_a2) + 8))) > 0.0f))
      {
        *((f32 *) (((char *) var_a2) + 8)) = 0.0f;
      }
      temp_fv0f = *((f32 *) (((char *) var_a2) + 8));
      if (temp_fv0f <= 0.0f)
      {
        temp_fv0_2 = temp_fv0f - temp_fs1;
        *((f32 *) (((char *) var_a2) + 8)) = temp_fv0_2;
        if (temp_fv0_2 < temp_fs0f)
        {
          func_802623C4(arg0, arg1, var_a2);
          var_a2 = temp_s1;
        }
        else
        {
          goto block_21;
        }
      }
      else
      {
        temp_fv0_3 = temp_fv0f - (*((f32 *) (((char *) (&D_800ABA00)) + 0)));
        *((f32 *) (((char *) var_a2) + 8)) = temp_fv0_3;
        if (temp_fv0_3 < 0.0f)
        {
          *((f32 *) (((char *) var_a2) + 8)) = 0.0f;
        }
        block_21:
        var_a2 = temp_s1;

      }
    }
    while (var_a2 != NULL);
  }
  temp_v1 = *((void **) (((char *) arg1) + 0x1C));
  if (((temp_v1 != NULL) && ((*((s32 *) (((char *) arg1) + 0x3C))) & 1)) && (!((*((s32 *) (((char *) temp_v1) + 0xF4))) & 0x10000)))
  {
    func_80262770(arg1);
  }
  *((f32 *) (((char *) (&D_800ABA00)) + 0)) = temp_fs1f;
  var_v0 = 1;
  if ((*((s32 *) (((char *) arg1) + 0x48))) == 0)
  {
    var_v0 = 0;
    if ((*((f32 *) (((char *) arg1) + 0x24))) != 0.0f)
    {
      var_v0 = 1;
      if ((*((void **) (((char *) arg1) + 0x1C))) == NULL)
      {
        var_a2 = *((void **) (((char *) arg1) + 0x40));
        var_v0 = 0;
      }
    }
  }
  return var_v0;
}
