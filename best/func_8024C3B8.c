f32 D_80215BE0(f32, f32);
f32 D_80242234(void *, s32, s32, s32);
f32 D_80299AE8(f32);
f32 func_8029A900(f32);
f32 func_8029AA80(f32);
extern s32 D_800A92B8;
extern f32 D_800A92C0;
extern f32 D_800A92C4;
extern f32 D_800A92C8;
extern f32 D_800A92CC;
extern s32 D_800A92D0;
extern f32 D_800A92D8;
extern f32 D_800F4D60;
void func_8024C3B8(void *arg0, void *arg1)
{
  f32 new_var;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fv0;
  f32 var_fs0f;
  f32 var_fs1;
  void *temp_s0;
  void *temp_s1;
  temp_s1 = *((void **) (((char *) arg1) + 0x154));
  if ((*((s8 *) (((char *) temp_s1) + 0x198))) != 0x16)
  {
    var_fs1 = *((f32 *) (((char *) (&D_800A92B8)) + 0));
    var_fs0f = *((f32 *) (((char *) (&D_800A92B8)) + 4));
  }
  else
  {
    temp_s0 = *((void **) (((char *) temp_s1) + 0x1DC));
    if (temp_s0 != NULL)
    {
      temp_fs0 = D_80215BE0(D_800A92C0, D_800A92C4);
      var_fs1 = temp_fs0 * func_8029AA80(D_80242234(arg0, *((s32 *) (((char *) temp_s0) + 4)), *((s32 *) (((char *) temp_s0) + 8)), *((s32 *) (((char *) temp_s0) + 0xC))));
      var_fs0f = temp_fs0 * D_800A92C8;
      var_fs0f = (-D_800F4D60) / var_fs0f;
    }
    else
    {
      var_fs1 = D_800A92CC;
      var_fs0f = *((f32 *) (((char *) (&D_800A92D0)) + 0));
    }
  }
  new_var = D_80215BE0(0.0f, *((f32 *) (((char *) (&D_800A92D0)) + 4)));
  temp_fs0_2 = D_800A92D8;
  temp_fs0 = var_fs0f + new_var;
  temp_fv0 = var_fs1 * func_8029A900((*((f32 *) (((char *) temp_s1) + 0x70))) + temp_fs0_2);
  *((f32 *) (((char *) arg0) + 0x1C)) = temp_fs0;
  *((f32 *) (((char *) arg0) + 0x18)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0x20)) = (f32) (var_fs1 * D_80299AE8((*((f32 *) (((char *) temp_s1) + 0x70))) + temp_fs0_2));
}
