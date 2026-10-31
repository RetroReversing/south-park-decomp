typedef struct 
{
  u32 *base;
  u32 width;
} BitStream;
u32 func_8028122C(BitStream *bs, s32 n)
{
  u32 *new_var2;
  int __repair_literal;
  u32 w;
  u32 off;
  u32 *p;
  u32 new_var;
  u32 bit;
  u32 lo;
  u32 hi;
  u32 m;
  w = bs->width;
  w = w * n;
  new_var2 = bs->base;
  hi = (u32) new_var2;
  off = w + hi;
  p = (u32 *) ((off & 0xF0000000) | ((off & 0x0FFFFFE0) >> 3));
  bit = off & 0x1F;
  new_var = bit;
  lo = p[0];
  hi = p[1];
  if (new_var != 0)
  {
    lo >>= bit;
    hi <<= 0x20 - bit;
    lo |= hi;
  }
  __repair_literal = 0x20;
  if (w < __repair_literal)
  {
    m = 1;
    m = (1 << w) - m;
    lo &= m;
  }
  __repair_literal = lo | ((-1) << w);
  return __repair_literal;
}
