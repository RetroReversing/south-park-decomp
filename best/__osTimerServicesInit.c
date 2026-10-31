extern void *D_800B4948;
extern s32 D_800F7678,D_800F767C,D_800F7680,D_800F7684;
void __osTimerServicesInit(s32 a0, s32 a1) {
  s32 *p = D_800B4948;
  D_800F7680 = a0;
  D_800F7684 = a1;
  D_800F7678 = 0;
  D_800F767C = 0;
  p[4] = a0;
  p[5] = a1;
  p[2] = a0;
  p[3] = a1;
  p[1] = (s32)p;
  p[0] = (s32)p;
  p[6] = 0;
  p[7] = 0;
}
