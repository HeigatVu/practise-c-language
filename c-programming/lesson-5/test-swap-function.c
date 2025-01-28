/*
Testing swap function
Duc
Jan 8. 2025
*/

#include <stdio.h>

void swap_variable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 2, b = 5;
    printf("Before swap a = %d, b = %d\n", a, b);

    swap_variable(&a, &b);
    printf("After swap a = %d, b = %d", a, b);
    return 0;
}
