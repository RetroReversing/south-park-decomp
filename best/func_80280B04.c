void func_80280B04(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  u32 temp_a1;
  u32 temp_a2;
  u32 var_a1;
  u32 var_a2;
  u32 var_a3;
  u32 var_v1;
  temp_a1 = (1 << arg1) - 1;
  var_v1 = temp_a1;
  temp_v0 = arg0 & 0x1F;
  temp_a2 = arg2 & temp_a1;
  if (temp_v0 == 0)
  {
    var_a3 = temp_a2;
    var_a1 = 0;
    var_a2 = 0;
  }
  else
  {
    var_v1 = temp_v0;
    var_v1 = temp_a1 << var_v1;
    temp_v0_2 = 0x20 - temp_v0;
    var_a1 = temp_a1;
    var_a1 = var_a1 >> temp_v0_2;
    var_a3 = temp_a2 << temp_v0;
    var_a2 = temp_a2 >> temp_v0_2;
  }
  do
  {
    temp_a0 = (arg0 & 0xF0000000) | (((u32) (arg0 & 0x0FFFFFE0)) >> 3);
    *((s32 *) (((char *) temp_a0) + 0)) = (s32) (((*((s32 *) (((char *) temp_a0) + 0))) & (~var_v1)) | var_a3);
    *((s32 *) (((char *) temp_a0) + 4)) = (s32) (((*((s32 *) (((char *) temp_a0) + 4))) & (~var_a1)) | var_a2);
  }
  while (0);
}
