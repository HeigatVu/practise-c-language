/*
Print sine between 0 and 1
Duc
Jan 1, 2025
*/

#include <stdio.h>
#include <math.h>

int main() {

    // Input value
    double x;
    printf("Input x: ");
    scanf("%lf", &x);
    
    // Check value
    if (x <= 1 && x >= 0) {
        double sine_value = sin(x);
        printf("Sine x: %lf\n", sine_value);
    } else {
        printf("Input should be between 0 and 1");
    }
    return 0;
}
