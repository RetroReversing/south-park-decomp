typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

void func_802910F8(Node **list, Node *n) {
    Node *first;

    n->prev = NULL;
    n->next = *list;
    if (*list != NULL)
        (*list)->prev = n;
    first = list[1];
    if (first == NULL) {
        *list = n;
        list[1] = n;
    }
}
