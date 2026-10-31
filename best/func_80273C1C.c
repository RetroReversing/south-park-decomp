s32 func_80293598(s32, s16);
extern s32 D_800A9FE0;
extern f32 D_800A9FE8;
void func_80273C1C(void *arg0)
{
  f32 var_fs0;
  if ((*((s32 *) (((char *) arg0) + 0x38))) != 0)
  {
    var_fs0 = *((f32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x27A4));
    var_fs0 = var_fs0 * (*((f32 *) (((char *) (&D_800A9FE0)) + 0)));
    var_fs0 = ((f32) (*((s32 *) (((char *) arg0) + 0x24)))) * var_fs0;
    var_fs0 = var_fs0 * (*((f32 *) (((char *) arg0) + 0x3C)));
    goto block_3;
  }
  var_fs0 = ((f32) (*((s32 *) (((char *) arg0) + 0x24)))) * ((*((f32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x27A4))) * (*((f32 *) (((char *) (&D_800A9FE0)) + 4))));
  if (var_fs0 != (*((f32 *) (((char *) arg0) + 0x2C))))
  {
    block_3:
    func_80293598(*((s32 *) (((char *) arg0) + 0x14)), (s16) ((s32) (var_fs0 * D_800A9FE8)));

    *((f32 *) (((char *) arg0) + 0x2C)) = var_fs0;
  }
}
