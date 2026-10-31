s32 D_80203F74(s32 *, void *, s32);
s32 D_8021B7EC(void *, s32, void *);
s32 D_80242160(void *, void *, s32, s32);
s32 D_8024249C(void *, s32, s32, s32, s32);
s32 func_80273DCC(s16, s32, s32, s32, s32, s32);
extern s32 D_800CCA80;
void func_8024CF00(void *arg0, void *arg1)
{
  void *new_var;
  void *temp_s1;
  int new_var2;
  temp_s1 = (*((s32 *) (((char *) arg0) + 0x14))) + 0x14;
  new_var = arg0;
  D_80203F74(&D_800CCA80, new_var, 1);
  D_8021B7EC(arg0, 0x40000, new_var);
  if ((*((u16 *) (((char *) arg1) + 4))) == 0)
  {
    *((s32 *) (((char *) arg0) + 0xF4)) = (s32) ((*((s32 *) (((char *) new_var) + 0xF4))) & 0xFF7FFFFF);
  }
  if ((*((s32 *) (((char *) temp_s1) + 0x18))) == 0)
  {
    *((s32 *) (((char *) arg0) + 0xF4)) = (s32) ((new_var2 = (*((s32 *) (((char *) arg0) + 0xF4))) & 0xFFEFFFFF) & 0xFFFF7FFF);
  }
  if ((*((s32 *) (((char *) (&D_800CCA80)) + 4))) != 0)
  {
    if ((*((s32 *) (((char *) temp_s1) + 0x20))) != (-1))
    {
      func_80273DCC(*((s16 *) (((char *) temp_s1) + 0x22)), *((s32 *) (((char *) new_var) + 4)), *((s32 *) (((char *) arg0) + 8)), *((s32 *) (((char *) arg0) + 0xC)), 0, 0);
    }
    if ((*((s32 *) (((char *) temp_s1) + 0x1C))) != (-1))
    {
      D_8024249C(arg0, *((s32 *) (((char *) temp_s1) + 0x1C)), *((s32 *) (((char *) new_var) + 4)), *((s32 *) (((char *) new_var) + 8)), *((s32 *) (((char *) new_var) + 0xC)));
    }
    D_80242160(arg0, arg1, 4, *((s32 *) (((char *) temp_s1) + 0x24)));
  }
}
