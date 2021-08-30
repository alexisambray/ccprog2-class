/* Listing 3.5: Passing a Structure Pointer as Parameter */
#include <stdio.h>

// take note of this global declaration
struct dateTag {
  int month;
  int day;
  int year;
};

void InputDate(struct dateTag* ptr) {
  printf("Input month, day and year: ");
  scanf("%d %d %d", &ptr->month, &ptr->day, &ptr->year);
}

void OutputDate(struct dateTag* ptr) {
  printf("%d/%d/%d", ptr->month, ptr->day, ptr->year);
}

void PrintDate(struct dateTag* ptr) {
  printf("%d/%d/%d", ptr->month, ptr->day, ptr->year);
}

int main() {
  struct dateTag today;

  InputDate(&today);
  printf("Today's date is ");
  PrintDate(&today);

  return 0;
}
