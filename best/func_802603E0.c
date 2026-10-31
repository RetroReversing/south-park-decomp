void *D_80203B70(s32 *, s32);
f32 D_80215BE0(f32, f32);
extern f32 D_800A9A64;
extern f32 D_800A9A68;
extern f32 D_800A9A6C;
extern f32 D_800A9A70;
extern f32 D_800A9A74;
extern f32 D_800A9A78;
extern s32 D_800CCA80;
void func_802603E0(void *arg0, void *arg1)
{
  f32 temp_fa1;
  f32 temp_fs0;
  f32 temp_fv0f;
  f32 temp_fv0f_2;
  f32 temp_fv0f_3;
  f32 var_fs0;
  f32 var_fs0f;
  void *temp_v0;
  var_fs0f = 0.0f;
  var_fs0 = 0.0f;
  temp_v0 = D_80203B70(&D_800CCA80, *((s32 *) (((char *) arg0) + 0x44)));
  if (temp_v0 == NULL)
  {
    *((f32 *) (((char *) arg1) + 0)) = 0.0f;
    *((f32 *) (((char *) arg1) + 4)) = 0.0f;
    *((f32 *) (((char *) arg1) + 8)) = 0.0f;
    return;
  }
  if ((*((s32 *) (((char *) temp_v0) + 0x44))) & 0x10000)
  {
    var_fs0 = D_800A9A64;
    var_fs0f = D_800A9A68;
  }
  temp_fv0f = *((f32 *) (((char *) arg0) + 0x12C));
  temp_fv0f_2 = temp_fv0f + (D_800A9A6C * (var_fs0 - temp_fv0f));
  temp_fs0 = D_800A9A70;
  *((f32 *) (((char *) arg0) + 0x12C)) = temp_fv0f_2;
  temp_fv0f_3 = *((f32 *) (((char *) arg0) + 0x130));
  *((f32 *) (((char *) arg0) + 0x130)) = (f32) (temp_fv0f_3 + ((var_fs0f - temp_fv0f_3) * D_800A9A74));
  *((f32 *) (((char *) arg1) + 0)) = D_80215BE0((-temp_fv0f_2) * temp_fs0, temp_fv0f_2 * temp_fs0);
  *((f32 *) (((char *) arg1) + 4)) = D_80215BE0(0.0f, (*((f32 *) (((char *) arg0) + 0x130))) * D_800A9A78);
  temp_fa1 = *((f32 *) (((char *) arg0) + 0x12C));
  *((f32 *) (((char *) arg1) + 8)) = D_80215BE0((-temp_fa1) * temp_fs0, temp_fa1 * temp_fs0);
}
