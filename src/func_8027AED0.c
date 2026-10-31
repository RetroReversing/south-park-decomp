typedef struct Arg0
{
  char pad0[4];
  s32 unk4;
  char pad8[0x44];
  void *unk4C;
  char pad50[4];
  char unk54[0x40];
  char unk94[0x40];
  s32 unkD4;
} Arg0;
extern void *D_80227E34(void *);
extern void func_8029A2CC(void *, void *);
extern void D_80211240(void *, void *, void *);
extern s32 D_80210ADC(void *, s32);
extern s32 func_8027AAF0(Arg0 *, void *);
extern void D_80221864(s32, void *);
void func_8027AED0(Arg0 *arg0)
{
  void *sp4C;
  void *temp_v0;
  void *temp_s0;
  void *temp_s0_2;
  void *temp_v0_2;
  s32 temp_s2;
  void *temp_s1_2;
  s32 i;
  sp4C = arg0->unk4C;
  temp_v0 = D_80227E34(sp4C);
  temp_s0 = ((char *) arg0) + 0x54;
  if (temp_v0 != NULL)
  {
    func_8029A2CC(temp_s0, ((char *) sp4C) + 0x28);
    D_80211240(((char *) arg0) + 0x94, temp_s0, &arg0->unk4);
    temp_s0_2 = *((void **) temp_v0);
    temp_s2 = D_80210ADC(temp_s0_2, 0);
    arg0->unkD4 = temp_s2;
    temp_v0_2 = (void *) D_80210ADC((void *) D_80210ADC(temp_s1_2 = temp_s0_2, 2), *((s8 *) (((char *) (*((void **) (((char *) sp4C) + 0x14)))) + 0xE)));
    temp_s2 = *((s32 *) temp_v0_2);
    temp_s1_2 = *((void **) arg0);
    i = 0;
    if (temp_s2 > 0)
    {
      do
      {
        if ((*((s32 *) (((char *) temp_s1_2) + 0x9C))) != 0)
        {
          break;
        }
        do
        {
          func_8027AAF0(arg0, (void *) D_80210ADC(temp_v0_2, i));
        }
        while (0);
        i++;
      }
      while (i < temp_s2);
    }
    D_80221864(0, temp_v0);
  }
}
