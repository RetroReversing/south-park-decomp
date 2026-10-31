extern s32 D_8010DB48;
extern s32 D_8010DB4C;
void func_80406714(void)
{
  char *new_var;
  new_var = (char *) (&D_8010DB48);
  *((s8 *) (((char *) (&D_8010DB48)) + 3)) = 0;
  *((s8 *) (((char *) (&D_8010DB48)) + 2)) = 0;
  *((s8 *) (((char *) (&D_8010DB48)) + 1)) = 0;
  *((s8 *) (new_var + 0)) = 0;
  D_8010DB4C = 0;
}
