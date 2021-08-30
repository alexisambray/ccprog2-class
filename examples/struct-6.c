/* Listing 3.6: Array of Structure */
#include <stdio.h>

// take note of this global declaration
struct dateTag {
  int month;
  int day;
  int year;
};

void InputDateArray(struct dateTag dateArray[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("Input month, day and year of element %d: ", i);
    scanf("%d %d %d", &dateArray[i].month, &dateArray[i].day,
          &dateArray[i].year);
  }
}

void OutputDateArray(struct dateTag dateArray[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("Element %d is %d/%d/%d\n", i, dateArray[i].month, dateArray[i].day,
           dateArray[i].year);
}

int main() {
  struct dateTag dateArray[5];

  InputDateArray(dateArray, 5);
  OutputDateArray(dateArray, 5);

  return 0;
}
