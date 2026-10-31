extern s32 alUnlink(void *);
extern s32 alLink(void *, void *);
void func_80295254(void *arg0, void *arg1)
{
  u16 type;
  void *next;
  void *node;
  s32 (*cb)(s32);
  node = *((void **) (((u8 *) arg0) + 0x50));
  if (node == NULL)
  {
    return;
  }
  do
  {
    type = *((u16 *) (((u8 *) node) + 0xC));
    next = *((void **) node);
    if ((((u32) (type - 0x16)) < 2) && ((*((void **) (((u8 *) node) + 0x10))) == arg1))
    {
      cb = *((s32 (**)(s32)) (((u8 *) arg0) + 0x78));
      cb(*((s32 *) (((u8 *) node) + 0x14)));
      alUnlink(node);
      if (next)
      {
        *((s32 *) (((u8 *) next) + 8)) += *((s32 *) (((u8 *) node) + 8));
      }
      alLink(node, ((u8 *) arg0) + 0x48);
      if (((s16) type) == 0x16)
      {
        *((u8 *) (((u8 *) arg1) + 0x37)) &= 0xFE;
      }
      else
      {
        *((u8 *) (((u8 *) arg1) + 0x37)) &= 0xFD;
      }
      if ((*((u8 *) (((u8 *) arg1) + 0x37))) == 0)
      {
        return;
      }
    }
    if (node)
    {
      node = next;
    }
    else
    {
      node = next;
    }
  }
  while (node);
}
