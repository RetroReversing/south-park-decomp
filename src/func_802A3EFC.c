/* identical to func_002A1A3C in turok2-decomp (matched), with its names changed by decompdecomp */
void func_802A3EFC(s32 address, const u8 *source, u32 length)
{
  u32 word;
  while ((length != 0) && ((address & 3) != 0))
  {
    func_802A3E14(address++, *(source++));
 do { } while (0);
    length--;
  }
  if (length >= 4)
  {
    do
    {
      word = (((((u32) source[0]) << 24) | (((u32) source[1]) << 16)) | (((u32) source[2]) << 8)) | source[3];
      func_802A3810(address, word);
      address += 4;
      source += 4;
      length -= 4;
    }
    while (length >= 4);
  }
  while (length != 0)
  {
    func_802A3E14(address++, *(source++));
    length--;
  }
}
