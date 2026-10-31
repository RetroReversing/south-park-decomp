/* identical to func_002A1954 in turok2-decomp (matched), with its names changed by decompdecomp */
void func_802A3E88(s32 arg0, unsigned char arg1)
{
  s32 temp_s0;
  s32 temp_s2;
  temp_s2 = ((~arg0) & 3) * 8;
  arg0 &= ~3;
  func_802A3810(arg0, (func_802A3844(arg0) & (~(0xFF << temp_s2))) | ((arg1 & 0xFF) << temp_s2));
}
