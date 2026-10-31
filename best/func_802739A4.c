void *D_80210ADC(s32, s32);
s32 func_8026AC70(s32, s32, s32);
extern f32 D_800A9FC4;
s32 func_802739A4(void *arg0, s32 arg1)
{
  f32 temp_fv0;
  s32 temp_s0;
  s32 temp_v0_2;
  void *temp_s0_2;
  void *temp_v0;
  void *temp_v0_3;
  void *var_v0;
  temp_v0 = *((void **) (((char *) arg0) + 0));
  temp_v0_2 = func_8026AC70(*((s32 *) (((char *) temp_v0) + 0x2764)), *((s32 *) (((char *) temp_v0) + 0x2768)), arg1);
 do { temp_s0 = temp_v0_2 * 2; } while (0);
  if (temp_v0_2 != (-1))
  {
    temp_s0_2 = D_80210ADC(*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x2754)), temp_s0 | 1);
    temp_v0_3 = D_80210ADC(*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x2754)), temp_s0);
    temp_v0_2 = (s32) (*((s32 *) (((char *) temp_v0_3) + 0)));
    *((s32 *) (((char *) arg0) + 0x24)) = temp_v0_2;
    temp_fv0 = func_8027E368((s32) (*((u16 *) (((char *) temp_v0_3) + 4))));
    *((f32 *) (((char *) arg0) + 0x30)) = temp_fv0;
    if (temp_fv0 <= 0.0f)
    {
      *((f32 *) (((char *) arg0) + 0x30)) = (f32) D_800A9FC4;
    }
    var_v0 = temp_s0_2;
  }
  else
  {
    var_v0 = NULL;
  }
  *((void **) (((char *) arg0) + 0xC)) = var_v0;
  return var_v0 != NULL;
}
