s32 D_80219D8C(void *);
s32 D_80221948(s32, s32);
s32 D_80237AF0(s32);
s32 D_8023D620(s32 *);
s32 func_80274404();
s32 func_802747AC(s32);
s32 func_8027482C();
s32 func_80284DB8();
extern s32 D_800D6358;
extern s32 D_800F11C0;
void func_80412D50(void *arg0)
{
  s32 var_s1;
  s32 *new_var;
  void *var_s0;
  void *var_s0_2;
  if (D_800D6358 != 0)
  {
    D_80237AF0(D_800D6358);
  }
  var_s1 = 0;
  func_802747AC(func_8027482C());
  func_80274404();
  var_s0 = *((void **) (((char *) arg0) + 0xEC));
  if ((*((s32 *) (((char *) arg0) + 0xF4))) > 0)
  {
    do
    {
      if ((*((s32 *) (((char *) var_s0) + 0xF4))) & 0x02000000)
      {
        D_80219D8C(var_s0);
      }
      var_s1 += 1;
      var_s0 += 0x368;
    }
    while (var_s1 < (*((s32 *) (((char *) arg0) + 0xF4))));
  }
  var_s0_2 = *((void **) (((char *) arg0) + 0x1738));
  var_s1 = 0x02000000;
  if (var_s0_2 != NULL)
  {
    do
    {
      if ((*((s32 *) (((char *) var_s0_2) + 0xF4))) & var_s1)
      {
        D_80219D8C(var_s0_2);
      }
      var_s0_2 = *((void **) (((char *) var_s0_2) + 0x36C));
    }
    while (var_s0_2 != NULL);
  }
  func_80284DB8();
  D_80221948(0, *((s32 *) (((char *) arg0) + 0x98)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0x9C)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xA0)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xA4)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xA8)));
  new_var = &(*((s32 *) (((char *) arg0) + 0xAC)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xB0)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xB4)));
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xD0)));
  D_80221948(0, *new_var);
  D_80221948(0, *((s32 *) (((char *) arg0) + 0xC8)));
  D_8023D620(&D_800F11C0);
}
