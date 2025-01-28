/*
Print table of value for sine and cose between 0 and 1
Duc
Jan 3, 2025
*/

#include <stdio.h>
#include <math.h>

int main() {
    int interval;
    int i;
    double flag_value = 0.0; // Stack value between interval 
    printf("Input the number of value being showed: ");
    scanf("%d", &interval);
    printf("value\t\tsine_value \tcos_value\n"); // Print header row
    for (i = 0; i <= interval; i++) {
        flag_value += 1.0/interval; // create input value for sine and cos
        printf("%lf\t%lf\t%lf\n", flag_value, sin(flag_value), cos(flag_value)); // Print value of sine and cos
    };
    return 0;
}
