/* This program checks if an input matches the password */

#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 20
#define MAX_TRIES 3

typedef char Password[MAX_CHARACTERS + 1];

int getPassword(Password password) {
  Password str;

  for (int i = 0; i < MAX_TRIES; i++) {
    scanf("%[^\n]%*c", str);

    if (strcmp(str, password) == 0) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int returnValue = getPassword("NEW YORK");

  printf("%d", returnValue);
}
