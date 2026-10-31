extern u8 D_800F6050[];
extern u8 D_800F6090;
void func_8029C5A4(void);
void func_8029B1D0(s32);
s32 func_8029C638(s32, void *);
void func_8029DC78(s32, s32, s32);
s32 func_8029C610(void);
s32 func_8029AC68(s32 arg0)
{
  s32 r;
  u8 *new_var;
  u8 *p = &D_800F6090;
  s32 x = arg0;
  func_8029C5A4();
  if ((*p) != 0)
  {
    func_8029B1D0(0);
    func_8029C638(1, D_800F6050);
    func_8029DC78(x, 0, 1);
  }
  new_var = D_800F6050;
  r = func_8029C638(0, new_var);
  *p = 0;
  func_8029C610();
  return r;
}
