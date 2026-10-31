typedef struct Node93818
{
  struct Node93818 *next;
  s32 unk4;
  s32 unk8;
  s16 unkC;
  s32 unk10;
} Node93818;
extern void alUnlink(Node93818 *);
extern void alLink(Node93818 *, void *);
s32 func_80294BF0(char *arg0, s32 arg1, s32 arg2)
{
  Node93818 *node;
  Node93818 *next;
  s32 size;
  s32 ret;
  node = *((Node93818 **) (arg0 + 0x50));
  ret = 0;
  ret = 1;
  if (node != NULL)
  {
    do
    {
      size = node->unk8;
      next = node->next;
      ret += size;
      if (node->unkC == 5)
      {
        if (node->unk10 == arg1)
        {
          if (arg2 < ret)
          {
            if (next != NULL)
            {
              next->unk8 += size;
            }
            alUnlink(node);
            alLink(node, arg0 + 0x48);
            return ret;
            ret = 0;
          }
          break;
        }
      }
      node = next;
    }
    while (node != NULL);
  }
  return ret;
}
