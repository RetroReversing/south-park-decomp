extern s32 D_800B108C;
extern s32 D_800B2630;
extern s32 D_800EC060;
extern s32 D_8029DF30(s32 *, s32);
extern s32 func_80258BD4(void *, s32 *, s32 *, s32);
extern void func_8025911C(void *, void *);
extern void func_80259228(void *, s32, s32);
extern void func_802593A0(void *, s32 *);
extern s32 func_8029DC78(void *, void **, s32);
void func_802593D8(void *arg0)
{
  void *sp10 = 0;
  s32 sp14 = 0;
  s32 sp18 = 0;
  s32 minus = -1;
  s32 one = 1;
  s32 two = 2;
  s32 *new_var;
  s32 temp;
  loop:
  if (func_8029DC78(((char *) arg0) + 0x78, &sp10, 0) != minus)
  {
    if ((((*((s32 *) (((char *) sp10) + 0x10))) == one) && ((*((s32 *) (((char *) sp10) + 8))) & 0x20)) && (D_800B108C == 0))
    {
      D_800B108C = two;
      D_8029DF30(&D_800EC060, D_800B2630);
    }
    func_8025911C(arg0, sp10);
    goto loop;
  }

  if ((*((s32 *) (((char *) arg0) + 0x300))) != 0)
  {
    new_var = &sp14;
    if ((*((s32 *) (((char *) arg0) + 0x2f4))) != 0)
    {
      func_802593A0(arg0, new_var);
      return;
    }
  }
  temp = (((*((u32 *) (((char *) arg0) + 0x2f4))) == 0) * 2) | ((*((u32 *) (((char *) arg0) + 0x2f8))) == 0);
  if (func_80258BD4(arg0, &sp14, &sp18, temp) != temp)
  {
    func_80259228(arg0, sp14, sp18);
  }
}
