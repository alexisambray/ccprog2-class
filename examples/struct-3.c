/* Listing 3.3: Function Returning a Structure */
#include <stdio.h>

// take note of this global declaration
struct dateTag {
  int month;
  int day;
  int year;
};

struct dateTag GetDate(void) {
  struct dateTag myDate;

  printf("Input month, day and year: ");
  scanf("%d %d %d", &myDate.month, &myDate.day, &myDate.year);

  return myDate;
}

void PrintDate(struct dateTag myDate) {
  printf("%d/%d/%d", myDate.month, myDate.day, myDate.year);
}

int main() {
  struct dateTag today;

  today = GetDate();
  printf("Today's date is ");
  PrintDate(today);

  return 0;
}
