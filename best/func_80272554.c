s32 func_80295C28(void *);
s32 func_802964F0(void *, s16, s16, s32);
s32 alSndpStop(void *);
s32 func_80272554(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_a3 = 0;
  s32 var_s3 = -1;
  s32 var_s2;
  u8 *var_v1;
  void *temp_a0;
  unsigned long new_var;
  void *temp_s0;
  void *temp_s0_2;
  void *temp_s1;
  arg1 = (arg1 << 16) >> 16;
  arg2 = (arg2 << 16) >> 16;
  var_s2 = var_a3;
  var_v1 = ((u8 *) arg0) + 0x3A;
  new_var = 0xB0;
  loop_1:
  if ((((((*((s32 *) (var_v1 - 0x2E))) != var_s3) && ((long) ((*((s16 *) ((*((void **) arg0)) + 0x102))) != var_a3))) && ((*((s32 *) (var_v1 + 0x6E))) == arg1)) && ((*((s32 *) (var_v1 + 0x6A))) & 0x40)) && ((*((s16 *) var_v1)) == arg2))
  {
    temp_s0 = (void *) (((var_s2 >> 0x10) * 0xB8) + ((u8 *) arg0));
    temp_s0_2 = ((u8 *) temp_s0) + 4;
    temp_a0 = *((void **) (((u8 *) temp_s0_2) + new_var));
    *((s32 *) (((u8 *) temp_s0_2) + 0xA8)) = 1;
    *((s32 *) (((u8 *) temp_s0_2) + 0x4C)) = 0;
    temp_s1 = ((u8 *) temp_a0) + 0x84;
    if ((*((s32 *) (((u8 *) temp_s0_2) + 0x10))) != (*((s32 *) (((u8 *) temp_a0) + 0x104))))
    {
      func_802964F0(temp_s1, *((s16 *) ((((u8 *) temp_a0) + ((*((s32 *) temp_s0)) * 2)) + 0xDC)), arg2, var_a3);
      if (func_80295C28(temp_s1) != 0)
      {
        alSndpStop(temp_s1);
      }
      *((s32 *) (((u8 *) temp_s0_2) + 4)) = var_s3;
    }
    return var_s2 >> 0x10;
  }

  var_s2 += 0x10000;
  var_a3++;
  var_v1 += 0xB8;
  if (var_a3 >= 0x10)
  {
    return -1;
  }
  goto loop_1;
}
