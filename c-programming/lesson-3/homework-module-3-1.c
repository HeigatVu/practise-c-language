/*
Homework module 3-1
Duc
Jan 3,2025
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double interval;
    int i;
    for (i = 0; i <= 30; i++) {
        interval = i/10.0;
        printf("sin(%lf) = %lf \t", interval, fabs(sin(interval)));

    }
    printf("\n+++++++++++\n");
    return 0;
}
