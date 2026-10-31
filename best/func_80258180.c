s32 D_8022C8C4();
s32 D_8029DF30(s32 *, s32);
s32 func_8025841C(void *);
s32 func_80258BD4(void *, s32 *, s32 *, s32);
s32 func_8025911C(void *, s32);
s32 func_80259228(void *, s32, s32);
s32 func_802593A0(void *, s32 *);
s32 func_8029D1F8(s32, void *);
s32 func_8029DC78(void *, s32 *, s32);
s32 func_8029DDA0(s32, void *, s32);
extern s32 D_800B108C;
extern s32 D_800B2624;
extern u32 D_800CA520;
extern u32 D_800CC750;
extern s32 D_800D7938;
extern s32 D_800D79A0;
extern s32 D_800D7CB0;
extern s32 D_800D7CB8;
extern s32 D_800D7F44;
extern s32 D_800D7F4C;
extern s32 D_800EC060;
void func_80258180(void *arg0)
{
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 temp_a0;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  u32 temp_v0_3;
  void *temp_a0_2;
  void *new_var2;
  s32 *new_var;
  void *temp_a1;
  void *temp_v0_4;
  void *temp_v0_5;
  void *var_a0;
  void *var_s0;
  sp10 = 0;
  sp14 = 0;
  sp18 = 0;
  if (D_800B108C != 0)
  {
    temp_v0 = D_800B108C - 1;
    D_800B108C = temp_v0;
    if (temp_v0 == 0)
    {
      D_8029DF30(&D_800EC060, D_800B2624);
    }
  }
  *((s32 *) (((char *) arg0) + 0x2FC)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2FC))) + 1);
  var_a0 = arg0 + 0x78;
  loop_4:
  if (func_8029DC78(var_a0, &sp10, 0) != (-1))
  {
    func_8025911C(arg0, sp10);
    var_a0 = arg0 + 0x78;
    goto loop_4;
  }

  D_800D79A0 += 1;
  if (D_800D7F44 != 0)
  {
    temp_v0_2 = D_800D7CB0;
    D_800D79A0 = 0;
    D_800D7F44 = 0;
    D_800D7CB0 = 0;
    D_800D7CB8 = temp_v0_2;
  }
  if (D_800D7F4C != 0)
  {
    temp_a1 = *((&D_800D7938) + (D_800CC750 * 4));
    if (((u32) (D_800D79A0 + 1)) >= ((u32) (*((u32 *) (((char *) temp_a1) + 0x104)))))
    {
      temp_a0 = *((s32 *) (((char *) temp_a1) + 0xF0));
      D_800D7CB0 = temp_a0;
      func_8029D1F8(temp_a0, temp_a1);
      D_800D7F4C -= 1;
      D_800D7F44 += 1;
      temp_v0_3 = D_800CC750 + 1;
      D_800CC750 = temp_v0_3;
      if (temp_v0_3 >= ((u32) D_800CA520))
      {
        D_800CC750 = 0;
      }
    }
  }
  if (((*((void **) (((char *) arg0) + 0x2F4))) == NULL) && ((*((s32 *) (((char *) arg0) + 0x2F8))) == 0))
  {
    temp_a0_2 = *((void **) (((char *) arg0) + 0x2E8));
    if (((temp_a0_2 != NULL) && ((*((s32 *) (((char *) temp_a0_2) + 0x10))) == 1)) && ((*((s32 *) (((char *) temp_a0_2) + 4))) == 0x32))
    {
      *((s32 *) (((char *) temp_a0_2) + 4)) = 2;
      temp_v0_4 = *((void **) (((char *) arg0) + 0x2E8));
      new_var2 = arg0;
      *((void **) (((char *) new_var2) + 0x2F4)) = temp_v0_4;
      new_var = (s32 *) (((char *) new_var2) + 0x2F0);
      temp_v0_5 = *((void **) (((char *) temp_v0_4) + 0));
      *((void **) (((char *) new_var2) + 0x2E8)) = temp_v0_5;
      if (temp_v0_5 == NULL)
      {
        *new_var = 0;
      }
      func_8025841C(new_var2);
    }
  }
  if ((*((s32 *) (((char *) new_var2) + 0x300))) != 0)
  {
    if ((*((void **) (((char *) new_var2) + 0x2F4))) != NULL)
    {
      func_802593A0(new_var2, &sp14);
    }
    else
    {
      goto block_24;
    }
  }
  else
  {
    block_24:
    temp_s0 = (((*((void **) (((char *) new_var2) + 0x2F4))) == NULL) * 2) | ((*((s32 *) (((char *) new_var2) + 0x2F8))) == 0);

    if (func_80258BD4(new_var2, &sp14, &sp18, temp_s0) != temp_s0)
    {
      func_80259228(new_var2, sp14, sp18);
    }
  }
  var_s0 = *((void **) (((char *) new_var2) + 0x2E0));
  if (var_s0 != NULL)
  {
    do
    {
      func_8029DDA0(*((s32 *) (((char *) var_s0) + 4)), new_var2, 0);
      var_s0 = *((void **) (((char *) var_s0) + 0));
    }
    while (var_s0 != NULL);
  }
  D_8022C8C4();
}
