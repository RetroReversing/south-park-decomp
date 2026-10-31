/* identical to func_002A1CB4 in turok2-decomp (matched), with its names changed by decompdecomp */
void func_802A4174(s32 address, s32 value, u32 count)
{
  u32 new_var;
  u32 byte;
  unsigned char new_var2;
  u32 word;
  new_var2 = value & 0xFF;
  while ((count != 0) && ((address & 3) != 0))
  {
    func_802A3E14(address++, new_var2);
    count--;
  }
  if (count >= 4)
  {
    byte = new_var2;
    new_var = byte;
    word = (((byte << 24) | (byte << 16)) | (new_var << 8)) | new_var;
    do
    {
      func_802A3810(address, word);
      count -= 4;
      address += 4;
    }
    while (count >= 4);
  }
  while (count)
  {
    func_802A3E14(address++, new_var2);
    count--;
  }
}
