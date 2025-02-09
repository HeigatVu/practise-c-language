/*
The ADT binary tree
by Duc
Feb 9. 2025
*/

#include <stdio.h>
#include <stdlib.h>

typedef char DATA;

typedef struct node {
  DATA d;
  struct node *left;
  struct node *right;
} NODE;

typedef NODE *BTREE;

// In-order traversal: Left, root, right
void inorder(BTREE root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%c \t", root->d);
    inorder(root->right);
  }
}

NODE *allocateNode(void) {
  NODE *p = (NODE *)malloc(sizeof(NODE));
  if (p == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  return p;
}

BTREE init_node(DATA d1, BTREE p1, BTREE p2) {
  BTREE t = allocateNode();
  t->d = d1;
  t->left = p1;
  t->right = p2;
  return t;
}

BTREE create_tree(DATA a[], int i, int size) {
  if (i >= size) {
    return NULL;
  } else {
    return init_node(a[i], create_tree(a, 2 * i + 1, size),
                     create_tree(a, 2 * i + 2, size));
  }
}

int main() {
  DATA d[] = {'A', 'B', 'C', 'D', 'E'};
  int size = sizeof(d) / sizeof(d[0]);
  BTREE root = create_tree(d, 0, size);

  printf("In-order traversal: ");
  inorder(root);
  printf("\n");

  return 0;
}

// REcursive function to deallocate Memory
void release_tree(BTREE root) {
  if (root != NULL) {
    release_tree(root->left);
    release_tree(root->right);
    free(root);
  }
}
