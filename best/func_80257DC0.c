s32 D_8021E710(void *, void *, void *);
s32 D_8021E76C(void *, void *, void *);
s32 D_8021E7C8(void *, void *, void *);
void func_80257DC0(void *arg0, void *arg1)
{
  void *temp_a0;
  void *var_a1;
  var_a1 = *((void **) (((char *) arg0) + 0x1C));
  if (var_a1 != NULL)
  {
    loop_2:
    if ((*((s32 **) (((char *) arg1) + 0xF8))) != (*((s32 *) (((char *) var_a1) + 0xF8))))
    {
      var_a1 = *((void **) (((char *) var_a1) + 0x1EC));
      if (var_a1 != NULL)
      {
        goto loop_2;
      }
    }

    if (var_a1 != NULL)
    {
      D_8021E7C8(arg0 + 0x1C, var_a1, arg1);
      return;
    }
    goto block_6;
  }
  block_6:
  temp_a0 = arg0 + 0x1C;

  if ((*(*((s32 **) (((char *) arg1) + 0xF8)))) & 0x2000)
  {
    D_8021E710(temp_a0, arg1, arg1);
    return;
  }
  D_8021E76C(temp_a0, arg1, arg1);
}
