extern s32 D_8010DE78;
s32 func_80408CD0(s32 arg0)
{
  if (arg0 >= 0)
  {
    *((s32 *) (((char *) (&D_8010DE78)) + 0)) = arg0;
    *((s32 *) (((char *) (&D_8010DE78)) + 4)) = -1;
    *((s32 *) (((char *) (&D_8010DE78)) + 8)) = 0x1E;
  }
  if (1)
  {
    return *((s32 *) (((char *) (&D_8010DE78)) + 0));
  }
}
