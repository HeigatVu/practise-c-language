/*
Use of simple arrays
Duc
Jan 6, 2025
*/

#include <stdio.h>
#define SIZE 5 // This is constant value but compiler will know it before starting to run

int main() {
    // const int SIZE = 5; // This is also constant value but when compiler run in this line, 
    // it knew it instead of before running this code like #define
    
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;

    printf("\n my grades are: \n");

    for (i = 0; i < SIZE; i++) {
        printf("%d\t", grades[i]);
    }
    printf("\n\n");

    for (i = 0; i < SIZE; i++) {
        sum += grades[i];
    }

    printf("my average is %.2f\n\n", sum/SIZE);
    return 0;
}
