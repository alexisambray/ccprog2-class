/* Listing 3.1: Example struct type and instance declarations */
#include <stdio.h>
#include <string.h>

// first: declare the struct templates
struct phoneTag {
  int number;
  char name[30];
};

struct accountTag {
  char login_name[7];
  char password[20];
};

struct dateTag {
  int month;
  int day;
  int year;
};

int main() {
  // next: declare the instances
  struct phoneTag landline;
  struct accountTag email_account;
  struct accountTag facebook_account;
  struct dateTag today;
  struct dateTag birthdate;

  birthdate.month = 12;
  birthdate.day = 25;
  birthdate.year = 2009;

  // print birthdate members
  printf("Birthdate is %d/%d/%d\n", birthdate.month, birthdate.day,
         birthdate.year);

  // input today members
  printf("Input today's month day and year: ");
  scanf("%d %d %d", &today.month, &today.day, &today.year);

  // print today members
  printf("Today is %d/%d/%d\n", today.month, today.day, today.year);

  // initialize using strcpy()
  strcpy(email_account.login_name, "pusa");
  strcpy(email_account.password, "MuNinG123");

  // input using scanf("%s", ...)
  printf("Input login name: ");
  scanf("%s", facebook_account.login_name);
  printf("Input password: ");
  scanf("%s", facebook_account.password);

  return 0;
}
