typedef struct Node
{
  struct Node *next;
  void *unk4;
  s32 count;
  char pad[4];
} Node;
extern s32 func_802A0728(s32);
extern void alUnlink(void *);
extern void alLink(void *, void *, void *);
extern char func_80293940(void *, void *, s32);
void func_8029370C(Node **arg0, void *arg1, s32 arg2)
{
  s32 amt = arg2;
  s32 flag = 0;
  s32 save = func_802A0728(1);
  Node **link;
  Node *cur;
  Node *n = *arg0;
  if (n == NULL)
  {
    func_802A0728(save);
    return;
  }
  alUnlink(n);
  func_80293940(arg1, ((char *) n) + 0xC, 0x10);
  if (amt == 0x7FFFFFFF)
  {
    flag = -1;
  }
  link = arg0 + 2;
  if (link != NULL)
  {
    for (;;)
    {
      cur = *link;
      if (cur == NULL)
      {
        if (flag != 0)
        {
          n->count = 0;
        }
        else
        {
          n->count = amt;
        }
        alLink(n, link, cur);
        break;
      }
      if (amt < cur->count)
      {
        n->count = amt;
        cur->count -= amt;
        alLink(n, link, cur);
        break;
      }
      amt -= cur->count;
      link = &cur->next;
    }

  }
  func_802A0728(save);
}
