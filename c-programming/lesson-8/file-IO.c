/*
Input and output file in C
By Duc
Feb 14, 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *ifp;
  int score;
  int count = 0;
  double sum = 0.0;
  double average;

  ifp = fopen("myhomework-score.txt", "r"); // Open input FILE

  if (ifp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  while (fscanf(ifp, "%d", &score) == 1) {
    sum += score;
    count++;
  }

  if (count > 0) {
    average = sum / count;
    printf("Average score: %.2f\n", average);
  } else {
    printf("No score found in the file.\n");
  }

  fclose(ifp);
  ifp = NULL;

  return 0;
}
