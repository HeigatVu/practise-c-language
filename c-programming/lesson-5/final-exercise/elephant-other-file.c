#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    double *weights; 
    int count = 0;
    double weight, total = 0.0;

    file = fopen("elephant_seal_data.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file\n");
        return 1;
    }

    while (fscanf(file, "%lf", &weight) == 1) {
        count++;
    }

    weights = (double *)malloc(count * sizeof(double));
    if (weights == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    fseek(file, 0, SEEK_SET);
    int i = 0;
    while (fscanf(file, "%lf", &weight) == 1) {
        weights[i++] = weight;
        total += weight;
    }

    fclose(file);

    double average = total / count;
    printf("Average weight: %.2f\n", average);

    free(weights);

    return 0;
}
