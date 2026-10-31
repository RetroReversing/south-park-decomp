typedef struct 
{
  s32 z;
  s32 x;
  s32 y;
  u8 pad[0x59];
  u8 flag;
} Obj;
extern s32 func_8029BC60(s32, s32, s32, void *);
extern s32 func_8041235C(void *, s32);
extern s32 func_8041249C(void *);
s32 func_80410144(Obj *o, s32 x, u16 *out, s8 flag)
{
  u8 b[32];
  s32 v;
  s32 i;
  o->flag = flag;
  v = func_8041249C(o);
  i = 0;
  if (v)
  {
    return v;
  }
  x = (x & 255) << 3;
  while (i < 8)
  {
    i = (x + i) & 65535;
    v = func_8029BC60(o->x, o->y, i, b);
    if (v)
    {
      o->flag = 0;
      func_8041249C(o);
      return v;
    }
    *out += func_8041235C(b, 32);
    i++;
  }

  o->flag = 0;
  return func_8041249C(o);
}
