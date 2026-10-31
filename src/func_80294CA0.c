typedef struct LNode LNode;
struct LNode
{
  LNode *next;
  char pad[0x2C];
  u8 a30;
  u8 idx;
  u8 a32;
  u8 a33;
  u8 a34;
  u8 state;
};
s32 func_80294D00(void *arg0);
void *func_80294CA0(void *arg0, unsigned char arg1, u8 arg2)
{
  LNode *v = *((LNode **) (((u8 *) arg0) + 0x64));
  u8 k;
  while (v != NULL)
  {
    if (v->a32 != arg1)
    {
      goto next;
    }
    if (v->idx != arg2)
    {
      goto next;
    }
    k = v->state;
    if (((unsigned int) k) == 3)
    {
      goto next;
    }
    if (k != 4)
    {
      if (arg2)
      {
        goto found;
      }
      else
      {
        goto found;
      }
      found:
      return v;

    }
    next:
    v = v->next;

  }

  return NULL;
}
