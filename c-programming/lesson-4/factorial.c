/*
Recursive vs interative factorial
Duc
Jan 5, 2025
*/

#include <stdio.h>

long factorial(int n) { // Long type allows it to work upto 20 digits
    long f = 1;
    int i;

    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

long recursive_factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
       return (recursive_factorial(n - 1) * n);
    }
}

int main() {
    int how_many = 0, i;
    printf("I want table of factorial uptp n: ");
    scanf("%d", &how_many);
    printf("\n factorial \n");

    for (i = 1; i <= how_many; i++) {
        printf("\n%d\t %ld\n", i, factorial(i));
    };
    printf("\n\n");
    for  (i = 1; i <= how_many; i++) {
        printf("\n%d\t %ld\n",i, recursive_factorial(i));
    };
    printf("\n\n");
    return 0;
}
