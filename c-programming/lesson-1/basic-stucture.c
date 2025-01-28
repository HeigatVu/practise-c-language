/*
Circle and area
Following code in coursera course
Jan 1, 2025
*/

// This is header of c programming
#include <stdio.h>
#define PI 3.14159 //This header helps create global variable or constant variable

int main() {
    // Define local variable
    double area = 0.0;
    double radius = 0.0;
    
    // Input from keyboard
    printf("Enter radius: ");
    scanf("%lf", &radius);

    // Calculate and print result
    area = PI * radius * radius;
    printf("Radius of %lf meters; area is %lf sq.meters\n", radius, area);
    return 0;
}
