extern s32 D_800BF120;
extern s32 D_800BF124;
extern s32 D_800BF128;
extern s32 D_800CCA80;
void func_80405020(void)
{
  char *new_var;
  new_var = (char *) (&D_800CCA80);
  D_800BF128 = 0;
  D_800BF120 = *((s32 *) (new_var + 0x1780));
  D_800BF124 = *((s32 *) (((char *) (&D_800CCA80)) + 0x1784));
}
