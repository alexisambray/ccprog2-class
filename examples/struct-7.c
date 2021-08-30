/* Listing 3.7: Typedef and Struct */
#include <stdio.h>

struct dateTag {
  int month;
  int day;
  int year;
};

typedef struct dateTag dataType;

dataType GetDate(void) {
  dataType myDate;

  printf("Input month, day and year: ");
  scanf("%d %d %d", &myDate.month, &myDate.day, &myDate.year);

  return myDate;
}

void PrintDate(dataType myDate) {
  printf("%d/%d/%d", myDate.month, myDate.day, myDate.year);
}

int main() {
  dataType today;

  today = GetDate();

  printf("Today's date is ");
  PrintDate(today);

  return 0;
}
