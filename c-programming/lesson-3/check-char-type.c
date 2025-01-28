/*
Check type of char in string
Duc
Jan 2, 2025
*/

#include <stdio.h>

int main(void) {
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; // Use for int value of char
    while( (c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        } else if (c >= '0' && c <= '9') {
            ++digits;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            ++letters;
        } else {
            ++others;
        };
    };
    printf("\nWhile loop: blanks = %d, digits = %d, letters = %d, others = %d\n\n",\
            blanks, digits, letters, others);
    

    return 0;
}
