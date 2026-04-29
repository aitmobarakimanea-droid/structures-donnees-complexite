#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

void insert(Node** head, int val) {
    Node* n = malloc(sizeof(Node));
    n->val = val;
    n->next = *head;
    *head = n;
}

void afficher(Node* head) {
    while(head) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int rechercher(Node* head, int x) {
    while(head) {
        if(head->val == x) return 1;
        head = head->next;
    }
    return 0;
}

int main() {
    Node* L = NULL;

    insert(&L, 3);
    insert(&L, 7);
    insert(&L, 1);

    afficher(L);

    printf("Existe 7 ? %d\n", rechercher(L,7));

    return 0;
}
