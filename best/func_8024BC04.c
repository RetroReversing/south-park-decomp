s32 D_80203F74(s32 *, void *, s32);
s32 D_8021B7EC(void *, s32, void *);
s32 D_80242160(s32, s32);
extern s32 D_800CCA80;
void func_8024BC04(void *arg0, void *arg1)
{
  if (arg1)
  {
    D_80242160(4, *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x20)));
    *((s32 *) (((char *) arg1) + 0xCC)) = 0;
    D_80203F74(&D_800CCA80, arg0, 1);
    D_8021B7EC(arg0, 1, arg0);
  }
  else
  {
    D_80242160(4, *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x20)));
    *((s32 *) (((char *) arg1) + 0xCC)) = 0;
    D_80203F74(&D_800CCA80, arg0, 1);
    D_8021B7EC(arg0, 1, arg0);
  }
}
