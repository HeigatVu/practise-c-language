/*
Sorting bubble Sorting
Duc
Jan 8, 2025
*/

#include <stdio.h>
#define SIZE 5

void swap_variable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str) {
    int i;
    printf("%s", str);

    for (i = 0; i < how_many; i++) {
        printf("%d\t", data[i]);
    }
}

// void bubble_sort(int how_many, int data[]) {
//     int go_on;
//
//     for (int  i = 0; i < how_many; i++) {
//         print_array(how_many, data, "\ninside bubble-sort\n");
//         printf("i = %d, input any int to continue: ", i);
//         scanf("%d", &go_on);
//         for (int j = i + 1; j < how_many; j++) {
//             if (data[i] > data[j]) {
//                 swap_variable(&data[i], &data[j]);
//             }
//         }
//     }
// }
void bubble_sort_v2(int how_many, int data[]) {
    int i, j;
    int go_on;

    for (i = 0; i < how_many; i++) {
        print_array(how_many, data, "\ninside bubble-sort\n");
        printf("i = %d, input any int to continue: ", i);
        scanf("%d", &go_on);
        for (j = how_many - 1; j > i; j--) {
            if (data[j - 1] > data[j]) {
                swap_variable(&data[j - 1], &data[j]);
            }
        }
    }
}

int main(void) {
    int grades[SIZE] = {78, 67, 92, 83, 88};

    print_array(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubble_sort_v2(SIZE, grades);
    print_array(SIZE, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}
