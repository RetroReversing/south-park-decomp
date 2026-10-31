s32 D_8021775C(s32);
s32 D_8021A074(s32, s32, s32);
s32 D_80241B40(s32 *, s32);
extern s32 D_800AE8D8;
void func_8024D758(s32 arg0, void *arg1)
{
  s32 temp_a1;
  if ((((u32) ((*((u16 *) (((char *) arg1) + 0xB0))) - 0xFA0)) < 0x401U) && ((*((s8 *) (((char *) arg1) + 0xB3))) != 0))
  {
    if (arg1)
    {
      temp_a1 = D_80241B40(&D_800AE8D8, -1);
      *((s8 *) (((char *) arg1) + 0x31)) = -1;
      *((s8 *) (((char *) arg1) + 0xB3)) = 0;
      *((s32 *) (((char *) arg1) + 0x154)) = temp_a1;
      D_8021A074(arg0, temp_a1, 1);
      D_8021775C(arg0);
    }
    else
    {
      temp_a1 = D_80241B40(&D_800AE8D8, -1);
      *((s8 *) (((char *) arg1) + 0x31)) = -1;
      *((s8 *) (((char *) arg1) + 0xB3)) = 0;
      *((s32 *) (((char *) arg1) + 0x154)) = temp_a1;
      D_8021A074(arg0, temp_a1, 1);
      D_8021775C(arg0);
    }
  }
}
