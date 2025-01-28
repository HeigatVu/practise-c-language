/*
Enumerated types 
Duc
Jan 19, 2025
*/

#include <stdio.h>

enum day {
  SUN,
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
};
typedef enum day day;

void print_day(enum day d) {
  switch (d) {
    case SUN: printf(" Sunday "); break;
    case MON: printf(" Monday "); break;
    case TUE: printf(" Tuesday "); break;
    case WED: printf(" WEDNESDAY "); break;
    case THU: printf(" THURSDAY "); break;
    case FRI: printf(" Friday "); break;
    case SAT: printf(" Saturday "); break;
    default: printf(" %d is an error ", d); 
  }
}

enum day next_day(enum day d) { //After using typedef, instead of using "enum day", we can use "day"
  return (d + 1 % 7);
}

int main () {
  enum day today = FRI; // day today = FRI
  print_day(today);
  printf("\n\n");
  print_day(7);
  printf("\n\n");
  print_day(next_day(today));
  printf("\n\n");
  return 0;
}
