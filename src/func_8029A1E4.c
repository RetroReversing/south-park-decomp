extern f32 D_800AB024;
extern f32 D_800AB020;
extern u8 D_800F604C;
extern u8 D_800F6090;
extern u32 D_800F6050;
extern void func_8029B1D0(s32);
extern void func_8029C5A4(void);
extern s32 func_8029C610(void);
extern s32 func_8029C638(s32, void *);
extern void func_8029DC78(s32, s32, s32);
void func_8029A234(void *arg0, s32 *arg1);
s32 func_8029AC68(s32 a);
void func_8029ADA4(u8 *a);
void func_8029A1E4(f32 *a)
{
  s32 i;
  s32 j;
  f32 *r;
  f32 *p;
  f32 value;
  i = 0;
  value = D_800AB020;
  r = a;
  do
  {
    j = 0;
    p = a;
    do
    {
      if (i == j)
      {
        *r = value;
      }
      else
      {
        *p = 0;
      }
      j++;
      p++;
    }
    while (j < 4);
    r += 5;
    i++;
    a += 4;
  }
  while (i < 4);
}
