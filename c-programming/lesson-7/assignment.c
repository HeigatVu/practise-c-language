/*
Assignment option 1 and 2
By Duc
Feb 6, 2025
*/

#include <stdio.h>

// Option 1: Date with enum and struct with function nextday and print day
typedef enum {
  JAN,
  FEB,
  MAR,
  APR,
  MAY,
  JUN,
  JUL,
  AUG,
  SEP,
  OCT,
  NOV,
  DEC,
} Month;

typedef struct {
  Month month;
  int day;
} Date;

/* const char *month_name(Date d) { */
/*   switch (m) { */
/*   case JAN: */
/*     return ("Jan"); */
/*   case FEB: */
/*     return ("Feb"); */
/*   case MAR: */
/*     return ("Mar"); */
/*   case APR: */
/*     return ("Apr"); */
/*   case MAY: */
/*     return ("May"); */
/*   case JUN: */
/*     return ("Jun"); */
/*   case JUL: */
/*     return ("Jul"); */
/*   case AUG: */
/*     return ("Aug"); */
/*   case SEP: */
/*     return ("Sep"); */
/*   case OCT: */
/*     return ("Oct"); */
/*   case NOV: */
/*     return ("Nov"); */
/*   case DEC: */
/*     return ("Dec"); */
/*   default: */
/*     return ("Invalid month"); */
/*   } */
/* } */
const char *month_name(Date d) {
  static const char *month_names[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

  if (d.month >= 0 && d.month < 12) {
    return month_names[d.month];
  } else {
    return "Invalid month";
  }
}

// option for using dot operator
/* Date nextday(Date d) { */
/*   int next_day = d.day++; */
/*   if (next_day > 31) { */
/*     next_day = 1; */
/*     d.month = (d.month + 1) % 12; */
/*   } */
/*   return d; */
/* } */

Date nextday(Date *d) {
  int nextDay = ++d->day;
  if (nextDay > 31) {
    nextDay = 1;
    d->month = (d->month + 1) % 12;
  }
  return *d;
}

void printDate(Date d) { printf("%s %d", month_name(d), d.day); }

int main() {
  Date d = {DEC, 12};
  printf("Initial date: ");
  printDate(d);
  printf("\n\n");
  Date nextDay = nextday(&d);
  printf("Next date: ");
  printDate(nextDay);

  return 0;
}
