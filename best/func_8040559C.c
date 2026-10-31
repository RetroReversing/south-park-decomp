s32 D_80209A90(s32 *);
s32 func_80403ACC(s32, s32 *, void *, s32, s32);
s32 func_8040DB48(s32);
s32 func_8040DB8C(s32 *, s32);
extern s32 D_415838;
extern s32 D_416F88;
extern f32 D_800ABA00;
extern s32 D_800CC760;
extern s32 D_800D7910;
extern s32 D_8010DAF8;
extern s32 D_8010E7A8;
s32 func_8040559C(void *arg0)
{
  s32 *var_a1;
  char *new_var;
  f32 temp_fv0f;
  s32 new_var2;
  void *temp_s0;
  temp_fv0f = (*((f32 *) (((char *) (&D_8010DAF8)) + 4))) - D_800ABA00;
  new_var2 = *((s32 *) (((char *) (&D_8010DAF8)) + 0));
  temp_s0 = *((void **) (((char *) arg0) + 0x20));
  do
  {
    *((f32 *) (((char *) (&D_8010DAF8)) + 4)) = temp_fv0f;
  }
  while (0);
  if (new_var2 == 0)
  {
    if ((temp_fv0f < 0.0f) || ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x24)))) + 0xC0))) & 0xD000))
    {
      D_800D7910 = 1;
      *((s32 *) (((char *) (&D_8010DAF8)) + 0)) = 1;
      if (func_8040DB48(*((s32 *) (((char *) temp_s0) + 0xA7C))) != 0)
      {
        func_8040DB8C(&D_8010E7A8, *((s32 *) (((char *) temp_s0) + 0xA7C)));
        var_a1 = &D_416F88;
        goto block_7;
      }
      new_var = (char *) arg0;
      if ((*((u16 *) (((char *) (*((void **) (new_var + 0x20)))) + 0xA80))) != 0)
      {
        var_a1 = &D_415838;
        block_7:
        func_80403ACC((*((s32 *) (((char *) temp_s0) + 0xA54))) + 0x528, var_a1, temp_s0, *((s32 *) (((char *) temp_s0) + 0xAF4)), 0);

        return 1;
      }
      D_80209A90(&D_800CC760);
      return 1;
    }
    return 0;
  }
  return 0;
}
