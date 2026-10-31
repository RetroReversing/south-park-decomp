typedef struct Node
{
  struct Node *next;
  struct Node *prev;
} Node;
typedef struct List
{
  char pad0[8];
  Node *head;
  char pad1[0xB8];
  Node *tail;
} List;
void func_80274C7C(Node *arg0);
void func_80274E9C(List *arg0, s32 arg1)
{
  char *__repair_addr;
  Node *n;
  Node *t;
  for (n = arg0->head; n != ((Node *) (((char *) arg0) + 4)); n = t)
  {
    t = *((Node **) (((char *) n) + 4));
    __repair_addr = (char *) (((char *) n) + 0xC);
    if ((*((s32 *) __repair_addr)) == arg1)
    {
      *((Node **) (((char *) (*((Node **) ((char *) n)))) + 4)) = t;
      *((Node **) ((char *) (*((Node **) (((char *) n) + 4))))) = *((Node **) ((char *) n));
      *((Node **) ((char *) n)) = arg0->tail;
      *((Node **) (((char *) n) + 4)) = (Node *) (&arg0->tail);
      *((Node **) (((char *) arg0->tail) + 4)) = n;
      arg0->tail = n;
    }
  }

}
