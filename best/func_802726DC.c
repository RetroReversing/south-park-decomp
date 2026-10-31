s32 func_80295C28(void *);
s32 func_802964F0(void *, s16);
s32 alSndpStop(void *);
void func_802726DC(s32 arg0, s16 arg1)
{
  short new_var;
  u8 *s0 = ((u8 *) arg0) - (-(arg1 * 0xB8));
  void *a0;
  s0 += 4;
  a0 = *((void **) (s0 + 0xB0));
  *((s32 *) (s0 + 0xA8)) = 1;
  *((s32 *) (s0 + 0x4C)) = 0;
  new_var = 2;
  if ((*((s32 *) (s0 + 0x10))) != (*((s32 *) (((u8 *) a0) + 0x104))))
  {
    void *s1 = ((u8 *) a0) + 0x84;
    s16 val = *((s16 *) ((((u8 *) a0) + ((*((s32 *) s0)) * new_var)) + 0xDC));
    func_802964F0(s1, val);
    if (func_80295C28(s1))
    {
      alSndpStop(s1);
    }
    *((s32 *) (s0 + 4)) = -1;
  }
}
