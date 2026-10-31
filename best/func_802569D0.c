extern void *D_800CE20C;
extern void *D_800CEE08;
extern void D_802168D8();
extern void D_8021E710();
extern void D_8021E930();
extern void func_80257824();
extern void func_80261CC0();
void func_802569D0(s32 a0, void *a1, s32 a2)
{
  char *__repair_addr;
  u32 flags;
  void *p;
  s32 *count;
  s32 temp;
  __repair_addr = (char *) (((char *) a1) + 0x40);
  flags = *((u32 *) __repair_addr);
  *((s16 *) (((char *) p) + 0x16)) = 0;
  if (!(flags & 0x100))
  {
    goto end;
  }
  if (flags & 0x800)
  {
    goto end;
  }
  if (*(((u8 *) a1) + 0x1B1))
  {
    func_80257824(a1);
    func_80261CC0(&D_800CEE08, a1);
  }
  p = *((void **) (((char *) a1) + 0x114));
  if (p)
  {
    p = *((void **) (((char *) a1) + 0x114));
    D_802168D8(&D_800CE20C);
    *((void **) (((char *) a1) + 0x114)) = 0;
  }
  count = *((s32 **) (((char *) a1) + 0x10C));
  if (count)
  {
    temp = *count;
    temp--;
    *count = temp;
  }
  *((u32 *) (((char *) a1) + 0x40)) &= ~0x100;
  D_8021E930(a2, a1);
  D_8021E710(a0 + 8, a1);
  if ((*((s8 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) a1) + 0xF8)))) + 0x34)))) + 5))) != 3)
  {
    D_8021E930(a0 + 0x1C, a1);
  }
  end:
  ;

  ;
}
