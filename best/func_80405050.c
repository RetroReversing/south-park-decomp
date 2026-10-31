s32 D_80209C78(void *, s32);
extern s32 D_800BF120;
extern s32 D_800BF124;
extern s32 D_800BF128;
extern s32 D_800CCA80;
void func_80405050(void)
{
  s32 *new_var;
  if (D_800BF128 != 0)
  {
    new_var = &D_800CCA80;
    if (D_800BF120 == (*((s32 *) (((char *) (&D_800CCA80)) + 0x1780))))
    {
      if (D_800BF124 != (*((s32 *) (((char *) new_var) + 0x1784))))
      {
        goto block_5;
      }
      return;
    }
    block_5:
    D_80209C78((&D_800CCA80) - 0x320, 0xC);

  }
}
