/*
Testing pointer
Duc
Jan 6, 2025
*/

#include <stdio.h>
#define SIZE 5 // This is constant value but compiler will know it before starting to run

int main() {
    // const int SIZE = 5; // This is also constant value but when compiler run in this line, 
    // it knew it instead of before running this code like #define
    // This means that you can fix without and avoid leak memory because compiler know value before running code
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum; // * is pointer arithmetic for take value from memory address
                                // & will give memory address of sum => we will have value of sum
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

    printf("sum is at %p, or %lu and is %lf\n",
           ptr_to_sum,
           (unsigned long) ptr_to_sum,
           *ptr_to_sum);
    printf("grades are at %lu to %lu\n", (unsigned long)grades,(unsigned long)(grades + 5));
    return 0;
}
