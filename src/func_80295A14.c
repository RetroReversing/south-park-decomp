typedef struct { char pad[8]; u8 *p; } Cursor;
s32 func_80295A14(Cursor *a)
{
  u8 *p;
  u32 b0, b1, b2, b3;
  p = a->p;
  b0 = *p;
  a->p = ++p;
  b1 = *p;
  a->p = p + 1;
  b2 = p[1];
  a->p = p + 2;
  b3 = p[2];
  a->p = p + 3;
  return (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
}
