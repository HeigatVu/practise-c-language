#include <stdio.h>

int main() {
    int c;
    int blankss = 0, digitss = 0, letterss = 0, otherss = 0;
    int total_char = 0;
    for (; (c = getchar()) !=EOF; total_char++) {
        if (c == ' ') {
            ++blankss;
        } else if (c >= '0' && c <= '9') {
            ++digitss;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            ++letterss;
        } else {
            ++otherss;
        };
    };
    printf("\nFor loop: blanks = %d, digits = %d, letters = %d, others = %d\n\n",\
            blankss, digitss, letterss, otherss);
    return 0;
}
    


