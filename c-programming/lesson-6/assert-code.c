/*
Assert testing within trivial program
Duc
Jan 21, 2025
*/

// #include <assert.h>
// #include <stdio.h>
// #include <ctype.h>
//
// int main() {
//   assert(0);
//   printf("My program run\n");
//   return 0;
// }

#include <assert.h>
#include <stdio.h>

int main() {
  double x, y;
  while(1) { // It is the same as while True in python
    printf("Read in 2 floats:\n");
    scanf("%lf %lf", &x, &y);
    assert(y != 0); 
    printf("when divided x/y = %lf\n", x/y);
  }
  return 0;
}
