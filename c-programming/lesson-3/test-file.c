/*
Logical operators and short circuit evaluation
Duc
Jan 2, 2025
*/

#include <stdio.h>

int main() {
    //TEST LOGICAL OPERATORS
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false:");
    scanf("%d", &outside);
    printf("\nEnter if rain 1 true 0 false:");
    scanf("%d", &weather);
    if (outside && weather) {
        printf("\nPlease use an umbrella.\n");
    } else {
        printf("\nDress normally.\n\n");
    }

    int c = 2;
    if (!c) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    // TEST FOR WHILE LOOP
    int i = 0;

    do {
      printf("Do/while: %d\n", i);
      i++;
    }
    while (i < 5);

    int j = 0;
    while (j < 5) {
        j++;
        printf("While: %d\n", j);
    }
    return 0;
}
