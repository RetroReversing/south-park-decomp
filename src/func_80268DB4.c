void func_80268DB4(s16 **a, s32 b, void **c, u8 *d)
{
  char *new_var;
  s16 *p;
  void *q;
  u8 *new_var3;
  int new_var2;
  if (q)
  {
    *c = 0;
  }
  else
  {
    *c = 0;
  }
  if (a)
  {
    p = *a;
    new_var2 = 8;
    q = (char *)((b % (*p)) * 8);
    q += (s32)(((char *) p) + new_var2);
    new_var = ((char *) p) + (new_var2 = *((s32 *) q));
    new_var3 = (u8 *) q;
    *d = *(new_var3 + 4);
    *c = new_var;
  }
}
