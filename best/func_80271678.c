s32 func_80296428(void *, s32);
s32 func_802964F0(void *, s16);
extern s32 D_800B2138;
static inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_80271678(void *arg0)
{
  s32 var_condition_bit;
  s32 var_s1;
  u8 temp_s0_3;
  u8 temp_s0_4;
  void *temp_s0;
  void *temp_s0_2;
  void *temp_s1;
  s32 *new_var2;
  void *temp_s1_2;
  void *temp_s2;
  char *new_var;
  void *temp_v1;
  s16 *new_var3;
  void *temp_v1_2;
  temp_s2 = inline_fn(arg0, 0x10);
  if (func_802706FC(*((void **) inline_fn((char *) arg0, 0xB0))) == 0)
  {
    temp_s0 = *((void **) inline_fn((char *) arg0, 0xB0));
    temp_s0_2 = inline_fn(temp_s0, 0x84);
    func_802964F0(temp_s0_2, *((s16 *) inline_fn((char *) inline_fn(temp_s0, (*((s32 *) inline_fn((char *) arg0, 0))) * 2), 0xDC)));
    func_80296428(temp_s0_2, 0x40);
    return;
  }
  if ((*((s32 *) inline_fn((char *) arg0, 0x84))) != 0)
  {
    new_var3 = &(*((s16 *) inline_fn((char *) arg0, 0x90)));
    if ((*new_var3) > 0)
    {
      *((s16 *) inline_fn((char *) arg0, 0x90)) = (s16) (((u16) (*((s16 *) inline_fn((char *) arg0, 0x90)))) - 1);
      goto block_17;
    }
    var_s1 = 0;
    if ((*((f32 *) inline_fn((char *) arg0, 0x98))) < 0.0f)
    {
      var_s1 = 1;
    }
    if (var_s1 != 0)
    {
      if ((*((f32 *) inline_fn((char *) arg0, 0x94))) < func_8027E368((s32) (*((u16 *) inline_fn((char *) arg0, 0x8C)))))
      {
        goto block_11;
      }
      goto block_17;
    }
    if (func_8027E368((s32) (*((u16 *) inline_fn((char *) arg0, 0x8C)))) < (*((f32 *) inline_fn((char *) arg0, 0x94))))
    {
      block_11:
      *((f32 *) inline_fn((char *) arg0, 0x94)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x94))) - (*((f32 *) inline_fn((char *) arg0, 0x98))));

      if (var_s1 != 0)
      {
        var_condition_bit = func_8027E368((s32) (*((u16 *) inline_fn((char *) arg0, 0x8C)))) < (*((f32 *) inline_fn((char *) arg0, 0x94)));
      }
      else
      {
        ;
      }
      if ((*((f32 *) inline_fn((char *) arg0, 0x94))) < func_8027E368((s32) (*((u16 *) inline_fn((char *) arg0, 0x8C)))))
      {
        *((f32 *) inline_fn((char *) arg0, 0x94)) = func_8027E368((s32) (*((u16 *) inline_fn((char *) arg0, 0x8C))));
      }
      new_var2 = (s32 *) inline_fn((char *) arg0, 0);
      *((s16 *) inline_fn((char *) temp_s2, 0x18)) = (s16) ((s32) (*((f32 *) inline_fn((char *) arg0, 0x94))));
      temp_v1 = *((void **) inline_fn((char *) arg0, 0xB0));
      temp_s0_3 = *((u8 *) inline_fn((char *) temp_s2, 0x19));
      temp_s1 = inline_fn(temp_v1, 0x84);
      func_802964F0(temp_s1, *((s16 *) inline_fn((char *) inline_fn(temp_v1, (*new_var2) * 2), 0xDC)));
      func_80296428(temp_s1, temp_s0_3 & 0xFF);
      *((s32 *) inline_fn((char *) (&D_800B2138), 4)) = (s32) (*((s16 *) inline_fn((char *) temp_s2, 0x18)));
      return;
    }
    goto block_17;
  }
  block_17:
  if (((*((s32 *) inline_fn((char *) arg0, 0xA0))) & 0x400) && ((*((s32 *) inline_fn((char *) arg0, 0xAC))) == 0))
  {
    *((s16 *) inline_fn((char *) temp_s2, 0x18)) = func_80270B28(inline_fn(temp_s2, 0x30), *((s32 *) inline_fn((char *) (*((void **) inline_fn((char *) arg0, 0xB0))), 0x279C)));
    temp_v1_2 = *((void **) inline_fn((char *) arg0, 0xB0));
    temp_s0_4 = *((u8 *) inline_fn((char *) temp_s2, 0x19));
    temp_s1_2 = inline_fn(temp_v1_2, 0x84);
    new_var = (char *) arg0;
    func_802964F0(temp_s1_2, *((s16 *) inline_fn((char *) inline_fn(temp_v1_2, (*((s32 *) inline_fn(new_var, 0))) * 2), 0xDC)));
    func_80296428(temp_s1_2, temp_s0_4 & 0xFF);
    return;
  }

  *((s16 *) inline_fn((char *) temp_s2, 0x18)) = 0x40;
}
