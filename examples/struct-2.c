/* Listing 3.2: Structure as a Function Parameter */
#include <stdio.h>

// take note of this global declaration
struct dateTag {
  int month;
  int day;
  int year;
};

void PrintDate(struct dateTag myDate) {
  printf("%d/%d/%d", myDate.month, myDate.day, myDate.year);
}

int main() {
  struct dateTag today;

  today.month = 12;
  today.day = 25;
  today.year = 2009;

  printf("Today's date is ");
  PrintDate(today);

  return 0;
}
