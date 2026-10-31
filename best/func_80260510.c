extern void *D_80200C94(void *, void *);
extern f32 func_8026D63C(void *, f32, f32);
extern s32 func_8028E738(void);
extern f32 D_800A9A7C;
extern f32 D_800A9A80;
extern s32 D_800B2608;
extern void *D_800CCA80;
extern void *D_800D6358;
void func_80260510(void *arg0)
{
  s32 __repair_argument;
  f32 x;
  f32 y;
  f32 z;
  f32 w;
  f32 d;
  void *s1;
  void *v0;
  void *v1;
  if (func_8028E738())
  {
    *((void **) (((char *) arg0) + 0x44)) = D_80200C94(&D_800CCA80, ((char *) arg0) + 0x24);
  }
  s1 = *((void **) (((char *) arg0) + 0x44));
  x = *((f32 *) (((char *) arg0) + 0x24));
  y = *((f32 *) (((char *) arg0) + 0x28));
  z = *((f32 *) (((char *) arg0) + 0x2c));
  w = *((f32 *) (((char *) arg0) + 0x30));
  *((s32 *) (((char *) arg0) + 0x50)) = D_800B2608;
  if (s1 && (!func_8028E738()))
  {
    d = ((y + w) - func_8026D63C(s1, x, z)) * D_800A9A7C;
    v1 = D_800D6358;
    v0 = 0;
    if (v1)
    {
      do
      {
        __repair_argument = (*((s32 *) (((char *) v1) + 0xa54))) != arg0;
        v0 = v1;
        if (__repair_argument)
        {
          v1 = *((void **) (((char *) v1) + 0x159c));
          v0 = 0;
        }
        else
        {
          break;
        }
      }
      while (v1);
    }
    if ((d < D_800A9A80) && ((!v0) || (!(*((s32 *) (((char *) v0) + 0xc0c))))))
    {
      v1 = (char *) arg0;
      *((s32 *) (v1 + 0x50)) = *((s32 *) (((char *) s1) + 0x1c));
    }
  }
}
