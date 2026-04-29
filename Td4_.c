#include <stdio.h>
#include <stdlib.h>

typedef struct Tree {
    int val;
    struct Tree* left;
    struct Tree* right;
} Tree;

Tree* insert(Tree* t, int x) {
    if(t == NULL) {
        Tree* n = malloc(sizeof(Tree));
        n->val = x;
        n->left = n->right = NULL;
        return n;
    }
    if(x < t->val)
        t->left = insert(t->left, x);
    else
        t->right = insert(t->right, x);

    return t;
}

void inorder(Tree* t) {
    if(t) {
        inorder(t->left);
        printf("%d ", t->val);
        inorder(t->right);
    }
}

int main() {
    Tree* t = NULL;

    t = insert(t, 5);
    t = insert(t, 2);
    t = insert(t, 8);

    inorder(t);

    return 0;
}
