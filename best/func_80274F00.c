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
void func_80274F00(List *arg0)
{
  Node *new_var;
  Node *n;
  Node *t;
  for (n = arg0->head; n != ((Node *) ((char *) (((unsigned char *) arg0) + 4))); n = t)
  {
    t = n->prev;
    n->next->prev = t;
    n->prev->next = n->next;
    new_var = arg0->tail;
    n->prev = (Node *) (&arg0->tail);
    new_var->prev = n;
    n->next = arg0->tail;
    arg0->tail = n;
  }

}
