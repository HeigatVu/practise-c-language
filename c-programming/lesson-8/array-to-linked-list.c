/*
Array to linked list conversion
By Duc
Feb 9. 2025
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int data;
  struct list *next;
} List;

// Check if the list is empty
int isEmpty(const List *l) { return (l == NULL); }

// Create a single node List
List *createList(int d) {
  List *head = (List *)malloc(sizeof(List));
  if (head == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  head->data = d;
  head->next = NULL;
  return head;
}

// Add a new node to the beginning of the list
List *addToFront(List *h, int d) {
  List *newNode = createList(d);
  newNode->next = h;
  return newNode;
}

// Convert an array to a linked list
List *arrayToList(int d[], int size) {
  List *head = NULL;
  if (size > 0) {
    head = createList(d[0]);
    for (int i = 1; i < size; i++) {
      head = addToFront(head, d[i]);
    }
  }
  return head;
}

// Print linked list
void printList(const List *h, const char *title) {
  printf("%s\n", title);
  if (isEmpty(h)) {
    return;
  }

  while (h != NULL) {
    printf("%d : ", h->data);
    h = h->next;
  }
  printf("NULL\n");
}

// Some linked list processing operations
// Count
int count_iterative(const List *h) {
  if (isEmpty(h)) {
    return 0;
  } else {
    int count = 0;
    while (h != NULL) {
      count++;
      h = h->next;
    }
    return count;
  }
}

// Concatenate two linked lists
// With recurrsion
void concatenate(List *h1, List *h2) {
  assert(h1 != NULL && h2 != NULL);

  if (h1->next == NULL) {
    h1->next = h2;
  } else {
    concatenate(h1->next, h2);
  }
}
// With iteration
List *concatenate_iterative(List *h1, List *h2) {
  assert(h1 != NULL && h2 != NULL);

  List *current = h1;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = h2;
  return h1;
}

// Insertion
void insert(List *p1, List *p2, List *q) {
  assert(p1->next == p2);

  p1->next = q;
  q->next = p2;
}

int main() {
  int data1[] = {2, 3, 5};
  int data2[] = {7, 8, 9};
  int size1 = sizeof(data1) / sizeof(data1[0]);
  int size2 = sizeof(data2) / sizeof(data2[0]);

  List *list1 = arrayToList(data1, size1);
  List *list2 = arrayToList(data2, size2);

  printf("List 1: ");
  printList(list1, "Before concatenation");
  printf("List 2: ");
  printList(list2, "Before concatenation");

  printf("Count of list 1: %d \n", count_iterative(list1));

  // concatenate_iterative
  List *concatenateTwoLists = concatenate_iterative(list1, list2);
  printf("Concatenated list: ");
  printList(concatenateTwoLists, "After concatenation");

  // Insertion
  List *new_node = createList(10);
  List *current = concatenateTwoLists;
  for (int i = 0; i < 1; i++) { // Insert between second and third node
    current = current->next;
  }

  insert(current, current->next, new_node);
  printf("List after insertion: ");
  printList(concatenateTwoLists, "After insertion");

  List *next_node;
  current = concatenateTwoLists;
  while (current != NULL) {
    next_node = current->next;
    free(current);
    current = next_node;
  }

  return 0;
}
