extern s32 func_802A0500(void);
extern s32 D_8021E930(void *, void *);
extern s32 D_8021E76C(void *, void *);
extern s32 D_802A0520(s32);
extern f32 D_800AA328;
extern f32 D_800AA330;
extern s32 D_80210ADC(s32, s32);
extern f32 D_8021504C(f32, f32, s32, s32, f32);
extern s32 func_8028087C(void);
u32 func_80280B98(s32 *p, u32 n);
static inline void *inline_fn(void *arg0)
{
  return *((void **) (((u8 *) arg0) + 4));
}

void func_8028207C(void *p)
{
  s32 result = func_802A0500();
  void *n = *((void **) (((u8 *) p) + 0x14));
  while (n)
  {
    void *next = inline_fn(n);
    D_8021E930(((u8 *) p) + 0x14, n);
    D_8021E76C(p, n);
    n = next;
  }

  *((s32 *) (((u8 *) p) + 0x28)) = 0;
  D_802A0520(result);
}

f32 func_802821F8(void *p);
extern f32 D_800AA250;
f32 func_8027EF28(void *p, f32 x);
