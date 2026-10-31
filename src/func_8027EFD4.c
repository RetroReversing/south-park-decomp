extern void *D_27FA20;
extern void *D_800AA208;
extern s32 D_80210B64();
extern s32 D_8021FCD8();
extern void *D_80210ADC();
extern s32 func_8027EE4C();
extern void *func_8028087C();
s32 func_8027EFD4(void *arg0, s32 *arg1, s32 arg2, s32 arg3)
{
  int sp20;
  void *temp;
  u16 v;
  if ((arg3 == (-1)) || (arg3 >= (*arg1)))
  {
    *((s32 *) (((char *) arg0) + 0x10)) = 0;
    return 0;
  }
  *((s32 *) (((char *) arg0) + 0x10)) = D_8021FCD8(0, D_80210B64(arg1, arg2, arg3, &sp20), sp20, 4, arg0, &D_27FA20, &D_800AA208, 0);
  if (!func_8027EE4C(arg0))
  {
    return 0;
  }
  temp = func_8028087C(arg0);
  v = *((u16 *) (((char *) D_80210ADC(temp, 0)) + 6));
  *((s16 *) (((char *) arg0) + 4)) = arg3;
  *((u16 *) (((char *) arg0) + 8)) = v;
  temp = D_80210ADC(temp, 3);
  temp = D_80210ADC(temp, 0);
  *((s32 *) (((char *) arg0) + 0xC)) = *((u16 *) (((char *) temp) + 2));
  return 1;
}
