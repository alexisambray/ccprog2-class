/* Listing 2.6: Example program illustrating strcmp() */
#include <stdio.h>
#include <string.h>

int main() {
  char str1[4] = "ABC";
  char str2[4] = "XYZ";

  // "ABC" is equal to "ABC" result is 0
  printf("%d\n", strcmp(str1, "ABC"));
  // "ABC" is less than "XYZ" result is a negative value
  printf("%d\n", strcmp(str1, str2));
  // "XYZ" is greater than "ABC", result is a positive value
  printf("%d\n", strcmp(str2, str1));
  // "ABC" is less than "X", result is a negative value
  printf("%d\n", strcmp("ABC", "X"));
  // "aBC" is greater than "ABC", result is a positive value
  printf("%d\n", strcmp("aBC", "ABC"));

  return 0;
}
