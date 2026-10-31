typedef struct 
{
  u8 b0;
  u8 b1;
  u8 b2;
  u8 b3;
  u8 b4;
  u8 b5;
} Lp;
extern u8 D_8010E858[];
extern u8 D_800F6090;
void func_80410648(s32 n)
{
  char *__repair_addr;
  u8 *p;
  u8 *q;
  s32 i;
  Lp lp;
  p = D_8010E858;
  q = p;
  i = 0;
  __repair_addr = (char *) (q + 0x3C);
  *((s32 *) __repair_addr) = 1;
  lp.b0 = 1;
  lp.b1 = 3;
  D_800F6090 = 0;
  lp.b2 = 0;
  lp.b3 = 0xFF;
  lp.b4 = 0xFF;
  lp.b5 = 0xFF;
  if (n > 0)
  {
    do
    {
      if (q || i)
      {
        *(p++) = 0;
      }
      else
      {
        *(p++) = 0;
      }
      if (1)
      {
        i++;
      }
    }
    while (i < n);
  }
  *((Lp *) q) = lp;
  q[6] = 0xFE;
}
