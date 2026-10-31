extern f32 D_800A96C0;
extern void *D_800D6358;
extern void D_802131C4(f32 *, void *, void *);
extern void D_8023196C(void *);
extern u64 D_8029D708(void);
void func_80257FDC(void *unused, void *arg1)
{
  f32 d[3];
  f32 x;
  int new_var;
  f32 y;
  f32 limit;
  void *s0;
  f32 z;
  s32 one;
  char *new_var2;
  u64 r;
  s0 = D_800D6358;
  if (s0)
  {
    limit = D_800A96C0;
    one = 1;
    do
    {
      new_var2 = ((char *) s0) + 0xa74;
      if (((*((void **) (((char *) arg1) + 0x108))) != s0) && ((*((s16 *) new_var2)) > 0))
      {
        r = 0;
        D_802131C4(d, ((char *) s0) + 4, ((char *) arg1) + 4);
        x = d[r] * d[r];
        y = d[1] * d[1];
        z = d[2] * d[new_var = 2];
        if (((y + (d[r] * d[r])) + z) <= limit)
        {
          *((s32 *) (((char *) arg1) + 0x1b8)) = one;
          *((u64 *) (((char *) arg1) + 0x1c8)) = D_8029D708();
          D_8023196C(s0);
        }
      }
      s0 = *((void **) (((char *) s0) + 0x159c));
    }
    while (s0);
  }
}
