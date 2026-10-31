typedef struct Node { struct Node *next,*prev; } Node; Node *func_80274C7C(Node *n){ Node *a=n->next; Node *b=n->prev; a->prev=b; a=n->prev; b=n->next; a->next=b; return n; }
