/*
Test function in C
Duc
Jan 4.2025
*/

#include <stdio.h>

void wrt_very(int count) {
    while (count > 0) {
        printf("\n very");
        count--;
    }
    printf(" much.\n\n");
}

int main(void) {
    int repeat = 0;
    printf("How strong is your love 1-10?: ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    // Without using function to encapsule
    // while (repeat > 0) {
    //     printf("\n very");
    //     repeat--;
    // };
    // printf(" much.\n\n");

    // Using function
    wrt_very(repeat);
    return 0;
}
