extern s32 D_8021563C(void);
extern void D_8023E95C(void *, void *, s32);
extern void D_80241A44(void *, void *, void *);
extern void D_80241EEC(void *, void *, void *, s32, s32);
extern void func_80287FD0(void *, void *, void *, void *);
extern f32 D_800AA634;
extern f32 D_800ABA00;
void func_802881BC(void *a, void *b)
{
  unsigned char *__repair_addr;
  u8 area[0xc8];
  void *q = b;
  u16 state;
  f32 val;
  f32 __repair_val_2;
  float new_var;
  void *p = a;
  __repair_addr = (char *) (((u8 *) p) + 0xd8);
  state = *((u16 *) __repair_addr);
  if ((((u32) (state - 0x65)) < 4) && ((*((s8 *) (((u8 *) q) + 0x30))) != 3))
  {
    D_8023E95C(p, q, 3);
  }
  D_80241EEC(p, q, area, 1, 0);
  D_80241A44(p, q, area + 0x88);
  func_80287FD0(p, q, area, area + 0x88);
  if ((*((s32 *) (((u8 *) p) + 0x334))) != 0)
  {
    state = *((u16 *) (((u8 *) p) + 0xd8));
    if (state == 0x67)
    {
      goto active;
    }
    if (state == 0x65)
    {
      goto active;
    }
    if (state == 0x66)
    {
      goto active;
    }
    if (state != 0x68)
    {
      goto idle;
    }
    active:
    val = (new_var = (*((f32 *) (((u8 *) q) + 0x198))) - D_800ABA00);

    *((f32 *) (((u8 *) q) + 0x198)) = val;
    if (val <= 0)
    {
      val = (f32) (D_8021563C() % 30);
      val += *((f32 *) (((u8 *) (&D_800AA634)) + 4));
      *((f32 *) (((u8 *) q) + 0x198)) = val;
      D_8023E95C(p, q, 0x3e);
    }
    return;
  }
  idle:
  __repair_val_2 = *((f32 *) (((u8 *) q) + 0x190));

  if (__repair_val_2 <= 0)
  {
    *((f32 *) (((u8 *) q) + 0x190)) = 0.0f;
    *((f32 *) (((u8 *) q) + 0x17c)) = 0.0f;
    D_8023E95C(p, q, 3);
  }
}
