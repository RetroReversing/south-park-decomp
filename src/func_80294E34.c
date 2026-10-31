/* identical to func_00292774 in turok2-decomp (matched), with its names changed by decompdecomp */
s32 func_80294E34(void *arg0, void *arg1)
{
  int new_var;
  new_var = ((s32) (((*((u8 *) (((s8 *) arg0) + 0x36))) * (*((u8 *) (((s8 *) arg0) + 0x33)))) * (*((u8 *) (((s8 *) arg0) + 0x30))))) >> 6;
  new_var = new_var * (((s32) (((*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x20)))) + 0xD))) * (*((s16 *) (((s8 *) arg1) + 0x32)))) * (*((u8 *) (((s8 *) (((*((u8 *) (((s8 *) arg0) + 0x31))) * 0x10) + (*((s32 *) (((s8 *) arg1) + 0x60))))) + 9))))) >> 0xE);
  return ((s32) (new_var * 2)) >> 0x10;
}
