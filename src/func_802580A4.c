extern f32 D_800A96C4;
void D_802131C4(f32 *, void *, void *);
u64 D_8029D708(void);
typedef struct 
{
  char x[0x1b8];
  s32 flag;
  char y[12];
  u32 a;
  u32 b;
} Item;
static inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 > arg1;
}

void func_802580A4(void *x, void *target, Item **items, s32 n)
{
  f32 d[3];
  u64 *new_var2;
  s32 i;
  float new_var;
  f32 limit;
  Item *p;
  i = 0;
  if (inline_fn(n, 0))
  {
    limit = D_800A96C4;
    do
    {
      p = items[i];
      if (!p->flag)
      {
        D_802131C4(d, ((char *) p) + 4, ((char *) target) + 4);
        new_var = d[1];
        ;
        if ((((d[0] * d[0]) + (d[1] * new_var)) + (d[2] * d[2])) <= ((float) limit))
        {
          new_var2 = (u64 *) (((char *) p) + 0x1c8);
          if (n)
          {
            p->flag = 1;
            *new_var2 = D_8029D708();
          }
          else
          {
            p->flag = 1;
            *((u64 *) (((char *) p) + 0x1c8)) = D_8029D708();
          }
        }
      }
      i++;
    }
    while (i < n);
  }
}
