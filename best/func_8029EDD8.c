typedef struct Node {
    struct Node *next;
    s32 key;
    struct Node *parent;
} Node;

void func_8029EDD8(Node **head, Node *n) {
    Node *prev;
    s32 k = n->key;

    for (prev = *head; prev->key < k; prev = prev->next) {
    }
    n->next = prev->next;
    prev->next = n;
    n->parent = (Node *)head;
}
