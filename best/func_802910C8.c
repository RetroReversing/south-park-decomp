typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

void func_802910C8(Node *list, Node *node) {
    node->next = 0;
    node->prev = list->prev;
    if (list->prev != 0) {
        list->prev->next = node;
    }
    list->prev = node;
    if (list->next == 0) {
        list->next = node;
    }
}
