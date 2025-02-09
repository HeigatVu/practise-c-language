/*
The ADT list
By Duc
Feb 8, 2025
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int data;
  struct list *next;
} List;

int is_empty(const List *l) { return l == NULL; }

void print_list(List *h, char *title) {
  printf("%s\n", title);
  while (h != NULL) {
    printf("%d :", h->data);
    h = h->next;
  }
}

int main() {
  List listOfInt;
  List *head = NULL;

  head = (List *)malloc(sizeof(List));
  printf("sizeof(list) = %lu\n", sizeof(List));
  head->data = 5;
  head->next = NULL;
  print_list(head, "single element list");

  free(head);
  head = NULL;
  return 0;
}
