f32 D_80299AE8(f32);
extern f32 D_800A9DF0;
extern f32 D_800A9DF4;
extern s32 D_800A9DF8;
f32 func_8026AE9C(f32 arg0)
{
  f32 var_fv0;
  f32 var_fv0f;
  var_fv0f = 0.0f;
  var_fv0 = arg0;
  if ((var_fv0 < 0.0f) || ((var_fv0f = D_800A9DF0, var_fv0f < var_fv0)))
  {
    var_fv0 = var_fv0f;
  }
  var_fv0f = (*((f32 *) (((char *) (&D_800A9DF8)) + 0))) - D_80299AE8(var_fv0 * D_800A9DF4);
  return var_fv0f * (*((f32 *) (((char *) (&D_800A9DF8)) + 4)));
}
