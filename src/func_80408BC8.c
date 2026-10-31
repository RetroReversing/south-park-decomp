extern s32 D_8022D1F4();
extern s32 D_8022D248();
extern s32 D_8022D220();
void func_80408EF4(s32);
s32 func_8040FD78(void *, u16, s32, void *, void *);
extern s8 D_8010DE8C[];
extern u8 D_8010DF10[];
void func_80408BC8(s32 arg0)
{
  u8 *p;
  int new_var;
  u8 *base;
  s32 r;
  s32 idx;
  D_8022D1F4(1);
  new_var = -3;
  D_8022D248();
  p = &D_8010DF10[arg0 << 5];
  base = &D_8010DF10[-0x68];
  r = func_8040FD78(base, *((u16 *) (p + 8)), *((s32 *) (p + 4)), p + 0xE, p + 0xA);
  p = &D_8010DF10[-0x98];
 do { idx = *((s32 *) p); D_8010DE8C[idx] = new_var; } while (0);
  D_8022D220(idx);
  func_80408EF4(r);
}
