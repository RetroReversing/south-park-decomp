s32 func_8029BC60(s32,s32,s32,u8*);
s32 func_8041249C(s32,s32,s32);
s32 func_804123D4(void *arg0){
  u8 tmp[32];
  s32 r;
  s32 i;
  if (*(u8*)((u8*)arg0+0x65)) {
    r = func_8041249C(0, 0, 1);
    *(u8*)((u8*)arg0+0x65) = 0;
    if (r) return r;
  }
  r = func_8029BC60(*(s32*)((u8*)arg0+4), *(s32*)((u8*)arg0+8), 1, tmp);
  if (r) {
    if (r != 2) return r;
    r = func_8029BC60(*(s32*)((u8*)arg0+4), *(s32*)((u8*)arg0+8), 1, tmp);
    if (r) return r;
  }
  for (i = 0; i < 32; i++) {
    if (*(u8*)((u8*)arg0+0xc+i) != tmp[i]) return 2;
  }
  return 0;
}
