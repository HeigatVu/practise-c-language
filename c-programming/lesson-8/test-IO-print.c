/*
I/O printf in C
By Duc
Jan 14,2025
*/

#include <stdio.h>

int main() {

  char c = 'A';
  int i = 10;
  double x = 0.123456789;

  printf("Character examples: \n");
  printf("[%c] \n", c);  // [A]
  printf("[%2c]\n", c);  // [ A] (right-justified width 2)
  printf("[%-2c]\n", c); // [A ] (left-justified width 2)

  printf("\nInteger example \n");
  printf("[%d]\n", i);   // [123]
  printf("[%5d]\n", i);  // [  123] (right-justified width 5)
  printf("[%-5d]\n", i); // [123  ] (left-justified width 5)
  printf("[%05d]\n", i); // [00123] (zero-padded width 5)

  printf("\nFloating-point example\n");
  printf("[%f]\n", x);      // [0.1234567] default precision
  printf("[%.2f]\n", x);    // [0.12] precision 2
  printf("[%10.2f]\n", x);  // [   0.12] width 10, precision 2
  printf("[%-10.2f]\n", x); // [0.12     ] left-justified
  printf("[%e]\n", x);      // [1.2345678e-01] scientific notation
  printf("[%.3e]\n", x);    // [1.234e-01] scientific notation with precision 3
  printf("[%12.5e]\n",
         x); // [  1.234567e-01] width 12, precision 5, scientific notation
  printf("[%E]\n", x);

  printf("\nOther example:\n");
  printf("Print percentage: %%\n");  // Output: Print percentage: %
  printf("hexadecimal x = %x\n", i); // Output: hexadecimal x = 7b
  printf("Octal i = %o\n", i);       // Output is: Octal i = 173
  printf("Unsigned i = %u\n", i);    // Output is: Unsigned i = 123
  int *ptr = &i;
  printf("Address of i = %p\n", (void *)ptr); // Output: Address of i = 0x7
  printf("Sizeof i = %zu\n", sizeof(i));      // Output: Sizeof i = 4

  // Incorrect conversion (as demonstrated in the video)
  // printf("Incorrect: [%d]\n", x); // This is undefined behavior!

  // Correct way to cast a double to an int (for demonstration)
  printf("Corrected (casted): [%d]\n", (int)x); // Output: [0]

  return 0;
}
