s32 D_8022D288();
s32 func_8026AC4C(s32 *, s32, s32);
s32 func_804083BC(s32 *, s32);
s32 func_804085F8();
s32 func_804087CC();
s32 func_80408C4C();
s32 func_80408DC4(s32);
s32 func_80408E14(s32);
extern s32 D_8010E2F8;
extern s32 D_8010E4B8;
extern s16 D_8010E4D4;
extern s32 D_8010E4D6;
extern s32 D_8010E4E4;
extern s16 D_8010E4FC;
extern s32 D_8010E504;
s32 func_8040967C(void)
{
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 var_s1;
  s32 var_s3;
  temp_v0 = func_804085F8();
  D_8010E504 = temp_v0;
  if (temp_v0 == (-8))
  {
    temp_v0_2 = func_804087CC();
    if (temp_v0_2 == 0)
    {
      if (D_8010E4E4 != 0)
      {
        D_8010E4E4 = 2;
      }
      temp_v0_3 = func_804083BC(&D_8010E2F8, 0x1C0);
      *((s32 *) (((char *) (&D_8010E2F8)) + 0x1C0)) = temp_v0_3;
      if (temp_v0_3 < 0)
      {
        var_s3 = temp_v0_3;
        *((s32 *) (((char *) (&D_8010E2F8)) + 0x1C0)) = 0;
      }
      else
      {
        var_s3 = 0;
      }
      var_s1 = 0;
      *((s16 *) (((char *) (&D_8010E4D6)) + 0)) = 0;
      *((s16 *) (((char *) (&D_8010E4D6)) - 2)) = 0;
      if ((*((s32 *) (((char *) (&D_8010E4D6)) + (-0x1E)))) > 0)
      {
        do
        {
          temp_v0_4 = func_80408DC4((unsigned int) var_s1);
          if (temp_v0_4 == (-3))
          {
            D_8010E4D4 = 1;
          }
          if (temp_v0_4 == 0)
          {
            *((s16 *) (((char *) (&D_8010E4D6)) + 0)) = 1;
          }
          var_s1 += 1;
        }
        while (var_s1 < D_8010E4B8);
      }
      ;
      if (var_s3 != 0)
      {
        if (var_s3 == (-3))
        {
          func_80408E14(0);
        }
        func_8026AC4C(&D_8010E2F8, 0, 0x1E0);
        D_8010E504 = temp_v0_4;
        goto block_22;
      }
      D_8010E504 = 0;
      return -8;
    }
    if (1)
    {
      if (temp_v0_2 == (-3))
      {
        func_80408E14(0);
      }
      temp_v0_2 = 0x1E0;
    }
    func_8026AC4C(&D_8010E2F8, 0, temp_v0_2);
    D_8010E504 = (char) temp_v0_2;
    goto block_22;
  }
  block_22:
  if (D_8010E504 == (-4))
  {
    func_8026AC4C(&D_8010E2F8, 0, 0x1E0);
    return -4;
  }

  D_8010E4FC = -1;
  if ((D_8010E504 != 0) && (D_8010E504 != (-8)))
  {
    func_8026AC4C(&D_8010E2F8, 0, 0x1E0);
    if ((var_s3 = func_80408C4C()) == (-1))
    {
      D_8010E4FC = 0;
      return -3;
    }
    if ((D_8022D288() << 0x10) != 0)
    {
      D_8010E4FC = 3;
      D_8010E4E4 = 1;
      return -3;
    }
    D_8010E4FC = 2;
    return -3;
  }
  return 0;
}
