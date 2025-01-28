/*
Calculating elephant seal data
Duc
Jan 11, 2025
*/

#include <stdio.h>
#include <stdlib.h>

// Struct to hold the array and its size
typedef struct {
    int *array;
    int size;
} IntegerArray;

// Function is to read integers from a file into a dynamically allocated array
IntegerArray readIntegersFromFile(const char *filename) {
    FILE *file;
    IntegerArray result = {NULL, 0}; // Initialize array to NULL and size to 0
    int capacity = 0; // Initial capacity of the array
    int num;

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file \n");
        return result; // Return empty structure on error
    }

    // Read integers from the file until the end is reached
    while (fscanf(file, "%d", &num) == 1) {
        // Check if we need to resize the array 
        if (result.size == capacity) {
            capacity += 10; // increase capacity
            int *temp = realloc(result.array, capacity * sizeof(int));
            if (temp == NULL) {
                fprintf(stderr, "Memory allocation error \n");
                free(result.array);
                fclose(file);
                result.array = NULL;
                result.size = 0;
                return result; // Return empty structure on error 
            }
            result.array = temp;
        }
        // Store the number in the array 
        result.array[result.size] = num;
        result.size++;
    }
    // Close the file
    fclose(file);

    return result;
}



int main(void) {
    // Input file 
    IntegerArray myData = readIntegersFromFile("./elephant_seal_data.txt");
    double avg = 0.0;

    if (myData.array != NULL) {
        printf("Numbers read from file: \n");
        for (int i = 0; i < myData.size; i++) {
            avg += (myData.array[i] - avg) / (i + 1);
        }
        // The average is now correctly calculated in "avg"
        if (myData.size > 0) {
            printf("Average: %lf\n", avg);
        } else {
            printf("THe array is empty. Cannot calculate the average \n");
        }

        free(myData.array);
    }
    return 0;
}
