/*
Testing code for time function
Duc
Jan 3, 2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 10000000
#define NCOLS 7
#define NLINES 7

int main(void) {
    int i, val;
    long begin, diff, end;

    begin = time(NULL);
    srand(time(NULL));
    printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);

    for (i = 1; i <= NCALLS; ++i) {
        val = rand();
        if (i <= NCOLS * NLINES) { // It will check that random number is out of col and line?
            printf(" %7d ", val);
            if (i % NCOLS == 0) { // It will check that full col or not to go to new line
                putchar('\n');
            }
        } else if (i == NCOLS * NLINES + 1) { // It will check the number is out of limitation to print ....
            printf("%7s\n\n", ".....");
        }
    }

    end = time(NULL);
    diff = end - begin;
    printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n\n",
           "begin time: ", begin,
           "end time: ", end,
           "elapsed time: ", diff,
           "time for each call: ", (double) diff / NCALLS);

    return 0;
}
