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

  scanf("%d", &landline.number);
  printf("%d\n", landline.number);

  return 0;
}
