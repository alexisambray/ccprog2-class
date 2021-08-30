/* Listing 3.5: Passing a Structure Pointer as Parameter */
#include <stdio.h>
#include <string.h>

typedef char String[30];

// take note of this global declaration
struct dateTag {
  int month;
  int day;
  int year;
};

struct employeeTag {
  String firstName[20];
  String lastName[20];
};

void InputDate(struct dateTag* ptr) {
  printf("Input month, day and year: ");
  scanf("%d %d %d", &ptr->month, &ptr->day, &ptr->year);
}

void InputEmployee(struct employeeTag* ptr) {
  printf("\nInput first name and last name: ");
  scanf("%s %s", ptr->firstName, ptr->lastName);
}

void PrintEmployee(struct employeeTag* ptr) {
  printf("%s %s", ptr->firstName, ptr->lastName);
}

void PrintDate(struct dateTag* ptr) {
  printf("%d/%d/%d", ptr->month, ptr->day, ptr->year);
}

int main() {
  struct dateTag today;
  struct employeeTag name;

  InputDate(&today);
  printf("Today's date is ");
  PrintDate(&today);

  InputEmployee(&name);
  printf("Employee's name is ");
  PrintEmployee(&name);

  return 0;
}
