s32 _collectPVoices();
s32 func_802972C8();
s32 func_80297370();
extern s32 *D_800B37B0;
void *func_80296FFC(void *arg0, s32 *arg1, s32 arg2, s32 arg3)
{
  void *sp18;
  s32 new_var;
  s16 sp1C;
  s32 *temp_s1;
  s32 temp_v0;
  char *new_var2;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 var_s2;
  s32 var_s3;
  s32 var_s5;
  void *temp_s0;
  void *var_s4;
  temp_s1 = D_800B37B0;
  var_s3 = arg3;
  var_s4 = arg0;
  var_s5 = arg2;
  new_var = *((s32 *) (((char *) temp_s1) + 0));
  sp1C = 0;
  if (new_var == 0)
  {
    *arg1 = 0;
  }
  else
  {
    temp_v0 = func_802972C8(temp_s1, &sp18);
    *((s32 *) (((char *) temp_s1) + 0x1C)) = temp_v0;
    if ((temp_v0 - (*((s32 *) (((char *) temp_s1) + 0x20)))) < var_s3)
    {
      do
      {
        new_var2 = ((char *) sp18) + 8;
        *((s32 *) (((char *) temp_s1) + 0x1C)) &= ~0xF;
        *((s32 *) (((char *) sp18) + 0x10)) += func_80297370(temp_s1, (*((s32 (**)(void *)) new_var2))(sp18));
        temp_v0_2 = func_802972C8(temp_s1, &sp18, sp18);
        *((s32 *) (((char *) temp_s1) + 0x1C)) = temp_v0_2;
      }
      while ((temp_v0_2 - (*((s32 *) (((char *) temp_s1) + 0x20)))) < var_s3);
    }
    *((s32 *) (((char *) temp_s1) + 0x1C)) &= ~0xF;
    if (var_s3 > 0)
    {
      do
      {
        temp_v1 = *((s32 *) (((char *) temp_s1) + 0x48));
        var_s2 = var_s3;
        if (temp_v1 < var_s3)
        {
          var_s2 = temp_v1;
        }
        *((s32 *) (((char *) var_s4) + 0)) = 0x07000000;
        *((s32 *) (((char *) var_s4) + 4)) = 0;
        temp_s0 = *((void **) (((char *) temp_s1) + 0x38));
        (*((s32 (**)(void *, s32, s32)) (((char *) temp_s0) + 8)))(temp_s0, 6, var_s5);
        var_s4 = (*((void *(**)(void *, s16 *, s32, s32, void *)) (((char *) temp_s0) + 4)))(temp_s0, &sp1C, var_s2, *((s32 *) (((char *) temp_s1) + 0x20)), var_s4 + 8);
        var_s3 -= var_s2;
        var_s5 += var_s2 * 4;
        *((s32 *) (((char *) temp_s1) + 0x20)) += var_s2;
      }
      while (var_s3 > 0);
    }
    *arg1 = ((s32) (var_s4 - arg0)) >> 3;
    _collectPVoices(temp_s1);
  }
  return var_s4;
}
