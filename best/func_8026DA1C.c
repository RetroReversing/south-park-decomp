extern f32 D_80215738(f32);
extern f32 func_8029AA80(f32);
f32 func_8026DA1C(void *arg0, s32 arg1)
{
  f32 **new_var;
  int __repair_literal;
  s32 i;
  f32 *a;
  f32 *b;
  f32 x;
  f32 z;
  f32 d;
  i = i - ((i / 3) * 3);
  __repair_literal = 4;
  i = i;
  new_var = (f32 **) ((((char *) arg0) - (-(arg1 * 4))) + 4);
  i = i * __repair_literal;
  a = *((f32 **) ((((char *) arg0) + i) + 4));
  b = *new_var;
  x = a[0] - b[0];
  z = a[2] - b[2];
  d = func_8029AA80((x * x) + (z * z));
  if (d == 0.0f)
  {
    return 0.0f;
    i = arg1 + 1;
  }
  d = D_80215738(x / d);
  if (z < 0.0f)
  {
    return d;
  }
  return -d;
}
