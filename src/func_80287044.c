void D_8023E95C(void *, void *, s32);
typedef struct 
{
  u8 pad0[0x30];
  s8 unk30;
  s8 unk31;
  u8 pad32[0x81];
  s8 unkB3;
  u8 padB4[0xF4];
  s32 unk1A8;
  s32 unk1AC;
} S_D0;
void func_80287044(void *arg0, S_D0 *a1)
{
  s32 v;
  int new_var;
  new_var = 1;
  if (a1->unkB3 != 0)
  {
    v = a1->unk1AC;
    if (v != (-1))
    {
      a1->unk31 = -new_var;
      D_8023E95C(arg0, a1, v);
      a1->unk1AC = -1;
      return;
    }
    if (a1->unk1A8 != v)
    {
      if (a1->unk30 == 0x32)
      {
        a1->unk31 = v;
        D_8023E95C(arg0, a1, a1->unk1A8);
        a1->unk1A8 = v;
        return;
      }
    }
    a1->unk31 = -1;
    D_8023E95C(arg0, a1, 0xB);
  }
}
