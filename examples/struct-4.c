/* Listing 3.4: Pointer to Structure */
#include <stdio.h>

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
  struct dateTag* ptr;  // pointer to structure dateTag

  ptr = &today;
  (*ptr).month = 12;  // access today members indirectly
  (*ptr).day = 25;
  (*ptr).year = 2009;

  printf("Date today is ");
  PrintDate(today);
  printf("\n");

  return 0;
}
