/*
Recursive vs interative fibonancci
Duc
Jan 5, 2025
*/

#include <stdio.h>

long fibonancci(int n) {
    long f2 = 0, f1 = 1, f_old;
    int i;

    for (i = 0; i < n; i++) {
        f_old = f2;
        f2 += f1;
        f1 = f_old;
    };
    return f2;
}

long recursive_fibonancci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return (recursive_fibonancci(n - 2) + recursive_fibonancci(n -1));
    }
}

int main() {
    int how_many = 0, i;
    printf("I want table of fibonancci upto n: ");

    scanf("%d", &how_many);
    printf("\n fibonancci \n");

    for (i = 0; i < how_many; i++) {
        printf("\n%d\t %ld %ld\n", i, fibonancci(i), recursive_fibonancci(i));
    }
    return 0;
}
