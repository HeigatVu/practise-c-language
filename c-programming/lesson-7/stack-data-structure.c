/*
The ADT stack
by Duc
Feb 6, 2025
*/

#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100
#define EMPTY -1
#define FULL (MAX_LEN - 1)

typedef struct {
  char string[MAX_LEN];
  int top;
} Stack;

void push(Stack *stk, char value) {
  stk->top++;
  stk->string[stk->top] = value;
}

char pop(Stack *stk) {
  char c = stk->string[stk->top--];
  return c;
}

void reset(Stack *stk) { stk->top = EMPTY; }

char top(const Stack *stk) { return (stk->string[stk->top]); }

int is_empty(const Stack *stk) { return (stk->top == EMPTY); }

int is_full(const Stack *stk) { return (stk->top == FULL); }

int main() {
  Stack stack;
  char *str = "I am otto am II";
  char str_back[20];
  reset(&stack);
  printf("original is: %s\n", str);

  int i = 0;
  while (str[i] != '\0') {
    printf("%c\n", str[i]);
    push(&stack, str[i++]);
    /* i++; */
  }

  i = 0;
  while (!is_empty(&stack) && i < 20) {
    str_back[i++] = pop(&stack);
    /* printf("Reverse is: %s\n", str_back); */
    /* printf("\n\n"); */
  }

  str_back[i] = '\0';
  printf("Reverse is: %s\n", str_back);
  printf("\n\n");
  return 0;
}
