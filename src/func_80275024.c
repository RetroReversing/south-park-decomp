typedef struct Node { struct Node *next; struct Node *prev; } Node;
void func_80275024(Node **head, Node *item) { Node *n=*head; item->prev=(Node*)head; item->next=n; n=*head; n->prev=item; *head=item; }
