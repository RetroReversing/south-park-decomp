s32 func_80408D4C(s32);
s32 func_80408D88(void *);
s32 func_80408DB4();
extern volatile unsigned char D_8010E4CC;
void func_8040BA70(void)
{
  *((s32 *) (((char *) (&D_8010E4CC)) + 0)) = func_80408DB4();
  *((s32 *) (((char *) (&D_8010E4CC)) + 4)) = func_80408D4C(0x19C);
  func_80408D88((&D_8010E4CC) - 8);
}
