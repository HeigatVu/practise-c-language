/*
The distance of a marathon in kilometers
By Duc following course in coursera
Jan 1, 2025
*/

#include <stdio.h>

int main() {
    int miles = 26, yards = 385;
    int kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %d kilometers.\n\n", kilometers);
    return 0;
}
