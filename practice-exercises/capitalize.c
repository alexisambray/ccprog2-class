/* This program transforms all characters to uppercase letters */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char* capitalize(char* str) {
  for (int i = 0; i < strlen(str); i++) {
    str[i] = toupper(str[i]);
  }
  return str;
}

int main() {
  char str[] = "caTs ANd DogS";

  puts(capitalize(str));

  return 0;
}
