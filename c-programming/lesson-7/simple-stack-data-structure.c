/*
Implement stack in C
Feb 6, 2025
Duc
*/

#include <stdio.h>

#define MAX_SIZE 10

typedef struct {
  char s[MAX_SIZE]; // Array is to store elements
  int top;          // Index of the top in the array
} Stack;

void push(Stack *stk, char value) {
  stk->top++;
  stk->s[stk->top] = value;
}

int main() {
  Stack stack;
  stack.top = -1;

  push(&stack, 'A');
  push(&stack, 'B');
  push(&stack, 'C');

  printf("Top elements is %c\n", stack.s[stack.top]);

  return 0;
}
