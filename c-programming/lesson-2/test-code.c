/*
Helping test code
Duc
Jan 1,2025
*/

#include <stdio.h>

int main(void) {
    {
        int a = 5, b = 7, c = 0, d = 0;

        c = (++a) + (b++);
        d += 5;
        printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    };

    {
        int i;
        double x;
        double avg = 0.0;
        double navg;
        double sum = 0.0;

        printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",\
               "count", "Item", "Average", "Naive avg\n",\
               "_____", "_____", "_____", "_____\n");
        for (i = 1; scanf("%lf", &x); i++) {
            avg += (x - avg) / i;
            printf("i= %d and avg= %lf\n", i, avg);
            sum += x;
            navg = sum / i;
            printf("%5d%17e%17e%17e\n", i, x, avg, navg);
        }
    }
    return 0;
}
